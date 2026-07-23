/*
 * XREFs of NtQueryIntervalProfile @ 0x14052A7B4
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryIntervalProfile @ 0x14052A810 (KeQueryIntervalProfile.c)
 */

NTSTATUS __stdcall NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  PULONG v2; // rbx

  v2 = Interval;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)Interval >= 0x7FFFFFFF0000LL )
      Interval = (PULONG)0x7FFFFFFF0000LL;
    *Interval = *Interval;
  }
  *v2 = KeQueryIntervalProfile(ProfileSource);
  return 0;
}
