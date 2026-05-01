/*
 * XREFs of RmpActivityHostSetCommitSavings @ 0x1800472EC
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x1800046F8 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18001DBB0 (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 */

char __fastcall RmpActivityHostSetCommitSavings(__int64 a1, int a2, unsigned int a3)
{
  char v4; // al
  char result; // al
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a1,
    521,
    a3,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v6);
  v4 = v6;
  *(_BYTE *)(a1 + 780) &= ~0x10u;
  result = 16 * (v4 & 1);
  *(_BYTE *)(a1 + 780) |= result;
  return result;
}
