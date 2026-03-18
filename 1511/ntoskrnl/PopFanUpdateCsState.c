/*
 * XREFs of PopFanUpdateCsState @ 0x14063BCD8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14063BC40 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((__int64)&PopFanLock);
  if ( a1 )
  {
    if ( byte_1402DE8C5 )
    {
      if ( byte_1402DE8C4 )
        PopFanEndCsFanPeriod();
      qword_1402DE8D0 = 0LL;
      byte_1402DE8C5 = 0;
    }
  }
  else if ( !byte_1402DE8C5 )
  {
    byte_1402DE8C5 = 1;
    qword_1402DE8D0 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((signed __int64 *)&PopFanLock);
}
