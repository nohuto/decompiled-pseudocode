/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14063C8C8
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140633EA0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140107AA0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateSmartUserPresencePredictions(__int64 a1)
{
  PopAcquirePolicyLock();
  qword_1402DEAE8 = a1;
  if ( byte_1402DEB11 && (PopIdleCancelAoAcDozeS4Timer(3u) || !*((_DWORD *)PopPolicy + 22)) )
    PopIdleArmAoAcDozeS4Timer();
  return PopReleasePolicyLock();
}
