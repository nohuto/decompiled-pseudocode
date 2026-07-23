/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x140675104
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x14052979C (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14066C3A8 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140112708 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D310 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopNetUserPresencePredictionNotify @ 0x140673898 (PopNetUserPresencePredictionNotify.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(__int64 a1, unsigned int a2)
{
  if ( qword_1403032E8 != a1 && !PopAudioPlaybackCount )
  {
    qword_1403032E8 = a1;
    PopNetUserPresencePredictionNotify(a1);
    if ( byte_140303311 )
    {
      if ( PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
