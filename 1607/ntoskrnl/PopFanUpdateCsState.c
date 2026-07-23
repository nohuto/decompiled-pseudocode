/*
 * XREFs of PopFanUpdateCsState @ 0x140673148
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1406730B0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140303F85 )
    {
      if ( byte_140303F84 )
        PopFanEndCsFanPeriod();
      qword_140303F90 = 0LL;
      byte_140303F85 = 0;
    }
  }
  else if ( !byte_140303F85 )
  {
    byte_140303F85 = 1;
    qword_140303F90 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock(&PopFanLock);
}
