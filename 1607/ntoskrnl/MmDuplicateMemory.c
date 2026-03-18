/*
 * XREFs of MmDuplicateMemory @ 0x1403C9918
 * Callers:
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403DA8AC (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403DAE30 (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x140658F98 (MmCreateMirror.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x14002448C (MiPfnReferenceCountIsZero.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004F188 (MiAddLockedPageCharge.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     MiIsDecayPfn @ 0x1400A3DF8 (MiIsDecayPfn.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiLockAllMemoryLists @ 0x140112200 (MiLockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x14011246C (MiMirrorNodeLargePages.c)
 *     MiResumeFromHibernate @ 0x1401126A0 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x1401127C8 (MiUnlockAllMemoryLists.c)
 *     RtlInterlockedClearBitRunEx @ 0x140112998 (RtlInterlockedClearBitRunEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x1401129E8 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x1401129F0 (RtlFindSetBitsEx.c)
 *     MiDiscardTransitionPte @ 0x1401238C0 (MiDiscardTransitionPte.c)
 *     MiLockDynamicMemoryExclusive @ 0x140132E08 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140132E74 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockPage @ 0x1401593D8 (MiLockPage.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA3D8 (MmEmptyAllWorkingSets.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiUnlockPage @ 0x1401F2B80 (MiUnlockPage.c)
 *     RtlInterlockedSetBitRunEx @ 0x140213024 (RtlInterlockedSetBitRunEx.c)
 *     MmLockPagableSectionByHandle @ 0x1404DC9CC (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x14052F194 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x14052F1D0 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // r13d
  __int64 (**v2)(void); // r15
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r12d
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  int v9; // esi
  int v10; // ebp
  int v11; // edi
  __int64 v12; // rsi
  int v13; // edi
  int v14; // ebp
  unsigned int v15; // r14d
  __int64 v16; // rdi
  int *v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 i; // r14
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rbp
  unsigned __int64 *v27; // r14
  unsigned __int64 j; // rdi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r14
  int v31; // ebp
  unsigned __int64 v32; // rsi
  unsigned __int64 SetBits; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 NextForwardRunClear; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r14
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r15
  unsigned __int8 v43; // bp
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // r12
  unsigned __int8 v49; // di
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ebp
  unsigned __int8 CurrentIrql; // r15
  __int64 v55; // r12
  unsigned __int8 v56; // di
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rbp
  int v61; // r13d
  unsigned int v62; // r12d
  int *v63; // rdi
  unsigned __int64 v64; // rdi
  _QWORD *v65; // r14
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rbp
  unsigned __int64 v73; // rax
  __int64 v74; // rdi
  unsigned __int64 v75; // r14
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rbp
  unsigned __int64 v80; // rax
  __int64 v81; // rdi
  unsigned __int64 v82; // r14
  unsigned __int64 v83; // rdi
  int v84; // eax
  int v85; // [rsp+30h] [rbp-A8h]
  int v86; // [rsp+30h] [rbp-A8h]
  char v87; // [rsp+34h] [rbp-A4h]
  int v88; // [rsp+38h] [rbp-A0h]
  __int64 v89; // [rsp+40h] [rbp-98h]
  unsigned __int64 v90; // [rsp+48h] [rbp-90h]
  int v91; // [rsp+50h] [rbp-88h]
  int v92; // [rsp+54h] [rbp-84h]
  __int64 v93; // [rsp+58h] [rbp-80h] BYREF
  __int64 v94; // [rsp+60h] [rbp-78h]
  int v95; // [rsp+68h] [rbp-70h]
  _QWORD *v96; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v99; // [rsp+E8h] [rbp+10h]
  unsigned int v100; // [rsp+F0h] [rbp+18h]
  int v101; // [rsp+F0h] [rbp+18h]
  unsigned int v102; // [rsp+F0h] [rbp+18h]
  int v103; // [rsp+F8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = (__int64 (**)(void))a1;
  v87 = v1;
  if ( (v1 & 5) == 5 )
    return 3221225485LL;
  if ( (v1 & 8) != 0 )
  {
    LOBYTE(v1) = v1 & 0xFA;
    v87 = v1;
  }
  if ( (v1 & 0xA) != 0 )
  {
    v4 = 0;
  }
  else
  {
    CcNotifyWriteBehind(2);
    v4 = 1;
  }
  v85 = v4;
  v92 = 0;
  v88 = 0;
  KeWaitForSingleObject(&stru_140327020, WrVirtualMemory, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v6 = 8;
  v89 = (__int64)CurrentThread;
  v99 = 8;
  --CurrentThread->SpecialApcDisable;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326FB8, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326FB8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140326FB8, v7, (ULONG_PTR)&qword_140326FB8);
  if ( v8 )
    v8[26] |= 1u;
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedAdd(&dword_140327788, 1u);
  if ( !(unsigned int)MiUpdateMirrorBitmaps() )
  {
    v9 = -1073741670;
    goto LABEL_187;
  }
  MiActOnMirrorBitmap(&qword_140327078, 1LL);
  v103 = 1;
  v10 = 0;
  v91 = 0;
  v11 = 0;
  if ( (v1 & 1) != 0 )
  {
    v11 = 3;
  }
  else
  {
    if ( (v1 & 4) != 0 )
    {
      v6 = 7;
    }
    else
    {
      if ( (v1 & 8) == 0 )
        goto LABEL_24;
      v6 = 0;
    }
    v99 = v6;
    v11 = 2;
  }
  v103 = 0;
LABEL_24:
  v9 = (*v2)();
  if ( v9 < 0 )
    goto LABEL_186;
  v12 = v11;
  v13 = v1 & 4;
  v96 = (_QWORD *)v12;
  v95 = v13;
  while ( 2 )
  {
    MiActOnMirrorBitmap(&qword_140327068, 2LL);
    if ( v10 == v4 )
    {
      v88 = 1;
      _InterlockedAdd(&dword_140327668, 1u);
    }
    if ( v13 )
    {
      v14 = v6;
    }
    else
    {
      if ( (v1 & 0x10) == 0 )
        MmEmptyAllWorkingSets();
      v14 = 0;
    }
    v100 = 0;
    dword_140327060 = 1;
    v15 = 0;
    v16 = v12;
    if ( v12 <= 4 )
    {
      while ( 1 )
      {
        v17 = *(int **)&MiSystemPartition[2 * v16 + 938];
        if ( v16 <= 1 )
          v17 = (int *)(*(_QWORD *)&MiSystemPartition[2 * v16 + 432] + 40LL * v15);
        if ( v16 == 2 )
          v17 = &MiSystemPartition[8 * v14 + 496 + 2 * v14];
        if ( v16 != 3 )
          goto LABEL_41;
        if ( *(_QWORD *)v17 != qword_1403251F0 )
          break;
LABEL_57:
        if ( ++v16 > 4 )
          goto LABEL_58;
      }
      v17 = &MiSystemPartition[8 * v14 + 752 + 2 * v14];
LABEL_41:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v17 + 4, &LockHandle);
      if ( *(_QWORD *)v17 )
      {
        v18 = *((_QWORD *)v17 + 2);
        v19 = 0xFFFFFA8000000000uLL;
        do
        {
          v20 = (_QWORD *)(v19 + 48 * v18);
          if ( v16 == 2 && MiIsDecayPfn(v18) )
          {
            for ( i = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v20 + 2, v19, v21, v22); i != v18; i = *v24 & 0xFFFFFFFFFLL )
            {
              v24 = (_QWORD *)(v19 + 48 * i);
              if ( _bittest64((const signed __int64 *)qword_140327080, i) )
              {
                RtlInterlockedClearBitRunEx((__int64)&qword_140327078, i, 1uLL);
                v19 = 0xFFFFFA8000000000uLL;
                _bittestandset64((signed __int64 *)qword_140327070, i);
              }
            }
          }
          else if ( _bittest64((const signed __int64 *)qword_140327080, v18) )
          {
            RtlInterlockedClearBitRunEx((__int64)&qword_140327078, v18, 1uLL);
            v19 = 0xFFFFFA8000000000uLL;
            _bittestandset64((signed __int64 *)qword_140327070, v18);
          }
          v18 = *v20 & 0xFFFFFFFFFLL;
        }
        while ( v18 != 0xFFFFFFFFFLL );
        v15 = v100;
        v2 = (__int64 (**)(void))a1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v16 > 1 )
      {
        if ( v16 == 2 )
        {
          if ( ++v14 == 8 )
            v14 = 0;
          else
            v16 = 1LL;
        }
        else if ( v16 == 3 && ++v14 != 16 )
        {
          v16 = 2LL;
        }
      }
      else
      {
        v100 = ++v15;
        if ( v15 >= dword_1403269FC )
        {
          v100 = 0;
          v15 = 0;
          if ( v16 == 1 )
            MiMirrorNodeLargePages(v25, 0, (__int64)v2);
        }
        else
        {
          --v16;
        }
      }
      goto LABEL_57;
    }
LABEL_58:
    KeAcquireInStackQueuedSpinLock(&qword_1403251A0, &LockHandle);
    v26 = 16LL;
    v27 = (unsigned __int64 *)&unk_140323E90;
    do
    {
      for ( j = *v27; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
      {
        if ( _bittest64((const signed __int64 *)qword_140327080, j) )
        {
          RtlInterlockedClearBitRunEx((__int64)&qword_140327078, j, 1uLL);
          _bittestandset64((signed __int64 *)qword_140327070, j);
        }
      }
      v27 += 5;
      --v26;
    }
    while ( v26 );
    v29 = qword_140323E50;
    LOBYTE(v1) = v87;
    if ( qword_140323E50 != 0xFFFFFFFFFLL )
    {
      do
      {
        if ( _bittest64((const signed __int64 *)qword_140327080, v29) )
        {
          RtlInterlockedClearBitRunEx((__int64)&qword_140327078, v29, 1uLL);
          _bittestandset64((signed __int64 *)qword_140327070, v29);
        }
        v29 = *(_QWORD *)(48 * v29 - 0x58000000000LL) & 0xFFFFFFFFFLL;
      }
      while ( v29 != 0xFFFFFFFFFLL );
      LOBYTE(v1) = v87;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v30 = 0LL;
    v101 = 0;
    v31 = 0;
    v90 = 0LL;
    v32 = 0LL;
    do
    {
      SetBits = RtlFindSetBitsEx((unsigned __int64 *)&qword_140327068, 1uLL, v30);
      v34 = SetBits;
      if ( SetBits < v30 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&qword_140327068, SetBits, (unsigned __int64 *)&v93);
      v36 = v93;
      v37 = NextForwardRunClear;
      v94 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v36 = qword_140327068;
      v38 = v36 - v34;
      if ( (v1 & 8) == 0 )
        goto LABEL_107;
      if ( v31 == 1 )
      {
        RtlInterlockedSetBitRunEx((__int64)&qword_140327078, v34, v38);
        v30 = v34 + v37 + v38;
        continue;
      }
      v39 = -1LL;
      if ( v38 > 0x100 )
        v38 = 256LL;
      v94 = 0LL;
      v40 = v38;
      v30 = v34;
      v41 = 48 * v34 - 0x58000000000LL;
      v42 = v41 + 48 * v40;
      while ( 1 )
      {
        v43 = MiLockPage(v41);
        if ( *(_WORD *)(v41 + 32) || (unsigned __int8)((*(_BYTE *)(v41 + 34) & 7) - 2) > 2u )
        {
          MiUnlockPage(v41, v43);
          if ( v39 != -1 )
            goto LABEL_106;
          goto LABEL_99;
        }
        if ( !(unsigned int)MiUnlinkPageFromList(v41, 0) )
          break;
        *(_QWORD *)(v41 + 24) &= 0xC000000000000000uLL;
        if ( !(unsigned int)MiAddLockedPageCharge(v41, 0) )
        {
          MiPfnReferenceCountIsZero(v41, v30);
          goto LABEL_104;
        }
        RtlInterlockedClearBitRunEx((__int64)&qword_140327078, v30, 1uLL);
        MiUnlockPage(v41, v43);
        if ( v39 == -1 )
          v39 = v30;
LABEL_99:
        v41 += 48LL;
        ++v30;
        if ( v41 >= v42 )
        {
          v31 = v101;
          goto LABEL_101;
        }
      }
      MiDiscardTransitionPte(v41, v44, v45, v46);
LABEL_104:
      MiUnlockPage(v41, v43);
      v31 = 1;
      v101 = 1;
LABEL_101:
      if ( v39 == -1 )
        goto LABEL_112;
LABEL_106:
      v34 = v39;
      v38 = v30 - v39;
      v32 = v90;
LABEL_107:
      v90 = v38 + v32;
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v34 << 12, v38 << 12);
      if ( (v1 & 8) != 0 )
      {
        v47 = 48 * v34 - 0x58000000000LL;
        v48 = v47 + 48 * v38;
        do
        {
          v49 = MiLockPage(v47);
          MiRemoveLockedPageChargeAndDecRef(v47, v50, v51, v52);
          MiUnlockPage(v47, v49);
          v47 += 48LL;
        }
        while ( v47 < v48 );
      }
      if ( v9 < 0 )
      {
        if ( v88 == 1 )
          _InterlockedAdd(&dword_140327668, 0xFFFFFFFF);
        dword_140327060 = 0;
        goto LABEL_186;
      }
      v31 = v101;
      v30 = v34 + v94 + v38;
LABEL_112:
      v32 = v90;
    }
    while ( v30 < qword_140327068 );
    v53 = v88;
    if ( v88 != 1 && v32 >= 0x400 )
    {
      v2 = (__int64 (**)(void))a1;
      v10 = v91 + 1;
      v13 = v95;
      v4 = v85;
      v12 = (__int64)v96;
      v6 = v99;
      ++v91;
      continue;
    }
    break;
  }
  if ( (v1 & 2) == 0 && v88 == 1 )
  {
    _InterlockedAdd(&dword_140327668, 0xFFFFFFFF);
    v53 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v55 = a1;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
  if ( v9 < 0 )
  {
    if ( v53 == 1 )
      _InterlockedAdd(&dword_140327668, 0xFFFFFFFF);
    dword_140327060 = 0;
LABEL_127:
    __writecr8(CurrentIrql);
    goto LABEL_186;
  }
  v56 = KeGetCurrentIrql();
  if ( *(_QWORD *)(a1 + 24) )
    MiActOnMirrorBitmap(&qword_140327068, 1LL);
  if ( v56 < 2u )
    __writecr8(2uLL);
  MiLockAllMemoryLists();
  qword_140327058 = v89;
  if ( v53 == 1 )
    _InterlockedAdd(&dword_140327668, 0xFFFFFFFF);
  v58 = 2LL;
  dword_140327060 = 2;
  if ( (v1 & 0xD) == 0 )
    goto LABEL_164;
  v59 = 2;
  v86 = 0;
  if ( (v1 & 8) != 0 )
    v59 = 1;
  v102 = 0;
  v60 = v59;
  v61 = 0;
  v62 = 0;
LABEL_138:
  v94 = v60;
  while ( 1 )
  {
    if ( v60 > 1 )
    {
      v63 = &MiSystemPartition[10 * v61 + 496];
    }
    else
    {
      v57 = 5LL * v62;
      v63 = (int *)(*(_QWORD *)&MiSystemPartition[2 * v60 + 432] + 40LL * v62);
    }
    v64 = *((_QWORD *)v63 + 2);
    if ( v64 != 0xFFFFFFFFFLL )
    {
      do
      {
        v65 = (_QWORD *)(48 * v64 - 0x58000000000LL);
        v96 = v65;
        if ( v60 == v58 && MiIsDecayPfn(v64) )
        {
          v69 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v65 + 2, v66, v67, v68);
          if ( v69 != v64 )
          {
            do
            {
              RtlInterlockedClearBitRunEx((__int64)&qword_140327078, v69, 1uLL);
              if ( *(_QWORD *)(a1 + 24) )
                _bittestandreset64((signed __int64 *)qword_140327070, v69);
              v69 = *(_QWORD *)(48 * v69 - 0x58000000000LL) & 0xFFFFFFFFFLL;
            }
            while ( v69 != v64 );
            v60 = v94;
            v58 = 2LL;
            v65 = v96;
          }
        }
        else
        {
          RtlInterlockedClearBitRunEx((__int64)&qword_140327078, v64, 1uLL);
          if ( *(_QWORD *)(a1 + 24) )
            _bittestandreset64((signed __int64 *)qword_140327070, v64);
          v58 = 2LL;
        }
        v64 = *v65 & 0xFFFFFFFFFLL;
      }
      while ( v64 != 0xFFFFFFFFFLL );
      v62 = v102;
      v61 = v86;
    }
    if ( v60 <= 1 )
    {
      v102 = ++v62;
      if ( v62 < dword_1403269FC )
        continue;
      v62 = 0;
      v102 = 0;
    }
    if ( !v60 )
      break;
    if ( v60 == v58 )
    {
      v86 = ++v61;
      if ( v61 != v99 )
        continue;
    }
    --v60;
    goto LABEL_138;
  }
  v55 = a1;
  MiMirrorNodeLargePages(v57, 1, a1);
LABEL_164:
  v70 = 0LL;
  do
  {
    v71 = RtlFindSetBitsEx((unsigned __int64 *)&qword_140327078, 1uLL, v70);
    v72 = v71;
    if ( v71 < v70 || v71 == -1LL )
      break;
    v73 = RtlFindNextForwardRunClearEx((__int64)&qword_140327078, v71, (unsigned __int64 *)&v93);
    v74 = v93;
    v75 = v73;
    if ( !v73 )
      v74 = qword_140327078;
    v76 = v74 - v72;
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v55 + 16))(v72 << 12, v76 << 12);
    if ( v9 < 0 )
    {
LABEL_180:
      qword_140327058 = 0LL;
      goto LABEL_184;
    }
    v70 = v72 + v75 + v76;
  }
  while ( v70 < qword_140327078 );
  if ( *(_QWORD *)(v55 + 24) )
  {
    v77 = 0LL;
    do
    {
      v78 = RtlFindSetBitsEx((unsigned __int64 *)&qword_140327068, 1uLL, v77);
      v79 = v78;
      if ( v78 < v77 || v78 == -1LL )
        break;
      v80 = RtlFindNextForwardRunClearEx((__int64)&qword_140327068, v78, (unsigned __int64 *)&v93);
      v81 = v93;
      v82 = v80;
      if ( !v80 )
        v81 = qword_140327068;
      v83 = v81 - v79;
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v55 + 24))(v79 << 12, v83 << 12);
      if ( v9 < 0 )
        goto LABEL_180;
      v77 = v79 + v82 + v83;
    }
    while ( v77 < qword_140327068 );
  }
  v84 = (*(__int64 (__fastcall **)(__int64))(v55 + 8))(1LL);
  qword_140327058 = 0LL;
  v9 = v84;
  if ( v84 == 1073742484 && !v103 )
  {
    v9 = 0;
    MiResumeFromHibernate(v99);
    v92 = 1;
  }
LABEL_184:
  dword_140327060 = 0;
  if ( CurrentIrql != 17 )
  {
    MiUnlockAllMemoryLists();
    goto LABEL_127;
  }
LABEL_186:
  CurrentThread = (struct _KTHREAD *)v89;
LABEL_187:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v92 == 1 )
  {
    stru_140327038.Parameter = (void *)v99;
    ExQueueWorkItem(&stru_140327038, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_140327788, 0xFFFFFFFF);
    KeSetEvent(&stru_140327020, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326FB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326FB8);
  KeAbPostRelease((ULONG_PTR)&qword_140326FB8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v9;
}
