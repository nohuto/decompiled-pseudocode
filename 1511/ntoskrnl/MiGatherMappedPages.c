/*
 * XREFs of MiGatherMappedPages @ 0x14002EDB4
 * Callers:
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiFlushFileOnlyMdl @ 0x1401E35D4 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 v10; // r13
  __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  volatile LONG *v19; // rcx
  struct _FILE_OBJECT *v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdi
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rcx
  int v28; // eax
  int v29; // edi
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  int v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v41; // bl
  __int64 v42; // [rsp+50h] [rbp-58h]
  unsigned __int64 v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+68h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+20h]
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // [rsp+C8h] [rbp+20h]

  v5 = a2;
  if ( a2 >= 0x10 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a1 + 2896);
    do
    {
      if ( *v6 != 0xFFFFFFFFFLL )
        break;
      ++v5;
      v6 += 5;
    }
    while ( v5 < 0x10 );
    if ( v5 == 16 )
      return 0LL;
  }
  if ( *(_DWORD *)(a1 + 920) || *(_BYTE *)(a1 + 952) == 1 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  v7 = 5LL * v5;
  v8 = *(_QWORD *)(a1 + 40LL * v5 + 2896);
  v45 = v7;
  if ( v8 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    if ( v8 == *(_QWORD *)(a1 + 8 * v45 + 2896) )
      break;
LABEL_27:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    v8 = *(_QWORD *)(a1 + 8 * v45 + 2896);
    if ( v8 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  v42 = *(__int64 *)(v9 + 16) >> 16;
  v11 = *(_QWORD *)v42;
  v12 = *(_DWORD *)(*(_QWORD *)v42 + 56LL);
  if ( (v12 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(48 * v8 - 0x58000000000LL);
    v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9 + 16) >> 5) & 0x1F;
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9, 28LL);
      if ( (MiFlags & 0x10000) != 0 && (v13 & 2) != 0 && (*(_DWORD *)(v11 + 92) & 0xC000000) != 0 )
      {
        v14 = 6LL;
        if ( (MiFlags & 0x20000) == 0 )
          v14 = 38LL;
        MiMarkPfnVerified(v9, v14);
      }
    }
    v15 = 32 * (v13 & 0x1F);
    *(_QWORD *)(v9 + 16) = v15;
    if ( (unsigned int)MiPteInShadowRange(v9 + 16) )
      MiWritePteShadow(v9 + 16, v15);
    MiDereferenceControlAreaPfn(v11, 0LL, 3LL);
    v18 = 8LL;
    goto LABEL_26;
  }
  if ( (v12 & 8) != 0 )
  {
LABEL_25:
    MiUnlinkPageFromList(48 * v8 - 0x58000000000LL);
    v18 = 16LL;
LABEL_26:
    MiInsertPageInList(v9, v18, v16, v17);
    goto LABEL_27;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v19 = (volatile LONG *)(v11 + 72);
  if ( (*(_DWORD *)(v11 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v19);
    goto LABEL_25;
  }
  ++*(_DWORD *)(v11 + 76);
  ExReleaseSpinLockExclusiveFromDpcLevel(v19);
  MiReferencePageForModifiedWrite(48 * v8 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  v21 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v11);
  SectionObjectPointer = v21->SectionObjectPointer;
  if ( *(_DWORD *)(a1 + 920) )
    v22 = 0;
  else
    v22 = CcNotifyOfMappedWrite(v21->SectionObjectPointer, 0LL, 0LL);
  v23 = MiBuildMappedCluster(v9, a3 + 208, v22);
  v24 = v23;
  if ( v23 != a3 + 208 )
    *(_QWORD *)(a3 + 200) = v23;
  *(_QWORD *)(a3 + 160) = v11;
  v25 = MiStartingOffset(
          v42,
          *(_QWORD *)(48LL * *(_QWORD *)(v23 + 48) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v44 = v25;
  v26 = (_QWORD *)(a3 + 168);
  v27 = *(unsigned int *)(v24 + 40);
  *(_DWORD *)(a3 + 136) = v27;
  v43 = v27 >> 12;
  *(_DWORD *)(a3 + 140) = (v27 >> 12) - 1;
  *(_QWORD *)(a3 + 168) = 0LL;
  if ( (v21->DeviceObject->Characteristics & 0x10) != 0 )
    *(_DWORD *)(a3 + 40) |= 2u;
  else
    *(_DWORD *)(a3 + 40) &= ~2u;
  v28 = *(_DWORD *)(v11 + 56);
  if ( (v28 & 4) != 0 )
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v11, v21);
    v29 = -1073741740;
    v30 = 1;
    goto LABEL_61;
  }
  if ( (v28 & 0x10) != 0 )
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v11, v21);
    v29 = -1073741672;
    v30 = 1;
    goto LABEL_61;
  }
  *(_QWORD *)(a3 + 152) = v21;
  if ( (int)FsRtlAcquireFileForModWriteEx(v21) < 0 )
  {
    v29 = -1073741740;
    MI_DEREFERENCE_CONTROL_AREA_FILE(v11, v21);
    *v26 = 0LL;
  }
  else
  {
    v31 = CcNotifyOfMappedWrite(SectionObjectPointer, v25, *(unsigned int *)(v24 + 40));
    if ( !v31 )
    {
      FsRtlReleaseFileForModWrite(v21);
      MI_DEREFERENCE_CONTROL_AREA_FILE(v11, v21);
      *v26 = 0LL;
      v30 = 1;
      v29 = -1073741740;
      goto LABEL_61;
    }
    if ( v31 == 1 )
      *v26 |= 1uLL;
    *(_QWORD *)(a3 + 176) = v25;
    v33 = *(_DWORD *)(a1 + 608);
    v34 = *(_QWORD *)(a1 + 5888);
    if ( v33 )
    {
      if ( v34 < 0x420 )
      {
        v35 = v33 - 1;
        goto LABEL_49;
      }
      *(_DWORD *)(a1 + 608) = 0;
LABEL_51:
      v36 = 2LL;
    }
    else
    {
      if ( v34 >= 0x120 )
        goto LABEL_51;
      v35 = v34 < 0xA0 ? 32 : 8;
LABEL_49:
      *(_DWORD *)(a1 + 608) = v35;
      v36 = 4LL;
    }
    __incgsdword(0x2E34u);
    __addgsdword(0x2E30u, v43);
    if ( (unsigned int)MiSubsectionUsingExtents(v42, v36, v32) )
    {
      MiFlushFileOnlyMdl(v38, v24, v39, a3 + 16);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, a3 + 16, 0LL);
      __writecr8(CurrentIrql);
      return 1LL;
    }
    v29 = IoAsynchronousPageWrite(
            (_DWORD)v21,
            v24,
            (unsigned int)&v44,
            (unsigned int)MiWriteComplete,
            a3,
            v37,
            0,
            0,
            a3 + 16,
            a3 + 32);
  }
  if ( (v29 & 0xC0000000) == 0xC0000000 )
  {
    v30 = 0;
LABEL_61:
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 16) = v29;
    v41 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, a3 + 16, v30);
    __writecr8(v41);
  }
  return 1LL;
}
