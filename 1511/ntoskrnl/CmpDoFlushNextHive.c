/*
 * XREFs of CmpDoFlushNextHive @ 0x1403DE1A0
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // di
  unsigned __int64 v6; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 UnbiasedInterruptTime; // r11

  v2 = -1LL;
  v3 = 0;
  if ( CmpNoWrite )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v8 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 88) || *(_BYTE *)(NextActiveHive + 175) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v6 = *(_QWORD *)(NextActiveHive + 5384) + 10000000LL * (unsigned int)dword_1402C7450;
          if ( UnbiasedInterruptTime >= v6 )
          {
            if ( (int)CmpFlushHive(NextActiveHive) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v8 = 10000000LL * (unsigned int)dword_1402C745C;
            }
          }
          else
          {
            v3 = 1;
            v8 = v6 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 5488) & 4) == 0 )
        {
          CmpFlushHive(NextActiveHive);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
      }
      if ( v8 < v2 )
        v2 = v8;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v2;
  }
  return v3;
}
