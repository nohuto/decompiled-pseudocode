/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800E52B0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800E5150 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  _BYTE *v0; // rax
  char v1; // dl
  __int64 v2; // rcx
  _DWORD v4[32]; // [rsp+70h] [rbp-39h] BYREF

  memset(v4, 0, 0x78uLL);
  v4[0] = 120;
  RtlGetNtProductType(&v4[1]);
  v0 = v4;
  v1 = 0;
  *(_WORD *)((char *)&v4[2] + 1) = 286;
  BYTE1(v4[12]) = 1;
  v2 = 120LL;
  do
  {
    v1 -= *v0++;
    --v2;
  }
  while ( v2 );
  BYTE2(v4[12]) = v1;
  return NtWriteFile();
}
