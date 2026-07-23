/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14013D708
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140127E6C (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreUpdatePagefileHash @ 0x14013B86C (MiStoreUpdatePagefileHash.c)
 *     MiUpdatePfnBackingStore @ 0x14013E180 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14013E28C (MiUpdatePagefilePeakUsage.c)
 *     MiStoreWriteIssue @ 0x14013E2A4 (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x14013F1A4 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14013F1C8 (MiStoreModifiedWriteDereference.c)
 *     MiStoreCheckCandidatePage @ 0x14013FCD8 (MiStoreCheckCandidatePage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiStoreLogFullPagefile @ 0x1402315CC (MiStoreLogFullPagefile.c)
 *     MiStoreLogNotCandidate @ 0x140231634 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteDisabled @ 0x140231778 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140231800 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14023193C (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  ULONG v2; // r10d
  struct _KEVENT *v3; // r12
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r13
  __int64 v11; // r13
  int v12; // ecx
  _DWORD *v13; // rax
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // r11d
  __int64 v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // esi
  __int64 *v22; // rsi
  __int64 i; // rax
  unsigned int v24; // ecx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v26; // edi
  int v27; // eax
  _SLIST_ENTRY *PoolWithTag; // r10
  unsigned int v29; // edi
  int v30; // r8d
  int v31; // eax
  int v32; // edi
  unsigned __int8 v33; // r13
  unsigned int v34; // edi
  unsigned __int64 *v35; // r10
  __int64 v36; // r9
  unsigned __int64 PteShadow; // rdi
  struct _LIST_ENTRY *Flink; // r9
  unsigned __int8 v39; // al
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v41; // rcx
  __int64 v42; // r13
  unsigned int v43; // esi
  unsigned __int64 updated; // rdi
  struct _LIST_ENTRY *v45; // rax
  unsigned int v46; // r15d
  unsigned int v47; // r11d
  struct _LIST_ENTRY *v48; // r8
  unsigned int v49; // r9d
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r10d
  unsigned int v53; // edi
  __int64 v54; // r8
  unsigned int v55; // r14d
  __int64 j; // rdx
  _QWORD *v57; // rsi
  unsigned __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // r14
  unsigned __int8 v62; // r12
  unsigned int v63; // r15d
  struct _KTHREAD *v64; // rcx
  __int16 v65; // ax
  _DWORD *v66; // rax
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  int v68; // [rsp+44h] [rbp-BCh]
  int v69; // [rsp+48h] [rbp-B8h]
  unsigned int v70; // [rsp+4Ch] [rbp-B4h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  char v72; // [rsp+58h] [rbp-A8h]
  PSLIST_ENTRY v73; // [rsp+60h] [rbp-A0h]
  _QWORD *v74; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  char v77; // [rsp+80h] [rbp-80h] BYREF
  __int64 v78; // [rsp+88h] [rbp-78h]
  int v79; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-68h]
  int v81; // [rsp+A0h] [rbp-60h]
  _BYTE v82[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  _DWORD *v85; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v86; // [rsp+D0h] [rbp-30h]
  __int64 v87; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v90; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+170h] [rbp+70h]
  unsigned int v92; // [rsp+178h] [rbp+78h]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = *(_DWORD *)(a1 + 248) >> 12;
  v78 = a1 + 208;
  v3 = *(struct _KEVENT **)(v1 + 216);
  v75 = v3;
  v70 = v2;
  if ( v3[44].Header.SignalState )
  {
    MiStoreLogWriteDisabled();
    --v3[44].Header.SignalState;
    return 3221225626LL;
  }
  v5 = *((_QWORD *)&v3[222].Header.WaitListHead.Blink + HIDWORD(v3[43].Header.WaitListHead.Flink));
  v71 = v5;
  if ( !*(_QWORD *)(v5 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v85 = 0LL;
  *(_DWORD *)(a1 + 44) = 1;
  v6 = *(_DWORD *)(v5 + 136);
  v7 = 0LL;
  v69 = 0;
  v73 = 0LL;
  v92 = 0;
  v91 = 1;
  v67 = v6;
  v72 = 17;
  v8 = (_QWORD *)(a1 + 256);
  v90 = 0;
  v83 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v9 = 0;
  v84 = a1 + 256;
LABEL_6:
  v10 = a1;
  v74 = v8;
LABEL_7:
  if ( v9 < v2 )
  {
    v11 = *v8;
    v12 = 1;
    v68 = 1;
    if ( *v8 != qword_14034F6F8 && *(_QWORD *)(v5 + 24) )
    {
      if ( v85 != *(_DWORD **)(v5 + 128) )
      {
        if ( v85 )
        {
          v13 = MiDerefPageFileSpaceBitmaps(v5, &v85, 1);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
        MiRefPageFileSpaceBitmaps(v5, (__int64)&v85);
      }
      v14 = v6 < v86 ? v6 : 0;
      v15 = v86 - 1;
      if ( (v87 & 4) != 0 )
      {
        v16 = 1LL;
        v17 = 32;
      }
      else
      {
        v16 = 0LL;
        v17 = 0;
      }
      v18 = v87 - 4 * v16;
      while ( 1 )
      {
        v19 = v17 + v15;
        v20 = v17 + v14;
        if ( v15 - v14 == -1 )
          goto LABEL_20;
        v22 = (__int64 *)(v18 + 8 * ((unsigned __int64)v20 >> 6));
        for ( i = ((1LL << (v20 & 0x3F)) - 1) | *v22; i == -1; i = *v22 )
        {
          if ( (unsigned __int64)++v22 > v18 + 8 * ((unsigned __int64)v19 >> 6) )
            goto LABEL_20;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v21 = i + ((unsigned int)(((__int64)v22 - v18) >> 3) << 6);
        v81 = i;
        if ( v21 > v19 )
        {
LABEL_20:
          v21 = -1;
        }
        else if ( v21 != -1 )
        {
          v21 -= v17;
LABEL_32:
          v7 = 48 * v11 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          v72 = CurrentIrql;
          __writecr8(2uLL);
          v26 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v26);
            }
            while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
          }
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
          {
            v76 = 0LL;
            v27 = MiStoreCheckCandidatePage(v7, v21, (unsigned int)&v77, (unsigned int)v82, (__int64)&v76);
            if ( v27 < 0 )
            {
              MiStoreLogNotCandidate((unsigned int)v27, v21);
              goto LABEL_42;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            PoolWithTag = v73;
            v72 = 17;
            if ( !v73 )
            {
              v73 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v3[47].Header.WaitListHead);
              PoolWithTag = v73;
              if ( !v73 )
              {
                PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
                v73 = PoolWithTag;
              }
              if ( !PoolWithTag )
              {
                v69 = 1;
                goto LABEL_53;
              }
            }
            if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - 1LL) >= 8 )
              v29 = 8;
            else
              v29 = *(_DWORD *)(v71 + 24) - 1;
            v30 = v91;
            if ( v91 )
            {
              if ( v3[229].Header.WaitListHead.Flink >= (struct _LIST_ENTRY *)0x100 )
              {
                v30 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v83) < 0x2FAF080
                    ? v91
                    : 0;
                v91 = v30;
              }
              else
              {
                v91 = 0;
                v30 = 0;
                if ( v29 >= 3 )
                  v29 = 3;
              }
            }
            v10 = a1;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
            v31 = MiStoreWriteIssue(
                    (_DWORD)PoolWithTag,
                    v7,
                    (unsigned int)&v77,
                    (unsigned int)v82,
                    (__int64)PoolWithTag,
                    v76,
                    a1,
                    v30);
            if ( v31 < 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
              if ( v31 == -1073740682 )
              {
                v67 = v21 + 1;
                if ( v92 < v29 )
                {
                  MiStoreLogWriteIssueRetry((unsigned int)v82, v21, v92, v91, v3[44].Header.WaitListHead.Flink);
                  v2 = v70;
                  v5 = v71;
                  v9 = v90;
                  v8 = v74;
                  ++v92;
                  v6 = v67;
                  goto LABEL_7;
                }
              }
              else
              {
                v32 = v69;
                if ( v31 == -1073741670 )
                  v32 = 1;
                v69 = v32;
              }
              MiStoreLogWriteIssueFailure(
                v31,
                (unsigned int)v82,
                v21,
                v92,
                v91,
                ++LODWORD(v3[44].Header.WaitListHead.Flink));
LABEL_53:
              v9 = v90;
LABEL_46:
              _bittestandset((signed __int32 *)v3[48].Header.WaitListHead.Flink->Blink, v9);
LABEL_47:
              ++v9;
              v2 = v70;
              v8 = v74 + 1;
              v5 = v71;
              v6 = v67;
              v90 = v9;
              v92 = 0;
              goto LABEL_6;
            }
            v68 = 0;
            v73 = 0LL;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v71 + 192), &LockHandle);
            v67 = v21 + 1;
            _bittestandset(*(signed __int32 **)(*(_QWORD *)(v71 + 128) + 16LL), v21);
            --*(_QWORD *)(v71 + 24);
            *(_DWORD *)(v71 + 136) = v21 + 1;
            MiUpdatePagefilePeakUsage(v71);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v33 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v34 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v34);
              }
              while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
            }
            v35 = (unsigned __int64 *)(v7 + 16);
            v36 = *(_QWORD *)(v7 + 16);
            if ( (v36 & 4) != 0 )
            {
              PteShadow = *(_QWORD *)(v7 + 16);
              if ( (unsigned __int64)(v7 + 0x90482413010LL) <= 0x7F8 )
                PteShadow = MiReadPteShadow(v7 + 16, *(_QWORD *)(v7 + 16));
              *v35 = v36 & 0xFFFFFFFFFFFFFFFBuLL;
            }
            else if ( (v36 & 2) != 0 )
            {
              PteShadow = *(_QWORD *)(v7 + 16);
              if ( (unsigned __int64)(v7 + 0x90482413010LL) <= 0x7F8 )
                PteShadow = MiReadPteShadow(v7 + 16, *(_QWORD *)(v7 + 16));
            }
            else
            {
              PteShadow = 0LL;
            }
            *v35 &= ~2uLL;
            MiUpdatePfnBackingStore(v7, v71, v21, 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v33);
            CurrentIrql = 17;
            v72 = 17;
            MiReleasePageFileInfo(v3, PteShadow, 2);
          }
LABEL_42:
          v12 = v68;
          v9 = v90;
LABEL_43:
          if ( CurrentIrql != 17 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            v72 = 17;
          }
          if ( v12 )
            goto LABEL_46;
          goto LABEL_47;
        }
        if ( !v14 )
          goto LABEL_32;
        v14 = 0;
        v24 = v67 + 1;
        if ( v67 + 1 > v86 )
          v24 = v86;
        v15 = v24 - 1;
      }
    }
    CurrentIrql = v72;
    goto LABEL_43;
  }
  if ( v69 )
    v3[44].Header.SignalState = 32;
  Flink = v3[48].Header.WaitListHead.Flink;
  if ( v2 - 1 >= LODWORD(Flink->Flink) )
    goto LABEL_95;
  if ( v2 > 1 )
  {
    Blink = Flink->Blink;
    v41 = (struct _LIST_ENTRY *)((char *)Blink + 4 * ((unsigned __int64)(v2 - 1) >> 5));
    if ( Blink == v41 )
    {
      if ( ((0xFFFFFFFF >> (32 - v2)) & (__int64)Blink->Flink) != 0xFFFFFFFF >> (32 - v2) )
        goto LABEL_95;
    }
    else
    {
      do
      {
        if ( LODWORD(Blink->Flink) != -1 )
          goto LABEL_95;
        Blink = (struct _LIST_ENTRY *)((char *)Blink + 4);
      }
      while ( Blink != v41 );
      if ( ((0xFFFFFFFF >> -(char)v2) & (__int64)Blink->Flink) != 0xFFFFFFFF >> -(char)v2 )
      {
        v39 = 0;
LABEL_102:
        if ( v39 )
          goto LABEL_103;
        goto LABEL_95;
      }
    }
LABEL_103:
    RtlClearBits((PRTL_BITMAP)v3[48].Header.WaitListHead.Flink, 0, v2);
    *(_DWORD *)(v10 + 44) = 0;
    v53 = -1073740759;
    goto LABEL_131;
  }
  if ( v2 == 1 )
  {
    v39 = _bittest((const signed __int32 *)Flink->Blink, 0);
    goto LABEL_102;
  }
LABEL_95:
  v42 = *(__int64 *)(v10 + 176) >> 12;
  v43 = -1;
  updated = MiTransferSoftwarePte(0LL, *(_QWORD *)(a1 + 144), (unsigned int)v42);
  while ( 2 )
  {
    v45 = v3[48].Header.WaitListHead.Flink;
    v46 = v43 + 1;
    v47 = (unsigned int)v45->Flink;
    v48 = v45->Blink;
    v49 = v46 < LODWORD(v45->Flink) ? v46 : 0;
    v50 = (unsigned int)(LODWORD(v45->Flink) - 1);
    if ( ((unsigned __int8)v48 & 4) != 0 )
    {
      v51 = 1LL;
      v52 = 32;
    }
    else
    {
      v51 = 0LL;
      v52 = 0;
    }
    v54 = (__int64)v48 - 4 * v51;
    while ( 1 )
    {
      v55 = v52 + v50;
      j = v52 + v49;
      if ( (_DWORD)v50 - v49 == -1 )
        goto LABEL_107;
      v50 = (unsigned int)j;
      LOBYTE(v50) = (v52 + v49) & 0x3F;
      v57 = (_QWORD *)(v54 + 8 * ((unsigned __int64)(unsigned int)j >> 6));
      for ( j = ~*v57 | ((1LL << v50) - 1); j == -1; j = ~*v57 )
      {
        if ( (unsigned __int64)++v57 > v54 + 8 * ((unsigned __int64)v55 >> 6) )
          goto LABEL_107;
      }
      j = ~j;
      _BitScanForward64(&v58, j);
      v43 = v58 + ((unsigned int)(((__int64)v57 - v54) >> 3) << 6);
      v79 = v58;
      if ( v43 > v55 )
      {
LABEL_107:
        v43 = -1;
        goto LABEL_114;
      }
      if ( v43 != -1 )
        break;
LABEL_114:
      if ( !v49 )
        goto LABEL_119;
      v59 = v46 + 1;
      v49 = 0;
      if ( v46 + 1 > v47 )
        v59 = v47;
      v50 = v59 - 1;
    }
    v43 -= v52;
LABEL_119:
    if ( v43 != -1 )
    {
      v3 = v75;
      _bittestandreset((signed __int32 *)v75[48].Header.WaitListHead.Flink->Blink, v43);
      v60 = *(_QWORD *)(v84 + 8LL * v43);
      if ( v60 == qword_14034F6F8 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v43 + (unsigned int)v42);
        MiReleasePageFileInfo(v75, updated, 2);
      }
      else
      {
        v61 = 48 * v60 - 0x58000000000LL;
        v62 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v63 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v63);
          }
          while ( (*(_QWORD *)(v61 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
        }
        *(_BYTE *)(v61 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v62);
        v3 = v75;
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash((_KPROCESS *)v50, j, v78, v70);
  *(_DWORD *)(a1 + 40) |= 0x20u;
  MiStoreModifiedWriteDereference(a1);
  v3 = v75;
  v53 = 259;
  v5 = v71;
LABEL_131:
  v64 = CurrentThread;
  v65 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v65;
  if ( !v65
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
    && !v64->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v73 )
    MiStoreFreeWriteSupport(v73, v3);
  if ( v85 )
  {
    v66 = MiDerefPageFileSpaceBitmaps(v5, &v85, 0);
    if ( v66 )
      ExFreePoolWithTag(v66, 0);
  }
  return v53;
}
