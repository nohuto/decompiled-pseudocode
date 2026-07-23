/*
 * XREFs of TpWaitForIoCompletion @ 0x180083590
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     TppETWCallbackCancel @ 0x1800F5710 (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 68, 0);
    TppBarrierAdjust((_RTL_SRWLOCK *)Io + 7, -CancelPendingCallbacks, 1);
    if ( CancelPendingCallbacks )
    {
      if ( MEMORY[0x7FFE0386] )
        TppETWCallbackCancel(
          *((_QWORD *)Io + 17),
          (_DWORD)Io + 192,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
