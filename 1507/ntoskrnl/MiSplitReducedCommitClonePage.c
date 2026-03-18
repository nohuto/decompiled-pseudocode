/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1402141F4
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockProbePacketWorkingSet @ 0x14011B678 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1401207B0 (MiUnlockProbePacketWorkingSet.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 a1, volatile __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  int v9; // edi
  __int64 v10; // rcx
  volatile __int64 *v11; // r8
  bool v12; // zf
  volatile __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  volatile __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *CloneAddress; // rax
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  MiUnlockProbePacketWorkingSet(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 60) = 1;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v5, v6, v7);
  v8 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 72), 1LL);
  if ( v8 >= 0 )
  {
    v9 = 1;
    MiLockProbePacketWorkingSet(a1);
    LODWORD(v10) = 3;
    while ( 1 )
    {
      v11 = a2[(unsigned int)v10];
      if ( (*(_BYTE *)v11 & 1) == 0 )
        break;
      v12 = (_DWORD)v10 == 1;
      v10 = (unsigned int)(v10 - 1);
      if ( v12 )
      {
        v13 = *v11;
        v14 = 0x90482413000LL;
        v15 = 2040LL;
        if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8
          && (unsigned int)MiPteHasShadow(v10, v13)
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 8 * ((v16 >> 3) & 0x1FF));
            if ( (v18 & 0x20) != 0 )
              LOBYTE(v13) = v13 | 0x20;
            if ( (v18 & 0x42) != 0 )
              LOBYTE(v13) = v13 | 0x42;
          }
        }
        if ( (v13 & 0x80u) == 0LL )
        {
          v19 = *a2;
          v20 = *v19;
          v25 = v20;
          if ( (v20 & 1) != 0 )
          {
            if ( (unsigned __int64)&v25 + v14 <= v15 )
              v20 = MiReadPteShadow(&v25, v20);
            v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0 )
            {
              v22 = *(_QWORD *)(v21 + 8);
              if ( v22 < 0 )
              {
                CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 72), v22 | 0x8000000000000000uLL);
                if ( CloneAddress )
                {
                  if ( MEMORY[0xFFFFF58010804258] > CloneAddress[9]
                    && (unsigned int)MiCopyOnWriteEx(*(_QWORD *)a1, v19, -1LL, *(_BYTE *)(a1 + 80), 0) )
                  {
                    v9 = 0;
                  }
                }
              }
            }
          }
        }
        break;
      }
    }
    MiUnlockProbePacketWorkingSet(a1);
    if ( v9 )
      MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 72));
    v8 = 0;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, *(_QWORD *)(a1 + 72));
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v8;
}
