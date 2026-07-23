/*
 * XREFs of TpWaitForIoCompletion @ 0x1800773F0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5D10 (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 68, 0);
    TppBarrierAdjust((char *)Io + 56, -CancelPendingCallbacks);
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
