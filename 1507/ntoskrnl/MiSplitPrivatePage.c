/*
 * XREFs of MiSplitPrivatePage @ 0x140008EC0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiMakeProtoLeafValid @ 0x140224CAC (MiMakeProtoLeafValid.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v4; // r15
  __int64 v5; // rbp
  volatile signed __int32 *v6; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // r12
  unsigned int v9; // ebx
  signed __int32 i; // edx
  ULONG_PTR v11; // rcx
  _KPROCESS *v12; // rbp
  struct _KTHREAD *v13; // r14
  int v14; // ebx
  unsigned __int8 v15; // di
  unsigned int v16; // ebx
  signed __int32 j; // edx
  __int64 ProtoPteAddress; // rax
  __int64 v19; // rdx
  _KPROCESS *v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 PrototypePteVadLookup; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v49; // r9
  _KPROCESS *v50; // rbx
  int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  char v53[8]; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+40h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v57[10]; // [rsp+58h] [rbp-50h] BYREF
  int v59; // [rsp+C0h] [rbp+18h]
  int v60; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v51 = MiVadPureReserve(a2);
  v57[0] = *(_QWORD *)(a2 + 72);
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (int)MiChargeFullProcessCommitment(Process, 1LL);
  v6 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  v60 = 0;
  v59 = 0;
  v52 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
    v8 = v5;
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v6);
    for ( i = *v6; (*v6 & 0xBFFFFFFF) != 0x80000000; i = *v6 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    v8 = v5;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v4;
      if ( v51 )
      {
        if ( v4 == MiGetNextPageTable(v4, v4, 0, CurrentIrql, 1, (__int64)v53) )
          goto LABEL_33;
        MiUnlockWorkingSetExclusive(v6, CurrentIrql);
        if ( v8 < 0 )
          return (unsigned int)v8;
        v12 = Process;
        v13 = CurrentThread;
        v52 = 1;
        LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
        v14 = MiCommitPageTablesForVad(a2, v2, v2);
        if ( v14 < 0 )
        {
          UNLOCK_PAGE_TABLE_COMMITMENT(v13, v12);
          MiReturnFullProcessCommitment(v12);
          return (unsigned int)v14;
        }
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6);
        }
        else
        {
          v16 = 0;
          if ( _interlockedbittestandset(v6, 0x1Fu) )
            v16 = ExpWaitForSpinLockExclusiveAndAcquire(v6);
          for ( j = *v6; (*v6 & 0xBFFFFFFF) != 0x80000000; j = *v6 )
          {
            if ( (j & 0x40000000) == 0 )
              _InterlockedCompareExchange(v6, j | 0x40000000, j);
            if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v16);
          }
        }
        CurrentIrql = v15;
        v11 = v4;
      }
      MiMakeSystemAddressValid(v11, 1);
LABEL_33:
      ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 1LL, v57);
      v21 = *(_QWORD *)v4;
      v22 = 0x90482413000LL;
      v23 = ProtoPteAddress;
      v24 = v4 + 0x90482413000LL;
      if ( v4 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v20, v19)
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process;
        v19 = *(_QWORD *)&v20[2].ProcessLock;
        if ( v19 )
        {
          v25 = *(_QWORD *)(v19 + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v25 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v54 = v21;
      if ( !v21 )
      {
        if ( v8 < 0 )
          goto LABEL_99;
        v26 = MI_GET_USED_PTES_HANDLE(a1);
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v26, 1LL);
        if ( v51 )
        {
          if ( !v23 )
            goto LABEL_98;
          v28 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v29 = *v28;
          if ( (unsigned __int64)(v28 + 0x12090482600LL) <= 0x7F8 && (unsigned int)MiPteHasShadow(v27, v29) )
          {
            if ( (v29 & 1) == 0 )
              goto LABEL_58;
            if ( (v29 & 0x20) == 0 || (v29 & 0x42) == 0 )
            {
              v31 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v31 )
              {
                v32 = *(_QWORD *)(v31 + 8 * ((v30 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  LOWORD(v29) = v29 | 0x20;
                if ( (v32 & 0x42) != 0 )
                  LOWORD(v29) = v29 | 0x42;
              }
            }
          }
          if ( (v29 & 1) == 0 )
          {
LABEL_58:
            if ( (v29 & 0x3E0) == 0 )
            {
LABEL_98:
              v37 = v8;
              goto LABEL_101;
            }
          }
        }
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(1LL);
        v54 = PrototypePteVadLookup;
        v21 = PrototypePteVadLookup;
        *(_QWORD *)v4 = PrototypePteVadLookup;
        if ( v24 <= 0x7F8 )
        {
          MiWritePteShadow(v4, PrototypePteVadLookup);
          v22 = 0x90482413000LL;
        }
      }
      if ( (v21 & 1) == 0 )
        break;
      if ( (unsigned __int64)&v54 + v22 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v20, v19)
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * (((unsigned __int64)&v54 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v21 = v54 | 0x20;
          if ( (v35 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
        else
        {
          v21 = v54;
        }
      }
      v36 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( (*(_QWORD *)(v36 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL) != v23 )
      {
LABEL_105:
        v37 = v8;
        goto LABEL_106;
      }
      if ( v8 < 0 )
      {
LABEL_99:
        MiUnlockWorkingSetExclusive(v6, CurrentIrql);
        return (unsigned int)v8;
      }
      v2 = a1;
      if ( (unsigned int)MiCopyOnWriteEx(a1, 0) )
      {
        v37 = v8;
        goto LABEL_102;
      }
    }
    if ( (v21 & 0x400) == 0
      || !(unsigned int)MiIsPrototypePteVadLookup(v21) && MiGetPrototypePteDirect(v21, v38, v39, v40) != v23 )
    {
      goto LABEL_105;
    }
    if ( MiMakeProtoLeafValid(v4) != v4 )
    {
      v42 = *(_QWORD *)v4;
      if ( v24 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v41, v42)
        && (v42 & 1) != 0
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        v43 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v44 & 0x20) != 0 )
            v42 |= 0x20uLL;
          if ( (v44 & 0x42) != 0 )
            v42 |= 0x42uLL;
        }
        v21 = v54;
      }
      if ( v21 == v42 )
        break;
    }
    v2 = a1;
  }
  v37 = v8;
  if ( (int)v8 < 0 )
  {
    MiUnlockWorkingSetExclusive(v6, CurrentIrql);
    return (unsigned int)v8;
  }
LABEL_101:
  v60 = 1;
LABEL_102:
  v46 = *(unsigned int *)(a2 + 52);
  LODWORD(v46) = v46 & 0x7FFFFFFF;
  v59 = 1;
  v47 = (v46 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31)) + 1;
  *(_DWORD *)(a2 + 52) ^= (v47 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
  *(_BYTE *)(a2 + 34) = v47 >> 31;
  if ( v60 == 1 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(1LL);
    v54 = DemandZeroPte;
    *(_QWORD *)v4 = DemandZeroPte;
    if ( v4 + v49 <= 0x7F8 )
      MiWritePteShadow(v4, DemandZeroPte);
  }
LABEL_106:
  MiUnlockWorkingSetExclusive(v6, CurrentIrql);
  v50 = Process;
  if ( v52 == 1 )
    UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
  if ( !v59 && v37 >= 0 )
    MiReturnFullProcessCommitment(v50);
  return 0LL;
}
