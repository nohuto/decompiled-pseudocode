/*
 * XREFs of NtSetTimer2 @ 0x1400EC618
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( Period )
    return -1073741822;
  else
    return ExpSetTimer2(TimerHandle, (unsigned __int64)DueTime, (unsigned __int64)Parameters);
}
