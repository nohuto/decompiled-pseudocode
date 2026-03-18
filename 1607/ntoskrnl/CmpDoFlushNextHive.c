/*
 * XREFs of CmpDoFlushNextHive @ 0x1403FB594
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140514594 (CmpDoQueueLateUnloadWorker.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // di
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 v10; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( CmpNoWrite )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v7 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 88) || *(_BYTE *)(NextActiveHive + 175) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v10 = *(_QWORD *)(NextActiveHive + 5384) + 10000000LL * (unsigned int)dword_1402F2830;
          if ( UnbiasedInterruptTime >= v10 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 0x12u) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_1402F283C;
            }
          }
          else
          {
            v3 = 1;
            v7 = v10 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 5488) & 4) == 0 )
        {
          CmpFlushHive(NextActiveHive, 0x22u);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
      {
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
      }
      if ( v7 < v2 )
        v2 = v7;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v2;
  }
  return v3;
}
