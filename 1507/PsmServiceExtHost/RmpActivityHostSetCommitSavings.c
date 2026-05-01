/*
 * XREFs of RmpActivityHostSetCommitSavings @ 0x18004242C
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 */

char __fastcall RmpActivityHostSetCommitSavings(__int64 a1, int a2, unsigned int a3)
{
  char v4; // al
  char result; // al
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v6) = a2;
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a1,
    521,
    a3,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v6);
  v4 = v6;
  *(_BYTE *)(a1 + 772) &= ~0x10u;
  result = 16 * (v4 & 1);
  *(_BYTE *)(a1 + 772) |= result;
  return result;
}
