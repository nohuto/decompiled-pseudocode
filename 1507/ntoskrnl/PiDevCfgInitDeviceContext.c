/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x14058A12C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140686FA0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14068CEDC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  int ObjectProperties; // ebp
  _BYTE *v8; // rcx
  __int64 v9; // r9
  DEVPROPKEY **v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // edi
  int *v14; // rsi
  _BYTE v16[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  v6 = a3 + 2;
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
      PiDevCfgFreeDeviceContext(a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v16, 0, 0x78uLL);
  v8 = &v16[8];
  v9 = 3LL;
  v10 = off_14077E7B8;
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
  ObjectProperties = PiDevCfgQueryObjectProperties((_DWORD)v8, a3[1], 1, *v6, (__int64)v16, 3);
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
