/*
 * XREFs of PspExpandLimit @ 0x1401F52FC
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140547554 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x140012F30 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x140012F88 (PspLockQuotaExpansion.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rbp
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a1;
  PspLockQuotaExpansion((__int64)v6, &v9, a3);
  LOBYTE(a4) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v6 + 3))(a1, 0LL, a3, a4);
  PspUnlockQuotaExpansion((__int64)v6, v9);
  return a4;
}
