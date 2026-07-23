/*
 * XREFs of NtQueryTimerResolution @ 0x1404C9C28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryTimerResolution(PULONG MinimumResolution, PULONG MaximumResolution, PULONG ActualResolution)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = (__int64)MinimumResolution;
    if ( (unsigned __int64)MinimumResolution >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = (__int64)MaximumResolution;
    if ( (unsigned __int64)MaximumResolution >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = (__int64)ActualResolution;
    if ( (unsigned __int64)ActualResolution >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v7 = *(_DWORD *)v7;
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
