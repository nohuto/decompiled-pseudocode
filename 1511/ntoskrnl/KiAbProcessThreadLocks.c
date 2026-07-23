/*
 * XREFs of KiAbProcessThreadLocks @ 0x14003203C
 * Callers:
 *     KiAbProcessLocksWorker @ 0x140031F4C (KiAbProcessLocksWorker.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiAbCpuBoostOwners @ 0x140031714 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCount @ 0x140031E90 (KiAbTryIncrementIoWaiterCount.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140035614 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400356AC (KiAbEntryGetCpuPriorityKey.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KiAbIoBoostOwners @ 0x1400E60F8 (KiAbIoBoostOwners.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1400EF2B4 (KiAbDetermineMaxWaiterPriority.c)
 */

char __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // r12
  __int64 v13; // r9
  char v14; // r10
  __int64 v15; // rbx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // si
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char CpuPriorityKey; // bl
  char v26; // al
  char v27; // dl
  __int64 v29; // [rsp+30h] [rbp-20h]
  _BYTE v30[24]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v31; // [rsp+90h] [rbp+40h] BYREF
  int v32; // [rsp+A0h] [rbp+50h]
  int v33; // [rsp+A8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  v7 = a4;
  LOBYTE(LockedHeadEntry) = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1418);
  if ( (_BYTE)LockedHeadEntry != 63 )
  {
    v10 = a1 + 800;
    v29 = a1 + 800;
    v11 = (*(char *)(a1 + 792) | *(char *)(a1 + 1418)) ^ 0x3F;
    v16 = !_BitScanForward((unsigned int *)&a1, v11);
    if ( !v16 )
    {
      v12 = a7;
      LODWORD(v13) = 0;
      v14 = 15;
      while ( 1 )
      {
        v11 &= v11 - 1;
        v15 = v10 + 96 * a1;
        LockedHeadEntry = *(_RTL_RB_TREE **)(v15 + 32);
        if ( !LockedHeadEntry || ((unsigned __int8)LockedHeadEntry & 2) != 0 )
          break;
        if ( a2 && ((unsigned __int8)LockedHeadEntry & 1) != 0 )
          goto LABEL_25;
        LockedHeadEntry = (_RTL_RB_TREE *)(*(_QWORD *)(v15 + 32) >> 63);
        if ( *(__int64 *)(v15 + 32) >= 0 )
        {
          LODWORD(LockedHeadEntry) = a2;
          goto LABEL_29;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v15 + 27) & 1) != 0 )
            goto LABEL_25;
          if ( (*(_BYTE *)(v15 + 25) & 1) == 0 )
          {
            LOBYTE(LockedHeadEntry) = KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1);
            if ( (_BYTE)LockedHeadEntry != *(_BYTE *)(v15 + 48) )
            {
LABEL_12:
              LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v15);
              v13 = 0LL;
              v19 = (__int64)LockedHeadEntry;
              if ( LockedHeadEntry )
              {
                if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_22;
                  if ( (_RTL_RB_TREE *)v15 != LockedHeadEntry )
                    KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v15);
                  HIBYTE(v31) = *(_WORD *)(v19 + 90) != 0 ? 2 : 0;
                  v20 = *(_QWORD *)(v19 + 56);
                  if ( v20 )
                    v21 = *(_BYTE *)(v20 + 48);
                  else
                    v21 = 15;
                  v16 = (*(_BYTE *)(v19 + 25) & 1) == 0;
                  LOBYTE(v31) = v21;
                  if ( v16 )
                  {
                    v26 = KiAbOwnerComputeCpuPriorityKey(v19);
                    v27 = v21;
                    if ( v26 < v21 )
                      v27 = v26;
                    v21 = v27;
                    LOBYTE(v31) = v27;
                  }
                  v22 = KiAbTryIncrementIoWaiterCount((unsigned __int8 *)v15, v19);
                  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15, v23, v24, v22);
                  if ( v21 < CpuPriorityKey )
                  {
                    if ( (_DWORD)v13 )
                      goto LABEL_44;
                  }
                  else
                  {
                    if ( !(_DWORD)v13 )
                      goto LABEL_22;
LABEL_44:
                    KiAbIoBoostOwners(v19, a5, a6, v12);
                  }
                  KiAbCpuBoostOwners(v19, CpuPriorityKey, a5, a6, v12);
                }
                else if ( v7 )
                {
                  if ( (_RTL_RB_TREE *)v15 != LockedHeadEntry )
                    KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v15, LockedHeadEntry);
                  KiAbDetermineMaxWaiterPriority(v19, &v31, v18, 0LL);
                  if ( v31 != (_WORD)v13
                    && (unsigned int)KiAbSetMinimumThreadPriority(v15, (unsigned int)&v31, a5, a6, v12)
                    && v15 != v19 )
                  {
                    KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v15, (_RTL_RB_TREE *)v19);
                  }
                }
LABEL_22:
                LOBYTE(LockedHeadEntry) = KxReleaseQueuedSpinLock(v30, v17, v18, v13);
                LODWORD(v13) = 0;
              }
              v14 = 15;
            }
            a3 = v32;
            v10 = v29;
            goto LABEL_25;
          }
          LOBYTE(LockedHeadEntry) = *(_BYTE *)(v15 - (unsigned __int16)(16 * *(unsigned __int8 *)(v15 + 24)) + 195);
          if ( (char)LockedHeadEntry > v14 )
            LOBYTE(LockedHeadEntry) = v14;
          v16 = (_BYTE)LockedHeadEntry == *(_BYTE *)(v15 + 48);
        }
        else if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
        {
          v16 = a3 == 0;
        }
        else
        {
          v16 = v7 == 0;
        }
LABEL_11:
        if ( !v16 )
          goto LABEL_12;
LABEL_25:
        v16 = !_BitScanForward((unsigned int *)&a1, v11);
        v7 = v33;
        if ( v16 )
          return (char)LockedHeadEntry;
      }
      LODWORD(LockedHeadEntry) = v13;
LABEL_29:
      v16 = (_DWORD)LockedHeadEntry == 0;
      goto LABEL_11;
    }
  }
  return (char)LockedHeadEntry;
}
