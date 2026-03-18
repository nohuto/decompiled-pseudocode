/*
 * XREFs of PipHardwareConfigExists @ 0x140783404
 * Callers:
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x14043BD20 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x1405186D4 (_PnpCtxRegEnumKey.c)
 */

char __fastcall PipHardwareConfigExists(void *a1, int a2)
{
  int v2; // edi
  char v3; // bl
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v11; // [rsp+58h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  v2 = 0;
  v8 = 0;
  v3 = 0;
  LODWORD(v9) = 0;
  do
  {
    v7 = 260;
    ++v2;
    if ( (int)PnpCtxRegEnumKey((__int64)a1, a1) < 0 )
      break;
    if ( (int)PnpCtxRegOpenKey(0LL, (int)a1, (int)&v11, 0, 1, (__int64)Handle) >= 0 )
    {
      v7 = 4;
      if ( (int)PnpCtxRegQueryValue((__int64)a1, Handle[0], L"Id", &v9, &v8, &v7) >= 0
        && (_DWORD)v9 == 4
        && v7 == 4
        && v8 == a2 )
      {
        v3 = 1;
      }
      ZwClose(Handle[0]);
      Handle[0] = 0LL;
    }
  }
  while ( !v3 );
  return v3;
}
