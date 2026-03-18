/*
 * XREFs of VerifierInitSystem @ 0x1407B9E08
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140575940 (PsSetCreateProcessNotifyRoutine.c)
 *     VfPendingInitPhase1 @ 0x14070CF24 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140710A3C (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140716810 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
