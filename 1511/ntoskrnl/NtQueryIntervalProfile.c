/*
 * XREFs of NtQueryIntervalProfile @ 0x1404E340C
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryIntervalProfile @ 0x1404E3464 (KeQueryIntervalProfile.c)
 */

NTSTATUS __stdcall NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  PULONG v2; // rbx

  v2 = Interval;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)Interval >= MmUserProbeAddress )
      Interval = (PULONG)MmUserProbeAddress;
    *Interval = *Interval;
  }
  *v2 = KeQueryIntervalProfile(ProfileSource);
  return 0;
}
