/*
 * XREFs of PopFanUpdateRunningState @ 0x14063BD4C
 * Callers:
 *     PopFanWorker @ 0x14063BDDC (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14063BC40 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  PopAcquireRwLockExclusive((__int64)&PopFanLock);
  if ( a1 )
    ++PopFanTracking;
  else
    --PopFanTracking;
  if ( PopFanTracking )
  {
    if ( !byte_1402DE8C4 )
    {
      byte_1402DE8C4 = 1;
      qword_1402DE8C8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_1402DE8C4 )
  {
    if ( byte_1402DE8C5 )
      PopFanEndCsFanPeriod();
    qword_1402DE8C8 = 0LL;
    byte_1402DE8C4 = 0;
  }
  PopReleaseRwLock((signed __int64 *)&PopFanLock);
}
