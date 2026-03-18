/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14010A610
 * Callers:
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiStoreLogNotCandidate @ 0x140108AFC (MiStoreLogNotCandidate.c)
 *     MiStoreUpdatePagefileHash @ 0x140108B4C (MiStoreUpdatePagefileHash.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140109BC8 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140109C34 (MiDerefPageFileSpaceBitmaps.c)
 *     MiStoreCheckCandidatePage @ 0x14010AD28 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x14010B604 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14010B6D0 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreWriteIssue @ 0x14010B6E8 (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x14010D5B4 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14010D5D8 (MiStoreModifiedWriteDereference.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x1401E538C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x1401E5494 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1401E5524 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1401E5668 (MiStoreLogWriteIssueRetry.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  unsigned int v7; // ebx
  __int64 v8; // r13
  ULONG v9; // r11d
  unsigned int v10; // edx
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 i; // rax
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  int v28; // r11d
  __int64 v29; // rax
  int v30; // r11d
  int v31; // eax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r9
  _DWORD *v35; // r8
  _DWORD *v36; // rcx
  __int64 v37; // r13
  __int64 v38; // r13
  unsigned int v39; // edi
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // ebx
  __int64 v44; // r9
  unsigned int v45; // r10d
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // r11d
  __int64 v49; // r9
  unsigned int v50; // esi
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // ecx
  unsigned int v56; // ebx
  _DWORD *v57; // rax
  __int64 result; // rax
  unsigned __int8 v59; // al
  _DWORD *v60; // rax
  unsigned int v61; // ecx
  int v62; // ebx
  __int64 v63; // rbx
  unsigned __int8 v64; // al
  unsigned int v65; // [rsp+40h] [rbp-C0h]
  unsigned int v66; // [rsp+44h] [rbp-BCh]
  int v67; // [rsp+48h] [rbp-B8h]
  unsigned int v68; // [rsp+4Ch] [rbp-B4h]
  __int64 v69; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v70; // [rsp+58h] [rbp-A8h] BYREF
  void *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _QWORD *v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h] BYREF
  char v74[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v75; // [rsp+80h] [rbp-80h]
  int v76; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-68h]
  _BYTE v79[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-50h]
  int v81; // [rsp+B8h] [rbp-48h]
  _DWORD *v82; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v83; // [rsp+C8h] [rbp-38h]
  __int64 v84; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v87; // [rsp+158h] [rbp+58h]
  unsigned int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+160h] [rbp+60h]
  unsigned int v90; // [rsp+168h] [rbp+68h]

  v1 = a1 + 208;
  v68 = *(_DWORD *)(a1 + 248) >> 12;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 256LL);
  v4 = *(unsigned int *)(v3 + 1092);
  if ( (_DWORD)v4 )
  {
    MiStoreLogWriteDisabled(v4, 0LL);
    result = 3221225626LL;
    --*(_DWORD *)(v3 + 1092);
    return result;
  }
  v5 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1076) + 5728);
  v69 = v5;
  if ( !*(_QWORD *)(v5 + 24) )
  {
    MiStoreLogFullPagefile(v4, 0LL);
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v82 = 0LL;
  *(_DWORD *)(a1 + 44) = 1;
  v6 = 17;
  v7 = *(_DWORD *)(v5 + 120);
  v8 = 0LL;
  v65 = v7;
  v67 = 0;
  PoolWithTag = 0LL;
  v90 = 0;
  v89 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v10 = 0;
  v11 = (_QWORD *)(v1 + 48);
  v13 = v12;
  v75 = v1 + 48;
LABEL_4:
  v72 = v11;
  v87 = v10;
  while ( v10 < v9 )
  {
    v14 = v13;
    v80 = *v11;
    v66 = v13;
    if ( v80 == qword_1402FF238 || !*(_QWORD *)(v5 + 24) )
      goto LABEL_32;
    if ( v82 != *(_DWORD **)(v5 + 112) )
    {
      if ( v82 )
      {
        v60 = MiDerefPageFileSpaceBitmaps(v5, &v82, v13);
        if ( v60 )
          ExFreePoolWithTag(v60, 0);
      }
      MiRefPageFileSpaceBitmaps(v5, (__int64)&v82);
      v13 = 1;
    }
    v15 = v7 < v83 ? v7 : 0;
    v16 = v83 - 1;
    if ( (v84 & 4) != 0 )
    {
      v17 = v13;
      v18 = 32;
    }
    else
    {
      v17 = 0LL;
      v18 = 0;
    }
    v19 = v84 - 4 * v17;
    while ( 1 )
    {
      v20 = v18 + v16;
      v21 = v18 + v15;
      if ( v13 + v16 - v15 < v13 )
      {
        v24 = -1;
      }
      else
      {
        v22 = (__int64 *)(v19 + 8 * ((unsigned __int64)v21 >> 6));
        for ( i = ((1LL << (v21 & 0x3F)) - 1) | *v22; i == -1; i = *v22 )
        {
          if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)v20 >> 6) )
            goto LABEL_39;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v24 = i + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
        v81 = i;
        if ( v24 > v20 )
        {
LABEL_39:
          v24 = -1;
          goto LABEL_40;
        }
        if ( v24 != -1 )
        {
          v24 -= v18;
          break;
        }
LABEL_40:
        v13 = 1;
      }
      if ( !v15 )
        break;
      v61 = v65 + 1;
      if ( v65 + 1 > v83 )
        v61 = v83;
      v16 = v61 - 1;
      v15 = 0;
    }
    v8 = 48 * v80 - 0x58000000000LL;
    v6 = MiLockPageInline(v8);
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_31;
    v73 = 0LL;
    v25 = MiStoreCheckCandidatePage(v8, v24, (unsigned int)v74, (unsigned int)v79, (__int64)&v73);
    if ( v25 < 0 )
    {
      MiStoreLogNotCandidate(v25);
      goto LABEL_31;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    v6 = 17;
    if ( !PoolWithTag )
    {
      PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v3 + 1168));
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
        if ( !PoolWithTag )
        {
          v67 = 1;
          goto LABEL_97;
        }
      }
    }
    v26 = 1;
    if ( (unsigned __int64)(*(_QWORD *)(v69 + 24) - 1LL) < 8 )
      v27 = *(_DWORD *)(v69 + 24) - 1;
    else
      v27 = 8;
    v28 = v89;
    if ( v89 )
    {
      if ( *(_QWORD *)(v3 + 5888) < 0x120uLL )
      {
        v28 = 0;
        v89 = 0;
        if ( v27 >= 3 )
          v27 = 3;
      }
      else
      {
        v29 = KiQueryUnbiasedInterruptTime();
        v28 = (unsigned __int64)(v29 - UnbiasedInterruptTime) < 0x2FAF080 ? v30 : 0;
        v89 = v28;
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), v26);
    v31 = MiStoreWriteIssue(PoolWithTag, v8, v74, v79, PoolWithTag, v73, a1, v28);
    if ( v31 >= 0 )
    {
      v66 = 0;
      PoolWithTag = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v69 + 232), &LockHandle);
      v65 = v24 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v69 + 112) + 16LL), v24);
      --*(_QWORD *)(v69 + 24);
      *(_DWORD *)(v69 + 120) = v24 + 1;
      MiUpdatePagefilePeakUsage(v69);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v32 = (unsigned __int8)MiLockPageInline(v8);
      v33 = MiCapturePageFileInfoInline((unsigned __int64 *)(v8 + 16), 1, 1);
      *(_QWORD *)(v8 + 16) &= ~0x1000uLL;
      v70 = v33;
      MiUpdatePfnBackingStore(v8, v69, v24, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v32);
      v6 = 17;
      MiReleasePageFileInfo(v3, v70, 2);
LABEL_31:
      v14 = v66;
      v13 = 1;
      v10 = v87;
LABEL_32:
      if ( v6 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v6);
        v6 = 17;
      }
      if ( !v14 )
      {
LABEL_35:
        v10 += v13;
        v9 = v68;
        v11 = v72 + 1;
        v90 = 0;
        v5 = v69;
        v7 = v65;
        goto LABEL_4;
      }
LABEL_36:
      v13 = 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v3 + 1192) + 8LL), v10);
      goto LABEL_35;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
    if ( v31 != -1073740682 )
    {
      v62 = v67;
      if ( v31 == -1073741670 )
        v62 = 1;
      v67 = v62;
LABEL_96:
      MiStoreLogWriteIssueFailure(v31, (unsigned int)v79, v24, v90, v89, ++*(_DWORD *)(v3 + 1096));
LABEL_97:
      v10 = v87;
      goto LABEL_36;
    }
    v65 = v24 + 1;
    if ( v90 >= v27 )
      goto LABEL_96;
    MiStoreLogWriteIssueRetry((unsigned int)v79, v24, v90, v89, *(_DWORD *)(v3 + 1096));
    v9 = v68;
    v13 = 1;
    v5 = v69;
    v10 = v87;
    v11 = v72;
    ++v90;
    v7 = v65;
  }
  if ( v67 )
    *(_DWORD *)(v3 + 1092) = 32;
  v34 = *(_QWORD *)(v3 + 1192);
  if ( v9 - 1 >= *(_DWORD *)v34 )
    goto LABEL_47;
  if ( v9 <= v13 )
  {
    if ( v9 != v13 )
      goto LABEL_47;
    v59 = _bittest(*(const signed __int32 **)(v34 + 8), 0);
  }
  else
  {
    v35 = *(_DWORD **)(v34 + 8);
    v36 = &v35[(unsigned __int64)(v9 - 1) >> 5];
    if ( v35 == v36 )
    {
      if ( ((0xFFFFFFFF >> (32 - v9)) & *v35) != 0xFFFFFFFF >> (32 - v9) )
        goto LABEL_47;
LABEL_84:
      RtlClearBits(*(PRTL_BITMAP *)(v3 + 1192), 0, v9);
      *(_DWORD *)(a1 + 44) = 0;
      v56 = -1073740759;
      goto LABEL_72;
    }
    do
    {
      if ( *v35 != -1 )
        goto LABEL_47;
      ++v35;
    }
    while ( v35 != v36 );
    if ( ((0xFFFFFFFF >> -(char)v9) & *v35) == 0xFFFFFFFF >> -(char)v9 )
      goto LABEL_84;
    v59 = 0;
  }
  if ( v59 )
    goto LABEL_84;
LABEL_47:
  v37 = *(_QWORD *)(a1 + 176);
  v70 = 0LL;
  v38 = v37 >> 12;
  v39 = -1;
  MI_SET_PAGING_FILE_INFO((__int64)&v70, &v70, *(_QWORD *)(a1 + 144), v38, 1);
  v40 = v75;
  while ( 2 )
  {
    v41 = *(_QWORD *)(v3 + 1192);
    v42 = v39 + 1;
    v88 = v42;
    v43 = *(_DWORD *)v41;
    v44 = *(_QWORD *)(v41 + 8);
    v45 = v42 < *(_DWORD *)v41 ? v42 : 0;
    v46 = (unsigned int)(*(_DWORD *)v41 - 1);
    if ( (v44 & 4) != 0 )
    {
      v47 = 1LL;
      v48 = 32;
    }
    else
    {
      v47 = 0LL;
      v48 = 0;
    }
    v49 = v44 - 4 * v47;
    while ( 1 )
    {
      v50 = v48 + v46;
      v51 = v48 + v45;
      if ( (_DWORD)v46 - v45 != -1 )
        break;
      v39 = -1;
LABEL_65:
      if ( !v45 )
        goto LABEL_56;
      v55 = v42 + 1;
      if ( v42 + 1 > v43 )
        v55 = v43;
      v46 = v55 - 1;
      v45 = 0;
    }
    LOBYTE(v46) = (v48 + v45) & 0x3F;
    v51 >>= 6;
    v52 = (_QWORD *)(v49 + 8 * v51);
    v53 = ((1LL << v46) - 1) | ~*v52;
    if ( v53 == -1 )
    {
      v46 = v49 + 8 * ((unsigned __int64)v50 >> 6);
      do
      {
        if ( (unsigned __int64)++v52 > v49 + 8 * ((unsigned __int64)v50 >> 6) )
          goto LABEL_63;
        v53 = ~*v52;
      }
      while ( !*v52 );
    }
    _BitScanForward64((unsigned __int64 *)&v53, ~v53);
    v39 = v53 + ((unsigned int)(((__int64)v52 - v49) >> 3) << 6);
    v76 = v53;
    if ( v39 > v50 )
    {
LABEL_63:
      v39 = -1;
      goto LABEL_64;
    }
    if ( v39 == -1 )
    {
LABEL_64:
      v42 = v88;
      goto LABEL_65;
    }
    v39 -= v48;
LABEL_56:
    if ( v39 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v3 + 1192) + 8LL), v39);
      v54 = *(_QWORD *)(v40 + 8LL * v39);
      if ( v54 == qword_1402FF238 )
      {
        v70 = (unsigned int)v70 | ((unsigned __int64)(v39 + (unsigned int)v38) << 32);
        MiReleasePageFileInfo(v3, v70, 2);
      }
      else
      {
        v63 = 48 * v54 - 0x58000000000LL;
        v64 = MiLockPageInline(v63);
        *(_BYTE *)(v63 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v64);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v46, v51, a1 + 208, v68);
  *(_DWORD *)(a1 + 40) |= 0x20u;
  MiStoreModifiedWriteDereference(a1);
  v5 = v69;
  v56 = 259;
LABEL_72:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( PoolWithTag )
    MiStoreFreeWriteSupport(PoolWithTag, v3);
  if ( v82 )
  {
    v57 = MiDerefPageFileSpaceBitmaps(v5, &v82, 0);
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
  }
  return v56;
}
