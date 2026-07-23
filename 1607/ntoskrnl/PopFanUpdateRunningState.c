/*
 * XREFs of PopFanUpdateRunningState @ 0x1406731BC
 * Callers:
 *     PopFanWorker @ 0x14067324C (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1406730B0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
    ++PopFanTracking;
  else
    --PopFanTracking;
  if ( PopFanTracking )
  {
    if ( !byte_140303F84 )
    {
      byte_140303F84 = 1;
      qword_140303F88 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140303F84 )
  {
    if ( byte_140303F85 )
      PopFanEndCsFanPeriod();
    qword_140303F88 = 0LL;
    byte_140303F84 = 0;
  }
  PopReleaseRwLock(&PopFanLock);
}
