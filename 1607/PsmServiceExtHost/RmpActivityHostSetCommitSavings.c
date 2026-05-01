/*
 * XREFs of RmpActivityHostSetCommitSavings @ 0x18002F790
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 */

char __fastcall RmpActivityHostSetCommitSavings(__int64 a1, int a2)
{
  int v3; // edx
  char result; // al
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v5) = a2;
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a1,
    521,
    1,
    (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RmpActivityHostCommitSavingsCallback,
    &v5);
  v3 = v5;
  result = (*(_BYTE *)(a1 + 820) ^ (16 * v5)) & 0x10;
  *(_BYTE *)(a1 + 820) ^= result;
  if ( !v3 )
    *(_DWORD *)(a1 + 816) &= ~0x40u;
  return result;
}
