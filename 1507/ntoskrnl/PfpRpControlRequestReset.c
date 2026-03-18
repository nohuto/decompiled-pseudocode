/*
 * XREFs of PfpRpControlRequestReset @ 0x1405C4684
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1404551BC (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x1406AFA78 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x1405C46D4 (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = (_QWORD *)NextProcess )
  {
    NextProcess = PsGetNextProcess(i, v2, v3, v4);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)(NextProcess + 772), 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
