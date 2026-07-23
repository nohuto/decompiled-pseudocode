/*
 * XREFs of MmDuplicateMemory @ 0x1403F0578
 * Callers:
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403FEC1C (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x1406A2C48 (MmCreateMirror.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     RtlClearAllBitsEx @ 0x1400FE45C (RtlClearAllBitsEx.c)
 *     MI_IS_DECAY_PFN @ 0x14011B378 (MI_IS_DECAY_PFN.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     MiLockAllMemoryLists @ 0x14014CA34 (MiLockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x14014CB90 (MiMirrorNodeLargePages.c)
 *     MiResumeFromHibernate @ 0x14014CD44 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x14014CD5C (MiUnlockAllMemoryLists.c)
 *     RtlInterlockedClearBitRunEx @ 0x14014CE50 (RtlInterlockedClearBitRunEx.c)
 *     RtlFindSetBitsEx @ 0x14014CF00 (RtlFindSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14014D2A0 (RtlFindNextForwardRunClearEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     RtlSetAllBitsEx @ 0x14015A544 (RtlSetAllBitsEx.c)
 *     MiUnlockPage @ 0x14017E538 (MiUnlockPage.c)
 *     MmEmptyAllWorkingSets @ 0x14021B770 (MmEmptyAllWorkingSets.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiLockPage @ 0x140226160 (MiLockPage.c)
 *     RtlInterlockedSetBitRunEx @ 0x140247C20 (RtlInterlockedSetBitRunEx.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  unsigned __int64 v1; // rbp
  int v2; // r15d
  __int64 (**v3)(void); // r14
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  __int64 v12; // r13
  int v13; // ebx
  int v14; // r12d
  __int64 v15; // rbx
  unsigned int v16; // esi
  __int16 *v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // r14
  unsigned __int64 v21; // rsi
  _QWORD *v22; // r13
  bool v23; // cf
  unsigned __int64 *v24; // rsi
  __int64 v25; // r14
  unsigned __int64 i; // rbx
  unsigned __int64 v27; // rbx
  ULONG64 v28; // rdi
  int v29; // r12d
  unsigned __int64 v30; // rsi
  ULONG64 SetBits; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 SizeOfBitMap; // rdi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r12
  unsigned __int8 v41; // r14
  __int64 v42; // r8
  int locked; // eax
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // r13
  unsigned __int8 v46; // bl
  int v47; // edi
  __int64 CurrentIrql; // r12
  __int64 v49; // r13
  int v50; // eax
  int v51; // r13d
  __int64 v52; // rsi
  unsigned int v53; // r12d
  __int16 *v54; // rbx
  unsigned __int64 v55; // rbx
  _QWORD *v56; // r14
  __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  _QWORD *v59; // r15
  _DWORD *v60; // rcx
  int v61; // edi
  unsigned __int64 v62; // rbx
  __int64 v63; // r15
  __int64 v64; // rbx
  _RTL_BITMAP_EX *v65; // rax
  ULONG64 v66; // rbx
  ULONG64 v67; // rax
  ULONG64 v68; // rdi
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rbx
  _RTL_BITMAP_EX *v72; // rax
  ULONG64 v73; // rbx
  ULONG64 v74; // rax
  ULONG64 v75; // rdi
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // rbx
  int v79; // eax
  int v80; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = (__int64 (**)(void))a1;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) = v2;
  if ( (v2 & 5) == 5 )
    return 3221225485LL;
  if ( (v2 & 8) != 0 )
  {
    v2 &= 0xFFFFFFFA;
    *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) = v2;
  }
  if ( !qword_14034F158 && !(unsigned int)MiInitializeMirroring(NotificationEvent) )
    return 3221225626LL;
  if ( (v2 & 0xA) != 0 )
  {
    v5 = 0;
  }
  else
  {
    CcNotifyWriteBehind(2);
    v5 = 1;
  }
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v5;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  KeWaitForSingleObject(&stru_14034F108, WrVirtualMemory, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = CurrentThread;
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread, v7, v8);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  RtlSetAllBitsEx(qword_14034F160);
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 1;
  v9 = 0;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = 0;
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 8;
  _InterlockedAdd(&dword_14034FB88, 1u);
  if ( (v2 & 1) != 0 )
  {
    v9 = 3;
  }
  else
  {
    if ( (v2 & 4) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 7;
    }
    else
    {
      if ( (v2 & 8) == 0 )
        goto LABEL_21;
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    }
    v9 = 2;
  }
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
LABEL_21:
  v11 = (*v3)();
  if ( v11 < 0 )
    goto LABEL_190;
  v12 = v9;
  v13 = v2 & 4;
  *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v12;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v13;
  while ( 2 )
  {
    RtlClearAllBitsEx(qword_14034F158);
    if ( v10 == v5 )
    {
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
      _InterlockedAdd(&dword_14034F6D8, 1u);
    }
    if ( v13 )
    {
      v14 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
    else
    {
      if ( (v2 & 0x10) == 0 )
        MmEmptyAllWorkingSets();
      v14 = 0;
    }
    dword_14034F150 = 1;
    v15 = v12;
    *(_DWORD *)v1 = 0;
    v16 = 0;
    if ( v12 <= 4 )
    {
      while ( 1 )
      {
        v17 = *(__int16 **)&MiSystemPartition[4 * v15 + 1716];
        if ( v15 <= 1 )
          v17 = (__int16 *)(*(_QWORD *)&MiSystemPartition[4 * v15 + 736] + 40LL * v16);
        if ( v15 == 2 )
          v17 = &MiSystemPartition[16 * v14 + 864 + 4 * v14];
        if ( v15 != 3 )
          goto LABEL_38;
        if ( *(_QWORD *)v17 != qword_140355370 )
          break;
LABEL_55:
        if ( ++v15 > 4 )
          goto LABEL_56;
      }
      v17 = &MiSystemPartition[16 * v14 + 1376 + 4 * v14];
LABEL_38:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v17 + 4, (PKLOCK_QUEUE_HANDLE)(v1 + 80));
      if ( *(_QWORD *)v17 )
      {
        v18 = *((_QWORD *)v17 + 2);
        v19 = 0x58000000000LL;
        do
        {
          v20 = (_QWORD *)(48 * v18 - v19);
          *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v20;
          if ( v15 == 2 && MI_IS_DECAY_PFN(v18) )
          {
            v21 = (MiReverseSwizzleInvalidPte(v20[2]) >> 12) & 0xFFFFFFFFFLL;
            if ( v21 != v18 )
            {
              do
              {
                v22 = (_QWORD *)(48 * v21 - v19);
                if ( _bittest64((const signed __int64 *)qword_14034F160->Buffer, v21) )
                {
                  RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v21, 1uLL);
                  v19 = 0x58000000000LL;
                  _bittestandset64((signed __int64 *)qword_14034F158->Buffer, v21);
                }
                v21 = *v22 & 0xFFFFFFFFFLL;
              }
              while ( v21 != v18 );
              v20 = *(_QWORD **)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
          }
          else if ( _bittest64((const signed __int64 *)qword_14034F160->Buffer, v18) )
          {
            RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v18, 1uLL);
            v19 = 0x58000000000LL;
            _bittestandset64((signed __int64 *)qword_14034F158->Buffer, v18);
          }
          v18 = *v20 & 0xFFFFFFFFFLL;
        }
        while ( v18 != 0xFFFFFFFFFLL );
        v16 = *(_DWORD *)v1;
        v3 = (__int64 (**)(void))a1;
      }
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 80));
      if ( v15 > 1 )
      {
        if ( v15 == 2 )
        {
          if ( ++v14 == 8 )
            v14 = 0;
          else
            v15 = 1LL;
        }
        else if ( v15 == 3 && ++v14 != 16 )
        {
          v15 = 2LL;
        }
      }
      else
      {
        v23 = ++v16 < dword_14034EBBC;
        *(_DWORD *)v1 = v16;
        if ( v23 )
        {
          --v15;
        }
        else
        {
          *(_DWORD *)v1 = 0;
          v16 = 0;
          if ( v15 == 1 )
            MiMirrorNodeLargePages(0, (__int64)v3);
        }
      }
      goto LABEL_55;
    }
LABEL_56:
    KeAcquireInStackQueuedSpinLock(&qword_140355320, (PKLOCK_QUEUE_HANDLE)(v1 + 80));
    v24 = (unsigned __int64 *)&unk_140354550;
    v25 = 16LL;
    do
    {
      for ( i = *v24; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
      {
        if ( _bittest64((const signed __int64 *)qword_14034F160->Buffer, i) )
        {
          RtlInterlockedClearBitRunEx((__int64)qword_14034F160, i, 1uLL);
          _bittestandset64((signed __int64 *)qword_14034F158->Buffer, i);
        }
      }
      v24 += 5;
      --v25;
    }
    while ( v25 );
    v27 = qword_140354510;
    v2 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
    if ( qword_140354510 != 0xFFFFFFFFFLL )
    {
      do
      {
        if ( _bittest64((const signed __int64 *)qword_14034F160->Buffer, v27) )
        {
          RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v27, 1uLL);
          _bittestandset64((signed __int64 *)qword_14034F158->Buffer, v27);
        }
        v27 = *(_QWORD *)(48 * v27 - 0x58000000000LL) & 0xFFFFFFFFFLL;
      }
      while ( v27 != 0xFFFFFFFFFLL );
      v2 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
    }
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 80));
    v28 = 0LL;
    *(_DWORD *)v1 = 0;
    v29 = 0;
    *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
    v30 = 0LL;
    do
    {
      SetBits = RtlFindSetBitsEx(qword_14034F158, 1uLL, v28);
      v32 = SetBits;
      if ( SetBits < v28 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx(
                              (__int64)qword_14034F158,
                              SetBits,
                              (unsigned __int64 *)(v1 + 56));
      *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = NextForwardRunClear;
      v34 = NextForwardRunClear;
      if ( NextForwardRunClear )
        SizeOfBitMap = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      else
        SizeOfBitMap = qword_14034F158->SizeOfBitMap;
      v36 = SizeOfBitMap - v32;
      if ( (v2 & 8) == 0 )
        goto LABEL_102;
      if ( v29 == 1 )
      {
        RtlInterlockedSetBitRunEx((__int64)qword_14034F160, v32, v36);
        v28 = v32 + v34 + v36;
        continue;
      }
      if ( v36 > 0x100 )
        v36 = 256LL;
      v37 = v36;
      *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
      v38 = -1LL;
      v28 = v32;
      v39 = 48 * v32 - 0x58000000000LL;
      v40 = v39 + 48 * v37;
      while ( 1 )
      {
        v41 = MiLockPage(v39);
        if ( *(_WORD *)(v39 + 32) || (unsigned __int8)((*(_BYTE *)(v39 + 34) & 7) - 2) > 2u )
        {
          MiUnlockPage(v39, v41);
          if ( v38 != -1 )
            goto LABEL_101;
          goto LABEL_96;
        }
        MiUnlinkPageFromList(v39, 0LL);
        locked = MiAddLockedPageCharge(v39, 0LL, v42);
        *(_QWORD *)(v39 + 24) &= 0xC000000000000000uLL;
        if ( !locked )
          break;
        RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v28, 1uLL);
        MiUnlockPage(v39, v41);
        if ( v38 == -1 )
          v38 = v28;
LABEL_96:
        v39 += 48LL;
        ++v28;
        if ( v39 >= v40 )
        {
          v29 = *(_DWORD *)v1;
          goto LABEL_98;
        }
      }
      MiPfnReferenceCountIsZero(v39, v28);
      MiUnlockPage(v39, v41);
      v29 = 1;
      *(_DWORD *)v1 = 1;
LABEL_98:
      if ( v38 == -1 )
        goto LABEL_107;
LABEL_101:
      v32 = v38;
      v36 = v28 - v38;
      v30 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
LABEL_102:
      *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v36 + v30;
      v11 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v32 << 12, v36 << 12);
      if ( (v2 & 8) != 0 )
      {
        v44 = 48 * v32 - 0x58000000000LL;
        v45 = v44 + 48 * v36;
        do
        {
          v46 = MiLockPage(v44);
          MiRemoveLockedPageChargeAndDecRef(v44);
          MiUnlockPage(v44, v46);
          v44 += 48LL;
        }
        while ( v44 < v45 );
      }
      if ( v11 < 0 )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 1 )
          _InterlockedDecrement(&dword_14034F6D8);
        dword_14034F150 = 0;
        goto LABEL_115;
      }
      v29 = *(_DWORD *)v1;
      v28 = v32 + *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) + v36;
LABEL_107:
      v30 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    }
    while ( v28 < qword_14034F158->SizeOfBitMap );
    v47 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    if ( v47 != 1 && v30 >= 0x400 )
    {
      v3 = (__int64 (**)(void))a1;
      v10 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) + 1;
      v13 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      v5 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
      v12 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = v10;
      continue;
    }
    break;
  }
  if ( (v2 & 2) == 0 && v47 == 1 )
  {
    _InterlockedDecrement(&dword_14034F6D8);
    v47 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v49 = a1;
  *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = CurrentIrql;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
  if ( v11 < 0 )
  {
    if ( v47 == 1 )
      _InterlockedDecrement(&dword_14034F6D8);
    dword_14034F150 = 0;
LABEL_123:
    __writecr8((unsigned __int8)CurrentIrql);
    goto LABEL_115;
  }
  if ( *(_QWORD *)(a1 + 24) )
    RtlSetAllBitsEx(qword_14034F158);
  MiLockAllMemoryLists(LockHandle);
  qword_14034F148 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  if ( v47 == 1 )
    _InterlockedDecrement(&dword_14034F6D8);
  dword_14034F150 = 2;
  if ( (v2 & 0xD) == 0 )
    goto LABEL_157;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  v50 = 2;
  *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( (v2 & 8) != 0 )
    v50 = 1;
  v51 = 0;
  v52 = v50;
  v53 = 0;
LABEL_132:
  *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v52;
  while ( 1 )
  {
    if ( v52 > 1 )
      v54 = &MiSystemPartition[20 * v51 + 864];
    else
      v54 = (__int16 *)(*(_QWORD *)&MiSystemPartition[4 * v52 + 736] + 40LL * v53);
    v55 = *((_QWORD *)v54 + 2);
    if ( v55 != 0xFFFFFFFFFLL )
    {
      do
      {
        v56 = (_QWORD *)(48 * v55 - 0x58000000000LL);
        *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v56;
        if ( v52 == 2 && MI_IS_DECAY_PFN(v55) )
        {
          v58 = (MiReverseSwizzleInvalidPte(v56[2]) >> 12) & 0xFFFFFFFFFLL;
          if ( v58 != v55 )
          {
            do
            {
              v59 = (_QWORD *)(48 * v58 - v57);
              RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v58, 1uLL);
              if ( *(_QWORD *)(a1 + 24) )
                _bittestandreset64((signed __int64 *)qword_14034F158->Buffer, v58);
              v57 = 0x58000000000LL;
              v58 = *v59 & 0xFFFFFFFFFLL;
            }
            while ( v58 != v55 );
            v52 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v56 = *(_QWORD **)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
          }
        }
        else
        {
          RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v55, 1uLL);
          if ( *(_QWORD *)(a1 + 24) )
            _bittestandreset64((signed __int64 *)qword_14034F158->Buffer, v55);
        }
        v55 = *v56 & 0xFFFFFFFFFLL;
      }
      while ( v55 != 0xFFFFFFFFFLL );
      v53 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      v51 = *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
    }
    if ( v52 <= 1 )
    {
      v23 = ++v53 < dword_14034EBBC;
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v53;
      if ( v23 )
        continue;
      v53 = 0;
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    }
    if ( !v52 )
      break;
    if ( v52 == 2 )
    {
      *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = ++v51;
      if ( v51 != *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
        continue;
    }
    --v52;
    goto LABEL_132;
  }
  v49 = a1;
  MiMirrorNodeLargePages(1, a1);
LABEL_157:
  v60 = MmPhysicalMemoryBlock;
  v61 = 0;
  v62 = 0LL;
  do
  {
    v63 = *(_QWORD *)&v60[4 * v61 + 4];
    if ( v63 != v62 )
    {
      RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v62, v63 - v62);
      if ( *(_QWORD *)(v49 + 24) )
        RtlClearBitsEx((__int64)qword_14034F158, v62, v63 - v62);
      v60 = MmPhysicalMemoryBlock;
    }
    v64 = *(_QWORD *)&v60[4 * v61++ + 6];
    v62 = v63 + v64;
  }
  while ( v61 != *v60 );
  CurrentIrql = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( v62 != qword_14034EC10 + 1 )
  {
    RtlInterlockedClearBitRunEx((__int64)qword_14034F160, v62, qword_14034EC10 - v62 + 1);
    if ( *(_QWORD *)(v49 + 24) )
      RtlClearBitsEx((__int64)qword_14034F158, v62, qword_14034EC10 - v62 + 1);
  }
  v65 = qword_14034F160;
  v66 = 0LL;
  do
  {
    v67 = RtlFindSetBitsEx(v65, 1uLL, v66);
    v68 = v67;
    if ( v67 < v66 || v67 == -1LL )
      break;
    v69 = RtlFindNextForwardRunClearEx((__int64)qword_14034F160, v67, (unsigned __int64 *)(v1 + 56));
    if ( v69 )
      v70 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    else
      v70 = qword_14034F160->SizeOfBitMap;
    v71 = v70 - v68;
    v11 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v49 + 16))(v68 << 12, v71 << 12);
    if ( v11 < 0 )
    {
LABEL_180:
      qword_14034F148 = 0LL;
      dword_14034F150 = 0;
      goto LABEL_188;
    }
    v65 = qword_14034F160;
    v66 = v68 + v69 + v71;
  }
  while ( v66 < qword_14034F160->SizeOfBitMap );
  if ( *(_QWORD *)(v49 + 24) )
  {
    v72 = qword_14034F158;
    v73 = 0LL;
    do
    {
      v74 = RtlFindSetBitsEx(v72, 1uLL, v73);
      v75 = v74;
      if ( v74 < v73 || v74 == -1LL )
        break;
      v76 = RtlFindNextForwardRunClearEx((__int64)qword_14034F158, v74, (unsigned __int64 *)(v1 + 56));
      if ( v76 )
        v77 = *(_QWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      else
        v77 = qword_14034F158->SizeOfBitMap;
      v78 = v77 - v75;
      v11 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v49 + 24))(v75 << 12, v78 << 12);
      if ( v11 < 0 )
        goto LABEL_180;
      v72 = qword_14034F158;
      v73 = v75 + v76 + v78;
    }
    while ( v73 < qword_14034F158->SizeOfBitMap );
  }
  v79 = (*(__int64 (__fastcall **)(__int64))(v49 + 8))(1LL);
  qword_14034F148 = 0LL;
  v11 = v79;
  if ( v79 == 1073742484 && !*(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
  {
    v11 = 0;
    MiResumeFromHibernate(*(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
    *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 1;
  }
  dword_14034F150 = 0;
LABEL_188:
  if ( (_BYTE)CurrentIrql != 17 )
  {
    MiUnlockAllMemoryLists(LockHandle);
    goto LABEL_123;
  }
LABEL_115:
  CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
LABEL_190:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( *(_DWORD *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) == 1 )
  {
    stru_14034F120.Parameter = (void *)*(unsigned int *)(((unsigned __int64)&v80 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    ExQueueWorkItem(&stru_14034F120, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedDecrement(&dword_14034FB88);
    KeSetEvent(&stru_14034F108, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  return (unsigned int)v11;
}
