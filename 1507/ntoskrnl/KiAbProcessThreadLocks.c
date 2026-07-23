/*
 * XREFs of KiAbProcessThreadLocks @ 0x1400F3A10
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KiAbProcessLocksWorker @ 0x1400F3920 (KiAbProcessLocksWorker.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiAbTryIncrementIoWaiterCount @ 0x1400F2BB4 (KiAbTryIncrementIoWaiterCount.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400F475C (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400F4C38 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140117EEC (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCpuBoostOwners @ 0x140122E4C (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140123290 (KiAbIoBoostOwners.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

char __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  __int64 LockedHeadEntry; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // r12
  signed __int64 v13; // r10
  char v14; // r9
  __int64 v15; // rbx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // si
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // edx
  char CpuPriorityKey; // bl
  int v26; // r9d
  char v27; // al
  char v28; // dl
  int v29; // eax
  __int64 v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v33; // [rsp+48h] [rbp-18h]
  void *retaddr; // [rsp+98h] [rbp+38h]
  __int16 v35; // [rsp+A0h] [rbp+40h] BYREF
  int v36; // [rsp+B0h] [rbp+50h]
  int v37; // [rsp+B8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v7 = a4;
  LOBYTE(LockedHeadEntry) = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1418);
  if ( (_BYTE)LockedHeadEntry != 63 )
  {
    v10 = a1 + 800;
    v31 = a1 + 800;
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
        LockedHeadEntry = *(_QWORD *)(v15 + 32);
        if ( !LockedHeadEntry || (LockedHeadEntry & 2) != 0 )
          break;
        if ( a2 && (LockedHeadEntry & 1) != 0 )
          goto LABEL_28;
        LockedHeadEntry = *(_QWORD *)(v15 + 32) >> 63;
        if ( *(__int64 *)(v15 + 32) >= 0 )
        {
          LODWORD(LockedHeadEntry) = a2;
          goto LABEL_32;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v15 + 27) & 1) != 0 )
            goto LABEL_28;
          if ( (*(_BYTE *)(v15 + 25) & 1) == 0 )
          {
            LOBYTE(LockedHeadEntry) = KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1, v10);
            if ( (_BYTE)LockedHeadEntry == *(_BYTE *)(v15 + 48) )
            {
              a3 = v36;
              goto LABEL_27;
            }
LABEL_12:
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v15);
            v13 = 0LL;
            v18 = LockedHeadEntry;
            if ( !LockedHeadEntry )
              goto LABEL_25;
            if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
            {
              a3 = v36;
              if ( v36 )
              {
                if ( v15 != LockedHeadEntry )
                  KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v15);
                HIBYTE(v35) = *(_WORD *)(v18 + 90) != 0 ? 2 : 0;
                v19 = *(_QWORD *)(v18 + 56);
                if ( v19 )
                  v20 = *(_BYTE *)(v19 + 48);
                else
                  v20 = 15;
                v16 = (*(_BYTE *)(v18 + 25) & 1) == 0;
                LOBYTE(v35) = v20;
                if ( v16 )
                {
                  v27 = KiAbOwnerComputeCpuPriorityKey(v18, v17);
                  v28 = v20;
                  if ( v27 < v20 )
                    v28 = v27;
                  v20 = v28;
                  LOBYTE(v35) = v28;
                }
                v21 = KiAbTryIncrementIoWaiterCount((unsigned __int8 *)v15, v18);
                CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15, v22, v23, v21);
                if ( v20 < CpuPriorityKey )
                {
                  if ( v26 )
                    goto LABEL_53;
                }
                else
                {
                  v13 = 0LL;
                  if ( !v26 )
                    goto LABEL_22;
LABEL_53:
                  KiAbIoBoostOwners(v18, a5, a6, v12);
                }
                LOBYTE(v24) = CpuPriorityKey;
                KiAbCpuBoostOwners(v18, v24, a5, a6, v12);
LABEL_45:
                v13 = 0LL;
                goto LABEL_46;
              }
              goto LABEL_47;
            }
            if ( !v7 )
              goto LABEL_46;
            if ( v15 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v15);
            KiAbDetermineMaxWaiterPriority(v18, &v35);
            if ( v35 == (_WORD)v13 )
            {
LABEL_22:
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
              {
                LockedHeadEntry = v32;
                v16 = v32 == 0;
                _m_prefetchw(&v32);
                if ( !v16 )
                  goto LABEL_51;
                LockedHeadEntry = _InterlockedCompareExchange64(v33, v13, (signed __int64)&v32);
                if ( (__int64 *)LockedHeadEntry != &v32 )
                  goto LABEL_50;
                goto LABEL_25;
              }
            }
            else
            {
              v29 = KiAbSetMinimumThreadPriority(v15, (unsigned int)&v35, a5, a6, v12);
              v13 = 0LL;
              if ( v29 && v15 != v18 )
              {
                KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v15);
                goto LABEL_45;
              }
LABEL_46:
              a3 = v36;
LABEL_47:
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
              {
                _m_prefetchw(&v32);
                LockedHeadEntry = v32;
                if ( v32 )
                  goto LABEL_51;
                LockedHeadEntry = _InterlockedCompareExchange64(v33, 0LL, (signed __int64)&v32);
                if ( (__int64 *)LockedHeadEntry != &v32 )
                {
LABEL_50:
                  LockedHeadEntry = KxWaitForLockChainValid(&v32);
                  v13 = 0LL;
LABEL_51:
                  v32 = v13;
                  _InterlockedXor64((volatile signed __int64 *)(LockedHeadEntry + 8), 1uLL);
LABEL_25:
                  a3 = v36;
                }
                v14 = 15;
LABEL_27:
                v10 = v31;
                goto LABEL_28;
              }
            }
            LOBYTE(LockedHeadEntry) = KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
            LODWORD(v13) = 0;
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
LABEL_28:
        v7 = v37;
        v16 = !_BitScanForward((unsigned int *)&a1, v11);
        if ( v16 )
          return LockedHeadEntry;
      }
      LODWORD(LockedHeadEntry) = v13;
LABEL_32:
      v16 = (_DWORD)LockedHeadEntry == 0;
      goto LABEL_11;
    }
  }
  return LockedHeadEntry;
}
