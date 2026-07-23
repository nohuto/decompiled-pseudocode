/*
 * XREFs of TpStartAsyncIoOperation @ 0x18003C7D0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v2; // rcx

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 1LL) )
  {
    TppBarrierAdjust((char *)Io + 56, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)Io + 68);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    v2 = *((_QWORD *)Io + 17);
    if ( *(_DWORD *)(v2 + 424) != MEMORY[0x7FFE03C0] )
      TppAdjustRunningThreadGoal(v2);
  }
}
