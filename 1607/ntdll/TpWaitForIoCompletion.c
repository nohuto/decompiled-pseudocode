/*
 * XREFs of TpWaitForIoCompletion @ 0x1800879F0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003C160 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 70, 0);
    TppBarrierAdjust((_RTL_SRWLOCK *)Io + 7, -CancelPendingCallbacks, 1);
    if ( CancelPendingCallbacks )
    {
      if ( MEMORY[0x7FFE0386] )
        TppETWCallbackCancel(
          *((_QWORD *)Io + 18),
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
