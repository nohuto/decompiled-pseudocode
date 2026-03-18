/*
 * XREFs of PspExpandLimit @ 0x14024368C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1405BE3DC (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1401256B8 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x14012574C (PspLockQuotaExpansion.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char *v6; // rbp
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a4;
  v6 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a1;
  PspLockQuotaExpansion(v6, &v9, a3, a4);
  LOBYTE(v5) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v6 + 3))(a1, 0LL, a3, v5);
  PspUnlockQuotaExpansion((__int64)v6, v9);
  return v5;
}
