/*
 * XREFs of MiGatherMappedPages @ 0x1400E37E8
 * Callers:
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 * Callees:
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     CcNotifyOfMappedWrite @ 0x1400E3EC4 (CcNotifyOfMappedWrite.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned int v11; // r15d
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *PrototypePteDirect; // r12
  __int64 v15; // r13
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 DemandZeroPte; // rax
  unsigned int v23; // edx
  volatile signed __int32 *v24; // rsi
  unsigned int v25; // r15d
  signed __int32 i; // edx
  _DWORD *v28; // rcx
  struct _FILE_OBJECT *v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // rdi
  struct _ERESOURCE **v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // r12d
  int v39; // edi
  int v40; // eax
  int v41; // ecx
  unsigned __int64 v42; // rax
  int v43; // eax
  int v44; // edx
  unsigned __int8 v45; // bl
  unsigned __int8 v46; // bl
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  unsigned __int64 v49; // [rsp+60h] [rbp-48h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int8 v53; // [rsp+C8h] [rbp+20h]
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // [rsp+C8h] [rbp+20h]

  v4 = a2;
  if ( a2 >= 0x10 )
  {
    v4 = 0;
    v7 = (_QWORD *)(a1 + 2768);
    do
    {
      if ( *v7 != 0xFFFFFFFFFLL )
        break;
      ++v4;
      v7 += 5;
    }
    while ( v4 < 0x10 );
    if ( v4 == 16 )
      return 0LL;
  }
  if ( *(_DWORD *)(a1 + 912) || *(_BYTE *)(a1 + 916) == 1 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  v8 = *(_QWORD *)(a1 + 40LL * v4 + 2768);
  v48 = 5LL * v4;
  if ( v8 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    v53 = CurrentIrql;
    __writecr8(2uLL);
    v11 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      CurrentIrql = v53;
    }
    if ( v8 == *(_QWORD *)(a1 + 8 * v48 + 2768) )
      break;
    v12 = CurrentIrql;
LABEL_58:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    v8 = *(_QWORD *)(a1 + 8 * v48 + 2768);
    if ( v8 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  v13 = (__int64 *)(v9 + 16);
  PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16), 1LL, 0x7FFFFFFFFFFFFFFFLL, a4);
  v15 = *PrototypePteDirect;
  v16 = *(_DWORD *)(*PrototypePteDirect + 56);
  if ( (v16 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(48 * v8 - 0x58000000000LL, 0LL);
    v18 = *v13;
    if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(v17, v18)
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)v13 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v18 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
    }
    v47 = v18;
    v21 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v47);
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9, 12LL);
      if ( (MiFlags & 0x30000) != 0 && (v21 & 2) != 0 && (*(_DWORD *)(v15 + 92) & 0xC000000) != 0 )
        MiMarkPfnVerified(v9, 6);
    }
    DemandZeroPte = MiMakeDemandZeroPte(v21);
    v47 = DemandZeroPte;
    *v13 = DemandZeroPte;
    if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8 )
      MiWritePteShadow(v9 + 16, DemandZeroPte);
    MiDereferenceControlAreaPfn(v15, 0LL, 3LL);
    v23 = 8;
    goto LABEL_57;
  }
  if ( (v16 & 8) != 0 )
  {
LABEL_56:
    MiUnlinkPageFromList(v9, 0LL);
    v23 = 16;
LABEL_57:
    MiInsertPageInList(v9, v23);
    v12 = v53;
    goto LABEL_58;
  }
  v24 = (volatile signed __int32 *)(v15 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15 + 72);
  }
  else
  {
    v25 = 0;
    if ( _interlockedbittestandset(v24, 0x1Fu) )
      v25 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v15 + 72));
    for ( i = *v24; (*v24 & 0xBFFFFFFF) != 0x80000000; i = *v24 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v24, i | 0x40000000, i);
      if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v25);
    }
  }
  if ( (*(_DWORD *)(v15 + 56) & 8) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15 + 72, retaddr);
    else
      *v24 = 0;
    goto LABEL_56;
  }
  v28 = (_DWORD *)(v15 + 72);
  ++*(_DWORD *)(v15 + 76);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
  else
    *v28 = 0;
  MiReferencePageForModifiedWrite(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v53);
  v29 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v15);
  SectionObjectPointer = v29->SectionObjectPointer;
  if ( *(_DWORD *)(a1 + 912) )
    v30 = 0;
  else
    v30 = CcNotifyOfMappedWrite(v29->SectionObjectPointer, 0LL, 0LL);
  v31 = MiBuildMappedCluster(v9, a3 + 208, v30);
  v32 = v31;
  if ( v31 != a3 + 208 )
    *(_QWORD *)(a3 + 200) = v31;
  *(_QWORD *)(a3 + 160) = v15;
  v33 = MiStartingOffset(
          PrototypePteDirect,
          *(_QWORD *)(48LL * *(_QWORD *)(v31 + 48) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
          0xFFFFFFFF);
  v50 = v33;
  v34 = (struct _ERESOURCE **)(a3 + 168);
  v35 = *(unsigned int *)(v32 + 40);
  *(_DWORD *)(a3 + 136) = v35;
  v48 = v35 >> 12;
  *(_DWORD *)(a3 + 140) = (v35 >> 12) - 1;
  v36 = v33 + *(unsigned int *)(v32 + 40);
  *(_QWORD *)(a3 + 168) = 0LL;
  v49 = v36;
  if ( (v29->DeviceObject->Characteristics & 0x10) != 0 )
    *(_DWORD *)(a3 + 40) |= 2u;
  else
    *(_DWORD *)(a3 + 40) &= ~2u;
  v37 = *(_DWORD *)(v15 + 56);
  v38 = 0;
  if ( (v37 & 4) != 0 )
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v15, (unsigned __int64)v29);
    v39 = -1073741740;
    v38 = 1;
    goto LABEL_93;
  }
  if ( (v37 & 0x10) != 0 )
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v15, (unsigned __int64)v29);
    v39 = -1073741672;
    v38 = 1;
    goto LABEL_93;
  }
  *(_QWORD *)(a3 + 152) = v29;
  if ( (int)FsRtlAcquireFileForModWriteEx(v29) < 0 )
  {
    v39 = -1073741740;
    MI_DEREFERENCE_CONTROL_AREA_FILE(v15, (unsigned __int64)v29);
    *v34 = 0LL;
  }
  else
  {
    v40 = CcNotifyOfMappedWrite(SectionObjectPointer, v33, *(unsigned int *)(v32 + 40));
    if ( !v40 )
    {
      FsRtlReleaseFileForModWrite(v29, *v34);
      MI_DEREFERENCE_CONTROL_AREA_FILE(v15, (unsigned __int64)v29);
      *v34 = 0LL;
      v38 = 1;
      v39 = -1073741740;
      goto LABEL_93;
    }
    if ( v40 == 1 )
      *v34 = (struct _ERESOURCE *)((unsigned __int64)*v34 | 1);
    *(_QWORD *)(a3 + 176) = v33;
    v41 = *(_DWORD *)(a1 + 624);
    v42 = *(_QWORD *)(a1 + 5504);
    if ( v41 )
    {
      if ( v42 < 0x400 )
      {
        v43 = v41 - 1;
        goto LABEL_83;
      }
      *(_DWORD *)(a1 + 624) = 0;
LABEL_85:
      v44 = 2;
    }
    else
    {
      if ( v42 >= 0x100 )
        goto LABEL_85;
      v43 = v42 < 0x80 ? 32 : 8;
LABEL_83:
      *(_DWORD *)(a1 + 624) = v43;
      v44 = 4;
    }
    __incgsdword(0x2E34u);
    __addgsdword(0x2E30u, v48);
    if ( (*(_DWORD *)(v15 + 56) & 0x40000000) != 0 )
    {
      MiFlushFileOnlyMdl(v29, v32, 0LL, a3 + 16);
      v45 = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, (int *)(a3 + 16), 0);
      __writecr8(v45);
      return 1LL;
    }
    v39 = IoAsynchronousPageWrite(
            (_DWORD)v29,
            v32,
            (unsigned int)&v50,
            (unsigned int)MiWriteComplete,
            a3,
            v44,
            0,
            0,
            a3 + 16,
            a3 + 32);
  }
  if ( (v39 & 0xC0000000) == 0xC0000000 )
  {
LABEL_93:
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 16) = v39;
    v46 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, (int *)(a3 + 16), v38);
    __writecr8(v46);
  }
  return 1LL;
}
