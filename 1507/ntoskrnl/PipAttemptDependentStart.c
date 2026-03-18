/*
 * XREFs of PipAttemptDependentStart @ 0x14067BA8C
 * Callers:
 *     PipAttemptDependentsStart @ 0x14046142C (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x14067BC3C (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1404E22B4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PipAttemptDependentStart(_QWORD *Object)
{
  __int64 v2; // rbx

  if ( Object )
    v2 = *(_QWORD *)(Object[39] + 40LL);
  else
    v2 = 0LL;
  if ( !v2
    || (*(_DWORD *)(v2 + 396) & 0x2000) == 0
    || *(_DWORD *)(v2 + 404) != 51
    || PipCheckForUnsatisfiedDependencies(v2, 3u) )
  {
    return 3221225473LL;
  }
  PipClearDevNodeProblem(v2);
  return PnpRequestDeviceAction(Object, 16, 1, 0LL, 0LL, 0LL);
}
