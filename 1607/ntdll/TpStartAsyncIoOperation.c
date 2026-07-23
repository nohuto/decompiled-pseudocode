/*
 * XREFs of TpStartAsyncIoOperation @ 0x18003C100
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003C160 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v2; // r9
  __int64 v3; // rcx

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 1LL) )
  {
    TppBarrierAdjust((char *)Io + 56, 1LL, 0LL, v2);
    _InterlockedIncrement((volatile signed __int32 *)Io + 70);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    v3 = *((_QWORD *)Io + 18);
    if ( *(_DWORD *)(v3 + 424) != MEMORY[0x7FFE03C0] )
      TppAdjustRunningThreadGoal(v3);
  }
}
