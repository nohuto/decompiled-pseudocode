/*
 * XREFs of VerifierInitSystem @ 0x14076F860
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140530614 (PsSetCreateProcessNotifyRoutine.c)
 *     VfPendingInitPhase1 @ 0x1406C0EBC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1406C49B4 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1406C7E6C (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

__int64 VerifierInitSystem()
{
  __int64 result; // rax

  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  result = (unsigned int)ViImageExecutionOptions;
  if ( ViImageExecutionOptions == 1 )
    _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, 1u);
  return result;
}
