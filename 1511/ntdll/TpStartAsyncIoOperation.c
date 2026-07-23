/*
 * XREFs of TpStartAsyncIoOperation @ 0x18000AB50
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 1LL) )
  {
    TppBarrierAdjust((_RTL_SRWLOCK *)Io + 7, 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)Io + 68);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    if ( *(_DWORD *)(*((_QWORD *)Io + 17) + 424LL) != MEMORY[0x7FFE03C0] )
      TppAdjustRunningThreadGoal();
  }
}
