/*
 * XREFs of PopFanUpdateRunningState @ 0x1406730D8
 * Callers:
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140672FCC (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140304044 )
    {
      byte_140304044 = 1;
      qword_140304048 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140304044 )
  {
    if ( byte_140304045 )
      PopFanEndCsFanPeriod();
    qword_140304048 = 0LL;
    byte_140304044 = 0;
  }
  PopReleaseRwLock(&PopFanLock);
}
