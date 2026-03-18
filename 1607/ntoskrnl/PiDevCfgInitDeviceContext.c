/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x1406394B4
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1404E9064 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405711DC (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14063934C (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406412DC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641360 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641684 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641D00 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PiDevCfgFreeDeviceContext @ 0x1404E9134 (PiDevCfgFreeDeviceContext.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, void *a2, __int64 *a3)
{
  void **v6; // rdi
  int ObjectProperties; // ebp
  _BYTE *v8; // rcx
  __int64 v9; // r9
  DEVPROPKEY **v10; // rdx
  __int64 *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // edi
  int *v14; // rsi
  _BYTE v16[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  v6 = (void **)(a3 + 2);
  if ( a2 )
  {
    *v6 = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x10u, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext((__int64)a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v16, 0, 0x78uLL);
  v8 = &v16[8];
  v9 = 3LL;
  v10 = off_1407477F8;
  v11 = a3 + 3;
  do
  {
    v12 = (__int64)*v10++;
    *((_QWORD *)v8 + 1) = v11;
    v11 += 2;
    *((_QWORD *)v8 - 1) = v12;
    *(_DWORD *)v8 = 8210;
    *((_DWORD *)v8 + 5) = 6;
    v8 += 40;
    --v9;
  }
  while ( v9 );
  ObjectProperties = PiDevCfgQueryObjectProperties((__int64)v8, a3[1], 1u, *v6, (__int64)v16, 3u);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v13 = 0;
  v14 = (int *)&v16[32];
  do
  {
    if ( *v14 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v13 + 3], 0LL);
    ++v13;
    v14 += 10;
  }
  while ( v13 < 3 );
  return (unsigned int)ObjectProperties;
}
