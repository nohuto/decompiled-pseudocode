/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x14051047C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140608D10 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14060CEF4 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x14053B1A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // r9
  DEVPROPKEY **v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // rax
  int ObjectProperties; // ebp
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
  v7 = &v16[8];
  v8 = 3LL;
  v9 = off_1406FB788;
  v10 = a3 + 3;
  do
  {
    v11 = (__int64)*v9++;
    *((_QWORD *)v7 + 1) = v10;
    v10 += 2;
    *((_QWORD *)v7 - 1) = v11;
    *(_DWORD *)v7 = 8210;
    *((_DWORD *)v7 + 5) = 6;
    v7 += 40;
    --v8;
  }
  while ( v8 );
  ObjectProperties = PiDevCfgQueryObjectProperties((_DWORD)v7, a3[1], 1, *v6, (__int64)v16, 3);
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
