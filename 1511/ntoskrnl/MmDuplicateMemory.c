/*
 * XREFs of MmDuplicateMemory @ 0x14039E1A0
 * Callers:
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403AE820 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403AEDC4 (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x140623954 (MmCreateMirror.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_IS_DECAY_PFN @ 0x1400E55E4 (MI_IS_DECAY_PFN.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiLockAllMemoryLists @ 0x140117C78 (MiLockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x140117EE4 (MiMirrorNodeLargePages.c)
 *     MiResumeFromHibernate @ 0x1401180A0 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x1401181CC (MiUnlockAllMemoryLists.c)
 *     RtlInterlockedClearBitRunEx @ 0x1401183B4 (RtlInterlockedClearBitRunEx.c)
 *     RtlFindSetBitsEx @ 0x140118404 (RtlFindSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x1401187A4 (RtlFindNextForwardRunClearEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MmEmptyAllWorkingSets @ 0x1401D86C4 (MmEmptyAllWorkingSets.c)
 *     MiLockPage @ 0x1401DFF7C (MiLockPage.c)
 *     MiUnlockPage @ 0x1401DFF84 (MiUnlockPage.c)
 *     RtlInterlockedSetBitRunEx @ 0x1401F8CF8 (RtlInterlockedSetBitRunEx.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x1404F6078 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x1404F60B4 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // r12d
  __int64 (**v2)(void); // r15
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // edi
  int v10; // esi
  __int64 v11; // rsi
  int v12; // edi
  int v13; // ebp
  unsigned int v14; // r14d
  __int64 v15; // rdi
  int *v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 *v22; // r14
  unsigned __int64 j; // rdi
  unsigned __int64 v24; // rdi
  ULONG64 v25; // r14
  int v26; // ebp
  unsigned __int64 v27; // rsi
  ULONG64 SetBits; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // r14
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r14
  int v34; // ebp
  unsigned __int8 CurrentIrql; // r15
  __int64 v36; // r13
  unsigned __int8 v37; // di
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rbp
  int v42; // r13d
  unsigned int v43; // r12d
  int *v44; // rdi
  unsigned __int64 v45; // rdi
  _QWORD *v46; // r14
  unsigned __int64 v47; // rsi
  ULONG64 v48; // rdi
  ULONG64 v49; // rax
  ULONG64 v50; // rbp
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rdi
  int v55; // eax
  unsigned __int64 i; // r14
  _QWORD *v58; // r13
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r15
  unsigned __int8 v63; // bp
  unsigned __int64 v64; // rbp
  unsigned __int64 v65; // r13
  unsigned __int8 v66; // di
  ULONG64 v67; // rdi
  ULONG64 v68; // rax
  ULONG64 v69; // rbp
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // r14
  unsigned __int64 v73; // rdi
  int v74; // [rsp+30h] [rbp-B8h]
  int v75; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+38h] [rbp-B0h]
  __int64 v77; // [rsp+38h] [rbp-B0h]
  int v78; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v79; // [rsp+48h] [rbp-A0h]
  __int64 v80; // [rsp+50h] [rbp-98h]
  int v81; // [rsp+58h] [rbp-90h]
  unsigned __int64 v82; // [rsp+60h] [rbp-88h] BYREF
  int v83; // [rsp+68h] [rbp-80h]
  int v84; // [rsp+6Ch] [rbp-7Ch]
  int v85; // [rsp+70h] [rbp-78h]
  _QWORD *v86; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v89; // [rsp+F8h] [rbp+10h]
  unsigned int v90; // [rsp+100h] [rbp+18h]
  int v91; // [rsp+100h] [rbp+18h]
  unsigned int v92; // [rsp+100h] [rbp+18h]
  int v93; // [rsp+108h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = (__int64 (**)(void))a1;
  v84 = v1;
  if ( (v1 & 5) == 5 )
    return 3221225485LL;
  if ( (v1 & 8) != 0 )
  {
    v1 &= 0xFFFFFFFA;
    v84 = v1;
  }
  if ( (v1 & 0xA) != 0 )
  {
    v3 = 0;
  }
  else
  {
    CcNotifyWriteBehind(2);
    v3 = 1;
  }
  v74 = v3;
  v81 = 0;
  v78 = 0;
  KeWaitForSingleObject(&stru_1402FEC50, WrVirtualMemory, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v5 = 8;
  v80 = (__int64)CurrentThread;
  v89 = 8;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_1402FEBE8, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FEBE8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402FEBE8, v6, (ULONG_PTR)&qword_1402FEBE8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedAdd(&dword_1402FF6C8, 1u);
  if ( !(unsigned int)MiUpdateMirrorBitmaps() )
  {
    v10 = -1073741670;
    goto LABEL_122;
  }
  MiActOnMirrorBitmap(&stru_1402FECA8, 1LL);
  v93 = 1;
  v8 = 0;
  v83 = 0;
  v9 = 0;
  if ( (v1 & 1) != 0 )
  {
    v9 = 3;
    goto LABEL_17;
  }
  if ( (v1 & 4) != 0 )
  {
    v5 = 7;
LABEL_16:
    v89 = v5;
    v9 = 2;
LABEL_17:
    v93 = 0;
    goto LABEL_18;
  }
  if ( (v1 & 8) != 0 )
  {
    v5 = 0;
    goto LABEL_16;
  }
LABEL_18:
  v10 = (*v2)();
  if ( v10 < 0 )
    goto LABEL_121;
  v11 = v9;
  v12 = v1 & 4;
  v86 = (_QWORD *)v11;
  v85 = v12;
  while ( 2 )
  {
    MiActOnMirrorBitmap(&stru_1402FEC98, 2LL);
    if ( v8 == v3 )
    {
      v78 = 1;
      _InterlockedAdd(&dword_1402FF218, 1u);
    }
    if ( v12 )
    {
      v13 = v5;
    }
    else
    {
      if ( (v1 & 0x10) == 0 )
        MmEmptyAllWorkingSets();
      v13 = 0;
    }
    v90 = 0;
    dword_1402FEC90 = 1;
    v14 = 0;
    v15 = v11;
    if ( v11 <= 4 )
    {
      while ( 1 )
      {
        v16 = *(int **)&MiSystemPartition[2 * v15 + 906];
        if ( v15 <= 1 )
          v16 = (int *)(*(_QWORD *)&MiSystemPartition[2 * v15 + 400] + 40LL * v14);
        if ( v15 == 2 )
          v16 = &MiSystemPartition[8 * v13 + 464 + 2 * v13];
        if ( v15 != 3 )
          goto LABEL_30;
        if ( *(_QWORD *)v16 != qword_140301530 )
          break;
LABEL_42:
        if ( ++v15 > 4 )
          goto LABEL_43;
      }
      v16 = &MiSystemPartition[10 * v13 + 720];
LABEL_30:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v16 + 4, &LockHandle);
      if ( *(_QWORD *)v16 )
      {
        v17 = *((_QWORD *)v16 + 2);
        v18 = 0x58000000000LL;
        do
        {
          v19 = (_QWORD *)(48 * v17 - v18);
          if ( v15 == 2 && MI_IS_DECAY_PFN(v17) )
          {
            for ( i = (v19[2] >> 12) & 0xFFFFFFFFFLL; i != v17; i = *v58 & 0xFFFFFFFFFLL )
            {
              v58 = (_QWORD *)(48 * i - v18);
              if ( _bittest64((const signed __int64 *)stru_1402FECA8.Buffer, i) )
              {
                RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, i, 1uLL);
                v18 = 0x58000000000LL;
                _bittestandset64((signed __int64 *)stru_1402FEC98.Buffer, i);
              }
            }
          }
          else if ( _bittest64((const signed __int64 *)stru_1402FECA8.Buffer, v17) )
          {
            RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, v17, 1uLL);
            v18 = 0x58000000000LL;
            _bittestandset64((signed __int64 *)stru_1402FEC98.Buffer, v17);
          }
          v17 = *v19 & 0xFFFFFFFFFLL;
        }
        while ( v17 != 0xFFFFFFFFFLL );
        v14 = v90;
        v2 = (__int64 (**)(void))a1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v15 <= 1 )
      {
        v90 = ++v14;
        if ( v14 >= dword_1402FE70C )
        {
          v90 = 0;
          v14 = 0;
          if ( v15 == 1 )
            MiMirrorNodeLargePages(v20, 0, (__int64)v2);
        }
        else
        {
          --v15;
        }
      }
      else if ( v15 == 2 )
      {
        if ( ++v13 == 8 )
          v13 = 0;
        else
          v15 = 1LL;
      }
      else if ( v15 == 3 && ++v13 != 16 )
      {
        v15 = 2LL;
      }
      goto LABEL_42;
    }
LABEL_43:
    KeAcquireInStackQueuedSpinLock(&qword_1403014E0, &LockHandle);
    v21 = 16LL;
    v22 = (unsigned __int64 *)&unk_140300610;
    do
    {
      for ( j = *v22; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
      {
        if ( _bittest64((const signed __int64 *)stru_1402FECA8.Buffer, j) )
        {
          RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, j, 1uLL);
          _bittestandset64((signed __int64 *)stru_1402FEC98.Buffer, j);
        }
      }
      v22 += 5;
      --v21;
    }
    while ( v21 );
    v24 = qword_1403005D0;
    for ( LOBYTE(v1) = v84; v24 != 0xFFFFFFFFFLL; v24 = *(_QWORD *)(48 * v24 - 0x58000000000LL) & 0xFFFFFFFFFLL )
    {
      if ( _bittest64((const signed __int64 *)stru_1402FECA8.Buffer, v24) )
      {
        RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, v24, 1uLL);
        _bittestandset64((signed __int64 *)stru_1402FEC98.Buffer, v24);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v25 = 0LL;
    v91 = 0;
    v26 = 0;
    v79 = 0LL;
    v27 = 0LL;
    do
    {
      SetBits = RtlFindSetBitsEx(&stru_1402FEC98, 1uLL, v25);
      v29 = SetBits;
      if ( SetBits == -1LL || SetBits < v25 )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&stru_1402FEC98, SetBits, &v82);
      SizeOfBitMap = v82;
      v32 = NextForwardRunClear;
      v76 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = stru_1402FEC98.SizeOfBitMap;
      v33 = SizeOfBitMap - v29;
      if ( (v1 & 8) == 0 )
        goto LABEL_57;
      if ( v26 == 1 )
      {
        RtlInterlockedSetBitRunEx((__int64)&stru_1402FECA8, v29, v33);
        v25 = v29 + v32 + v33;
        continue;
      }
      v59 = -1LL;
      if ( v33 > 0x100 )
        v33 = 256LL;
      v60 = v33;
      v25 = v29;
      v76 = 0LL;
      v61 = 48 * v29 - 0x58000000000LL;
      v62 = v61 + 48 * v60;
      while ( 1 )
      {
        v63 = MiLockPage(v61);
        if ( *(_WORD *)(v61 + 32) || (unsigned __int8)((*(_BYTE *)(v61 + 34) & 7) - 2) > 2u )
        {
          MiUnlockPage(v61, v63);
          if ( v59 != -1 )
            goto LABEL_177;
          goto LABEL_171;
        }
        if ( !(unsigned int)MiUnlinkPageFromList(v61, 0) )
          break;
        *(_QWORD *)(v61 + 24) &= 0xC000000000000000uLL;
        if ( !(unsigned int)MiAddLockedPageCharge(v61, 0) )
        {
          MiPfnReferenceCountIsZero(v61, v25);
          goto LABEL_175;
        }
        RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, v25, 1uLL);
        MiUnlockPage(v61, v63);
        if ( v59 == -1 )
          v59 = v25;
LABEL_171:
        v61 += 48LL;
        ++v25;
        if ( v61 >= v62 )
        {
          v26 = v91;
          goto LABEL_176;
        }
      }
      MiDiscardTransitionPte(v61);
LABEL_175:
      MiUnlockPage(v61, v63);
      v26 = 1;
      v91 = 1;
LABEL_176:
      if ( v59 == -1 )
        goto LABEL_60;
LABEL_177:
      v29 = v59;
      v33 = v25 - v59;
      v27 = v79;
LABEL_57:
      v79 = v33 + v27;
      v10 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v29 << 12, v33 << 12);
      if ( (v1 & 8) != 0 )
      {
        v64 = 48 * v29 - 0x58000000000LL;
        v65 = v64 + 48 * v33;
        do
        {
          v66 = MiLockPage(v64);
          MiRemoveLockedPageChargeAndDecRef(v64);
          MiUnlockPage(v64, v66);
          v64 += 48LL;
        }
        while ( v64 < v65 );
      }
      if ( v10 < 0 )
      {
        if ( v78 == 1 )
          _InterlockedAdd(&dword_1402FF218, 0xFFFFFFFF);
        dword_1402FEC90 = 0;
        goto LABEL_121;
      }
      v26 = v91;
      v25 = v29 + v76 + v33;
LABEL_60:
      v27 = v79;
    }
    while ( v25 < stru_1402FEC98.SizeOfBitMap );
    v34 = v78;
    if ( v78 != 1 && v27 >= 0x400 )
    {
      v2 = (__int64 (**)(void))a1;
      v8 = v83 + 1;
      v12 = v85;
      v3 = v74;
      v11 = (__int64)v86;
      v5 = v89;
      ++v83;
      continue;
    }
    break;
  }
  if ( (v1 & 2) == 0 && v78 == 1 )
  {
    _InterlockedAdd(&dword_1402FF218, 0xFFFFFFFF);
    v34 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v36 = a1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
  if ( v10 >= 0 )
  {
    v37 = KeGetCurrentIrql();
    if ( *(_QWORD *)(a1 + 24) )
      MiActOnMirrorBitmap(&stru_1402FEC98, 1LL);
    if ( v37 < 2u )
      __writecr8(2uLL);
    MiLockAllMemoryLists();
    qword_1402FEC88 = v80;
    if ( v34 == 1 )
      _InterlockedAdd(&dword_1402FF218, 0xFFFFFFFF);
    v39 = 2LL;
    dword_1402FEC90 = 2;
    if ( (v1 & 0xD) == 0 )
      goto LABEL_107;
    v40 = 2;
    v75 = 0;
    if ( (v1 & 8) != 0 )
      v40 = 1;
    v92 = 0;
    v41 = v40;
    v42 = 0;
    v43 = 0;
LABEL_77:
    v77 = v41;
    while ( 1 )
    {
      if ( v41 > 1 )
      {
        v44 = &MiSystemPartition[10 * v42 + 464];
      }
      else
      {
        v38 = 5LL * v43;
        v44 = (int *)(*(_QWORD *)&MiSystemPartition[2 * v41 + 400] + 40LL * v43);
      }
      v45 = *((_QWORD *)v44 + 2);
      if ( v45 != 0xFFFFFFFFFLL )
      {
        do
        {
          v46 = (_QWORD *)(48 * v45 - 0x58000000000LL);
          v86 = v46;
          if ( v41 == v39 && MI_IS_DECAY_PFN(v45) )
          {
            v47 = (v46[2] >> 12) & 0xFFFFFFFFFLL;
            if ( v47 != v45 )
            {
              do
              {
                RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, v47, 1uLL);
                if ( *(_QWORD *)(a1 + 24) )
                  _bittestandreset64((signed __int64 *)stru_1402FEC98.Buffer, v47);
                v47 = *(_QWORD *)(48 * v47 - 0x58000000000LL) & 0xFFFFFFFFFLL;
              }
              while ( v47 != v45 );
              v41 = v77;
              v39 = 2LL;
              v46 = v86;
            }
          }
          else
          {
            RtlInterlockedClearBitRunEx((__int64)&stru_1402FECA8, v45, 1uLL);
            if ( *(_QWORD *)(a1 + 24) )
              _bittestandreset64((signed __int64 *)stru_1402FEC98.Buffer, v45);
            v39 = 2LL;
          }
          v45 = *v46 & 0xFFFFFFFFFLL;
        }
        while ( v45 != 0xFFFFFFFFFLL );
        v43 = v92;
        v42 = v75;
      }
      if ( v41 <= 1 )
      {
        v92 = ++v43;
        if ( v43 < dword_1402FE70C )
          continue;
        v43 = 0;
        v92 = 0;
      }
      if ( !v41 )
      {
        v36 = a1;
        MiMirrorNodeLargePages(v38, 1, a1);
LABEL_107:
        v48 = 0LL;
        do
        {
          v49 = RtlFindSetBitsEx(&stru_1402FECA8, 1uLL, v48);
          v50 = v49;
          if ( v49 < v48 || v49 == -1LL )
            break;
          v51 = RtlFindNextForwardRunClearEx((__int64)&stru_1402FECA8, v49, &v82);
          v52 = v82;
          v53 = v51;
          if ( !v51 )
            v52 = stru_1402FECA8.SizeOfBitMap;
          v54 = v52 - v50;
          v10 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v36 + 16))(v50 << 12, v54 << 12);
          if ( v10 < 0 )
          {
LABEL_187:
            qword_1402FEC88 = 0LL;
            goto LABEL_118;
          }
          v48 = v50 + v53 + v54;
        }
        while ( v48 < stru_1402FECA8.SizeOfBitMap );
        if ( *(_QWORD *)(v36 + 24) )
        {
          v67 = 0LL;
          do
          {
            v68 = RtlFindSetBitsEx(&stru_1402FEC98, 1uLL, v67);
            v69 = v68;
            if ( v68 < v67 || v68 == -1LL )
              break;
            v70 = RtlFindNextForwardRunClearEx((__int64)&stru_1402FEC98, v68, &v82);
            v71 = v82;
            v72 = v70;
            if ( !v70 )
              v71 = stru_1402FEC98.SizeOfBitMap;
            v73 = v71 - v69;
            v10 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v36 + 24))(v69 << 12, v73 << 12);
            if ( v10 < 0 )
              goto LABEL_187;
            v67 = v69 + v72 + v73;
          }
          while ( v67 < stru_1402FEC98.SizeOfBitMap );
        }
        v55 = (*(__int64 (__fastcall **)(__int64))(v36 + 8))(1LL);
        qword_1402FEC88 = 0LL;
        v10 = v55;
        if ( v55 == 1073742484 && !v93 )
        {
          v10 = 0;
          MiResumeFromHibernate(v89);
          v81 = 1;
        }
LABEL_118:
        dword_1402FEC90 = 0;
        if ( CurrentIrql != 17 )
        {
          MiUnlockAllMemoryLists();
          goto LABEL_120;
        }
        goto LABEL_121;
      }
      if ( v41 == v39 )
      {
        v75 = ++v42;
        if ( v42 != v89 )
          continue;
      }
      --v41;
      goto LABEL_77;
    }
  }
  if ( v34 == 1 )
    _InterlockedAdd(&dword_1402FF218, 0xFFFFFFFF);
  dword_1402FEC90 = 0;
LABEL_120:
  __writecr8(CurrentIrql);
LABEL_121:
  CurrentThread = (struct _KTHREAD *)v80;
LABEL_122:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v81 == 1 )
  {
    stru_1402FEC68.Parameter = (void *)v89;
    ExQueueWorkItem(&stru_1402FEC68, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_1402FF6C8, 0xFFFFFFFF);
    KeSetEvent(&stru_1402FEC50, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
  KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v10;
}
