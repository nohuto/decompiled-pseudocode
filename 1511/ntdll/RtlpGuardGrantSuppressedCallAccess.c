/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800EA22C
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EA1DC (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EA410 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A8150 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1)
{
  char v2; // [rsp+30h] [rbp-50h] BYREF
  int v3; // [rsp+38h] [rbp-48h]
  int v4; // [rsp+3Ch] [rbp-44h]
  char *v5; // [rsp+40h] [rbp-40h]
  _QWORD *v6; // [rsp+48h] [rbp-38h]
  unsigned __int64 v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  _QWORD v9[2]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v8 = 4096LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = 1LL;
  v9[0] = a1 & 0xFFF;
  v5 = &v2;
  v3 = 1;
  v6 = v9;
  return ZwSetInformationVirtualMemory();
}
