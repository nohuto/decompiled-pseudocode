/*
 * XREFs of PopFanUpdateCsState @ 0x140673064
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140672FCC (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140304045 )
    {
      if ( byte_140304044 )
        PopFanEndCsFanPeriod();
      qword_140304050 = 0LL;
      byte_140304045 = 0;
    }
  }
  else if ( !byte_140304045 )
  {
    byte_140304045 = 1;
    qword_140304050 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock(&PopFanLock);
}
