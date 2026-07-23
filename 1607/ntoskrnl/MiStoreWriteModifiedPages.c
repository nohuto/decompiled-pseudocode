/*
 * XREFs of MiStoreWriteModifiedPages @ 0x140118ED0
 * Callers:
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreLogNotCandidate @ 0x140116194 (MiStoreLogNotCandidate.c)
 *     MiStoreUpdatePagefileHash @ 0x140116D10 (MiStoreUpdatePagefileHash.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140117458 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1401174C4 (MiDerefPageFileSpaceBitmaps.c)
 *     MiStoreCheckCandidatePage @ 0x140119734 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x14011A048 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14011A0F4 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreWriteIssue @ 0x14011A10C (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x14011B40C (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14011B430 (MiStoreModifiedWriteDereference.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     MiStoreLogFullPagefile @ 0x1401F4810 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x1401F492C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1401F49D0 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1401F4B40 (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // r11d
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r15
  unsigned __int8 v9; // r14
  __int64 v10; // rsi
  ULONG v11; // r11d
  unsigned int v12; // edx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // r11d
  __int64 v23; // r9
  unsigned int v24; // r10d
  unsigned int v25; // edx
  unsigned int v26; // r15d
  __int64 *v27; // r15
  __int64 i; // rdx
  unsigned __int64 v29; // rax
  unsigned int v30; // ecx
  char v31; // al
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // r14d
  int v35; // r11d
  __int64 v36; // rax
  int v37; // r11d
  int v38; // eax
  int v39; // r14d
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // r9
  unsigned __int8 v44; // al
  _DWORD *v45; // r8
  _DWORD *v46; // rcx
  __int64 v47; // r15
  unsigned int v48; // r14d
  unsigned __int64 updated; // rbx
  unsigned int v50; // r10d
  __int64 v51; // rax
  unsigned int v52; // r11d
  __int64 v53; // r8
  int v54; // r9d
  int v55; // ecx
  __int64 v56; // rax
  int v57; // r10d
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned int v61; // ebx
  __int64 v62; // r8
  unsigned int v63; // esi
  __int64 v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // r14
  unsigned __int64 v67; // rax
  unsigned int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rsi
  unsigned __int8 v71; // al
  _DWORD *v72; // rax
  int v73; // [rsp+40h] [rbp-99h]
  unsigned int v74; // [rsp+44h] [rbp-95h]
  unsigned int v75; // [rsp+48h] [rbp-91h]
  int v76; // [rsp+4Ch] [rbp-8Dh]
  unsigned int v77; // [rsp+50h] [rbp-89h]
  __int64 v78; // [rsp+58h] [rbp-81h]
  void *PoolWithTag; // [rsp+60h] [rbp-79h]
  _QWORD *v80; // [rsp+68h] [rbp-71h]
  __int64 v81; // [rsp+70h] [rbp-69h]
  __int64 v82; // [rsp+78h] [rbp-61h] BYREF
  int v83; // [rsp+80h] [rbp-59h]
  int v84; // [rsp+84h] [rbp-55h]
  __int64 UnbiasedInterruptTime; // [rsp+88h] [rbp-51h]
  char v86[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v87; // [rsp+98h] [rbp-41h]
  __int64 v88; // [rsp+A0h] [rbp-39h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-31h]
  _BYTE v90[16]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD *v91; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v92; // [rsp+C8h] [rbp-11h]
  __int64 v93; // [rsp+D0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp+Fh] BYREF
  char v96; // [rsp+148h] [rbp+6Fh]
  unsigned int v97; // [rsp+148h] [rbp+6Fh]
  unsigned int v98; // [rsp+150h] [rbp+77h]
  unsigned int v99; // [rsp+158h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 248) >> 12;
  v88 = a1 + 208;
  v5 = *(_QWORD *)(v1 + 256);
  v77 = v4;
  v6 = *(unsigned int *)(v5 + 1076);
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v4);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1076);
    return result;
  }
  v8 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1060) + 6304);
  v78 = v8;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v91 = 0LL;
  PoolWithTag = 0LL;
  *(_DWORD *)(v3 + 44) = 1;
  v9 = 17;
  v76 = 0;
  v10 = 0LL;
  v74 = 0;
  v99 = *(_DWORD *)(v8 + 120);
  v96 = 17;
  v73 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v12 = 0;
  v13 = (_QWORD *)(v2 + 48);
  v15 = v14;
  v87 = v2 + 48;
LABEL_6:
  v80 = v13;
  v98 = v12;
  while ( v12 < v11 )
  {
    v16 = v15;
    v81 = *v13;
    v75 = v15;
    if ( *v13 == qword_1403276C8 || !*(_QWORD *)(v8 + 24) )
      goto LABEL_61;
    if ( v91 != *(_DWORD **)(v8 + 112) )
    {
      if ( v91 )
      {
        v17 = MiDerefPageFileSpaceBitmaps(v8, &v91, v15);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      MiRefPageFileSpaceBitmaps(v8, (__int64)&v91);
      v15 = 1;
    }
    v18 = v99;
    v19 = v99 < v92 ? v99 : 0;
    v20 = v92 - 1;
    if ( (v93 & 4) != 0 )
    {
      v21 = v15;
      v22 = 32;
    }
    else
    {
      v21 = 0LL;
      v22 = 0;
    }
    v23 = v93 - 4 * v21;
    while ( 1 )
    {
      v24 = v22 + v20;
      v25 = v22 + v19;
      if ( v20 - v19 != -1 )
        break;
      v26 = -1;
LABEL_28:
      if ( !v19 )
        goto LABEL_34;
      v30 = v18 + 1;
      if ( v18 + 1 > v92 )
        v30 = v92;
      v20 = v30 - 1;
      v19 = 0;
    }
    v27 = (__int64 *)(v23 + 8 * ((unsigned __int64)v25 >> 6));
    for ( i = *v27 | ((1LL << (v25 & 0x3F)) - 1); i == -1; i = *v27 )
    {
      if ( (unsigned __int64)++v27 > v23 + 8 * ((unsigned __int64)v24 >> 6) )
        goto LABEL_32;
    }
    _BitScanForward64(&v29, ~i);
    v26 = v29 + ((unsigned int)(((__int64)v27 - v23) >> 3) << 6);
    v83 = v29;
    if ( v26 > v24 )
    {
LABEL_32:
      v26 = -1;
LABEL_27:
      v18 = v99;
      goto LABEL_28;
    }
    if ( v26 == -1 )
      goto LABEL_27;
    v26 -= v22;
LABEL_34:
    v10 = 48 * v81 - 0x58000000000LL;
    v31 = MiLockPageInline(v10);
    v15 = 1;
    v9 = v31;
    v96 = v31;
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_60;
    v82 = 0LL;
    v32 = MiStoreCheckCandidatePage(v10, v26, (unsigned int)v86, (unsigned int)v90, (__int64)&v82);
    if ( v32 < 0 )
    {
      MiStoreLogNotCandidate(v32);
LABEL_59:
      v15 = 1;
LABEL_60:
      v16 = v75;
      v12 = v98;
LABEL_61:
      if ( v9 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v9);
        v96 = 17;
      }
      if ( v16 )
        goto LABEL_64;
      goto LABEL_65;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    v96 = 17;
    if ( !PoolWithTag )
    {
      PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1152));
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
        if ( !PoolWithTag )
        {
          v76 = 1;
          goto LABEL_41;
        }
      }
    }
    v33 = 1;
    if ( (unsigned __int64)(*(_QWORD *)(v78 + 24) - 1LL) >= 8 )
      v34 = 8;
    else
      v34 = *(_DWORD *)(v78 + 24) - 1;
    v35 = v73;
    if ( v73 )
    {
      if ( *(_QWORD *)(v5 + 6464) >= 0x120uLL )
      {
        v36 = KiQueryUnbiasedInterruptTime();
        v35 = (unsigned __int64)(v36 - UnbiasedInterruptTime) < 0x2FAF080 ? v37 : 0;
        v73 = v35;
      }
      else
      {
        v35 = 0;
        v73 = 0;
        if ( v34 >= 3 )
          v34 = 3;
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(v3 + 44), v33);
    v38 = MiStoreWriteIssue(PoolWithTag, v10, v86, v90, PoolWithTag, v82, v3, v35);
    if ( v38 >= 0 )
    {
      v75 = 0;
      PoolWithTag = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v78 + 232), &LockHandle);
      v99 = v26 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v78 + 112) + 16LL), v26);
      --*(_QWORD *)(v78 + 24);
      *(_DWORD *)(v78 + 120) = v26 + 1;
      MiUpdatePagefilePeakUsage(v78);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v40 = (unsigned __int8)MiLockPageInline(v10);
      v41 = MiCapturePageFileInfoInline((_QWORD *)(v10 + 16), 1, 1);
      *(_QWORD *)(v10 + 16) &= ~2uLL;
      v42 = v41;
      MiUpdatePfnBackingStore(v10, v78, v26, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v40);
      v9 = 17;
      v96 = 17;
      MiReleasePageFileInfo((struct _KEVENT *)v5, v42, 2);
      v3 = a1;
      goto LABEL_59;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
    if ( v38 != -1073740682 )
    {
      v39 = v76;
      if ( v38 == -1073741670 )
        v39 = 1;
      v76 = v39;
LABEL_57:
      MiStoreLogWriteIssueFailure(v38, (unsigned int)v90, v26, v74, v73, ++*(_DWORD *)(v5 + 1080));
LABEL_41:
      v12 = v98;
LABEL_64:
      v15 = 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1176) + 8LL), v12);
LABEL_65:
      v12 += v15;
      v11 = v77;
      v13 = v80 + 1;
      v74 = 0;
      v9 = v96;
      v8 = v78;
      goto LABEL_6;
    }
    v99 = v26 + 1;
    if ( v74 >= v34 )
      goto LABEL_57;
    MiStoreLogWriteIssueRetry((unsigned int)v90, v26, v74, v73, *(_DWORD *)(v5 + 1080));
    v11 = v77;
    v15 = 1;
    ++v74;
    v9 = 17;
    v8 = v78;
    v12 = v98;
    v13 = v80;
  }
  if ( v76 )
    *(_DWORD *)(v5 + 1076) = 32;
  v43 = *(_QWORD *)(v5 + 1176);
  if ( v11 - 1 >= *(_DWORD *)v43 )
    goto LABEL_74;
  if ( v11 > v15 )
  {
    v45 = *(_DWORD **)(v43 + 8);
    v46 = &v45[(unsigned __int64)(v11 - 1) >> 5];
    if ( v45 == v46 )
    {
      if ( ((0xFFFFFFFF >> (32 - v11)) & *v45) != 0xFFFFFFFF >> (32 - v11) )
        goto LABEL_74;
    }
    else
    {
      do
      {
        if ( *v45 != -1 )
          goto LABEL_74;
        ++v45;
      }
      while ( v45 != v46 );
      if ( ((0xFFFFFFFF >> -(char)v11) & *v45) != 0xFFFFFFFF >> -(char)v11 )
      {
        v44 = 0;
LABEL_81:
        if ( v44 )
          goto LABEL_82;
        goto LABEL_74;
      }
    }
LABEL_82:
    RtlClearBits(*(PRTL_BITMAP *)(v5 + 1176), 0, v11);
    *(_DWORD *)(v3 + 44) = 0;
    v61 = -1073740759;
    goto LABEL_103;
  }
  if ( v11 == v15 )
  {
    v44 = _bittest(*(const signed __int32 **)(v43 + 8), 0);
    goto LABEL_81;
  }
LABEL_74:
  v47 = *(_QWORD *)(v3 + 176) >> 12;
  v48 = -1;
  updated = MiTransferSoftwarePte(0LL, *(_QWORD *)(v3 + 144), (unsigned int)v47, v15);
  while ( 2 )
  {
    v51 = *(_QWORD *)(v5 + 1176);
    v97 = v48 + 1;
    v52 = *(_DWORD *)v51;
    v53 = *(_QWORD *)(v51 + 8);
    v54 = v48 + 1 < *(_DWORD *)v51 ? v48 + 1 : 0;
    v55 = *(_DWORD *)v51 - 1;
    if ( (v53 & 4) != 0 )
    {
      v56 = v50;
      v57 = 32;
    }
    else
    {
      v56 = 0LL;
      v57 = 0;
    }
    v62 = v53 - 4 * v56;
    while ( 1 )
    {
      v63 = v57 + v55;
      v64 = 1LL;
      v65 = (unsigned int)(v57 + v54);
      if ( v63 - (_DWORD)v65 == -1 )
        goto LABEL_86;
      v64 = (unsigned int)v65;
      LOBYTE(v64) = (v57 + v54) & 0x3F;
      v66 = (_QWORD *)(v62 + 8 * ((unsigned __int64)(unsigned int)v65 >> 6));
      v65 = ~*v66 | ((1LL << v64) - 1);
      if ( v65 == -1 )
      {
        while ( (unsigned __int64)++v66 <= v62 + 8 * ((unsigned __int64)v63 >> 6) )
        {
          v65 = ~*v66;
          if ( *v66 )
            goto LABEL_90;
        }
LABEL_86:
        v48 = -1;
        goto LABEL_92;
      }
LABEL_90:
      v65 = ~v65;
      _BitScanForward64(&v67, v65);
      v48 = v67 + ((unsigned int)(((__int64)v66 - v62) >> 3) << 6);
      v84 = v67;
      if ( v48 > v63 )
        goto LABEL_86;
      if ( v48 != -1 )
        break;
LABEL_92:
      if ( !v54 )
        goto LABEL_97;
      v68 = v97 + 1;
      if ( v97 + 1 > v52 )
        v68 = v52;
      v55 = v68 - 1;
      v54 = 0;
    }
    v48 -= v57;
LABEL_97:
    if ( v48 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1176) + 8LL), v48);
      v69 = *(_QWORD *)(v87 + 8LL * v48);
      if ( v69 == qword_1403276C8 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v48 + (unsigned int)v47);
        MiReleasePageFileInfo((struct _KEVENT *)v5, updated, 2);
      }
      else
      {
        v70 = 48 * v69 - 0x58000000000LL;
        v71 = MiLockPageInline(v70);
        *(_BYTE *)(v70 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v71);
      }
      v50 = 1;
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v64, v65, v88, v77);
  *(_DWORD *)(a1 + 40) |= 0x20u;
  MiStoreModifiedWriteDereference();
  v8 = v78;
  v61 = 259;
LABEL_103:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v58, v59, v60);
  if ( PoolWithTag )
    MiStoreFreeWriteSupport(PoolWithTag, v5);
  if ( v91 )
  {
    v72 = MiDerefPageFileSpaceBitmaps(v8, &v91, 0);
    if ( v72 )
      ExFreePoolWithTag(v72, 0);
  }
  return v61;
}
