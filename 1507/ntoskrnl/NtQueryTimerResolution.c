/*
 * XREFs of NtQueryTimerResolution @ 0x140555170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryTimerResolution(PULONG MinimumResolution, PULONG MaximumResolution, PULONG ActualResolution)
{
  _DWORD *v5; // r8
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = MinimumResolution;
    if ( (unsigned __int64)MinimumResolution >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v6 = MaximumResolution;
    if ( (unsigned __int64)MaximumResolution >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    v7 = ActualResolution;
    if ( (unsigned __int64)ActualResolution >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    *MinimumResolution = KeMaximumIncrement;
    *MaximumResolution = KeMinimumIncrement;
    *ActualResolution = KeTimeIncrement;
  }
  else
  {
    *MinimumResolution = KeMaximumIncrement;
    *MaximumResolution = KeMinimumIncrement;
    *ActualResolution = KeTimeIncrement;
  }
  return 0;
}
