/*
 * XREFs of CmpDoFlushNextHive @ 0x140445D84
 * Callers:
 *     <none>
 * Callees:
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // di
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rsi

  v2 = -1LL;
  v3 = 0;
  if ( CmpNoWrite )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    v10 = 0xFFFFF780000003B0uLL;
    do
    {
      v11 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 88) || *(_BYTE *)(NextActiveHive + 175) )
        {
          v9 = 0xFFFFF78000000008uLL;
          v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
          v7 = *(_QWORD *)(NextActiveHive + 5384) + 10000000LL * (unsigned int)dword_140316530;
          if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v7 )
          {
            if ( (int)CmpFlushHive(NextActiveHive) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v11 = 10000000LL * (unsigned int)dword_14031653C;
            }
          }
          else
          {
            v3 = 1;
            v11 = v7 - v6;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 5488) & 4) == 0 )
        {
          CmpFlushHive(NextActiveHive);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
      {
        LOCK_HIVE_LOAD(v7, v6, v9, v10);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
      }
      if ( v11 < v2 )
        v2 = v11;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
      v10 = 0xFFFFF780000003B0uLL;
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v2;
  }
  return v3;
}
