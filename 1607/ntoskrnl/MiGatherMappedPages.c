/*
 * XREFs of MiGatherMappedPages @ 0x14001FD70
 * Callers:
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED4F4 (MiFlushFileOnlyMdl.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 v10; // r12
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // r13
  __int64 v23; // r13
  struct _FILE_OBJECT *v24; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  int v26; // eax
  char *v27; // r12
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r12
  int v32; // eax
  int v33; // edi
  unsigned int v34; // eax
  int v35; // eax
  int v36; // ecx
  unsigned __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v44; // di
  __int64 v45; // [rsp+60h] [rbp-68h] BYREF
  __int64 PrototypePteDirect; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  PSECTION_OBJECT_POINTERS v48; // [rsp+78h] [rbp-50h]
  unsigned __int64 v49; // [rsp+80h] [rbp-48h]
  __int64 v50; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v51; // [rsp+D8h] [rbp+10h]
  char *v52; // [rsp+E8h] [rbp+20h]

  v5 = a2;
  if ( a2 >= 0x10 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a1 + 3024);
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
  if ( *(_DWORD *)(a1 + 912) || *(_BYTE *)(a1 + 944) == 1 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  v7 = 5LL * v5;
  v8 = *(_QWORD *)(a1 + 40LL * v5 + 3024);
  if ( v8 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    if ( v8 == *(_QWORD *)(a1 + 8 * v7 + 3024) )
      break;
LABEL_27:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 3024);
    if ( v8 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16));
  v11 = *(_QWORD *)PrototypePteDirect;
  v12 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
  if ( (v12 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(v9);
    v45 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v51 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v45);
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9, 0x1Cu);
      if ( (MiFlags & 0x4000) != 0 && (v51 & 2) != 0 && (*(_DWORD *)(v11 + 92) & 0xC000000) != 0 )
      {
        v16 = 6LL;
        if ( (MiFlags & 0x8000) == 0 )
          v16 = 38LL;
        MiMarkPfnVerified(v9, v16);
      }
    }
    DemandZeroPte = MiMakeDemandZeroPte(v51, v13, v14, v15);
    v45 = DemandZeroPte;
    *(_QWORD *)(v9 + 16) = DemandZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v9 + 16, DemandZeroPte) )
      MiWritePteShadow(v19, v18);
    MiDereferenceControlAreaPfnList(v11, 0LL, 1LL);
    v20 = 8LL;
    goto LABEL_26;
  }
  if ( (v12 & 8) != 0 )
  {
LABEL_25:
    MiUnlinkPageFromList(v9);
    v20 = 16LL;
LABEL_26:
    MiInsertPageInList(v9, v20);
    goto LABEL_27;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  if ( (*(_DWORD *)(v11 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    goto LABEL_25;
  }
  v22 = *(_QWORD *)(v11 + 120);
  ++*(_DWORD *)(v11 + 76);
  v23 = 8 * v22;
  if ( v23 && _InterlockedIncrement64((volatile signed __int64 *)(v23 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  MiReferencePageForModifiedWrite(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  v24 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v11);
  SectionObjectPointer = v24->SectionObjectPointer;
  v48 = SectionObjectPointer;
  if ( *(_DWORD *)(a1 + 912) )
    v26 = 0;
  else
    v26 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0LL);
  v27 = MiBuildMappedCluster(v9, (char *)(a3 + 208), v26);
  v52 = v27;
  if ( v27 != (char *)(a3 + 208) )
    *(_QWORD *)(a3 + 200) = v27;
  *(_QWORD *)(a3 + 160) = v11;
  v28 = MiStartingOffset(
          PrototypePteDirect,
          *(_QWORD *)(48LL * *((_QWORD *)v27 + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v50 = v28;
  v29 = *((unsigned int *)v27 + 10);
  *(_DWORD *)(a3 + 136) = v29;
  v49 = v29 >> 12;
  *(_DWORD *)(a3 + 140) = (v29 >> 12) - 1;
  v30 = *((unsigned int *)v27 + 10);
  v31 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v47 = v28 + v30;
  if ( (v24->DeviceObject->Characteristics & 0x10) != 0 )
    *(_DWORD *)(a3 + 40) |= 2u;
  else
    *(_DWORD *)(a3 + 40) &= ~2u;
  v32 = *(_DWORD *)(v11 + 56);
  if ( (v32 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v11, v24);
    v33 = -1073741740;
    v34 = 1;
    goto LABEL_63;
  }
  if ( (v32 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v11, v24);
    v33 = -1073741672;
    v34 = 1;
    goto LABEL_63;
  }
  *(_QWORD *)(a3 + 152) = v24;
  if ( (int)FsRtlAcquireFileForModWriteEx(v24) < 0 )
  {
    v33 = -1073741740;
    MiDereferenceControlAreaFile(v11, v24);
    *v31 = 0LL;
  }
  else
  {
    v35 = CcNotifyOfMappedWrite(v48, v28, *((unsigned int *)v52 + 10));
    if ( !v35 )
    {
      FsRtlReleaseFileForModWrite(v24);
      MiDereferenceControlAreaFile(v11, v24);
      v34 = 1;
      *v31 = 0LL;
      v33 = -1073741740;
      goto LABEL_63;
    }
    if ( v35 == 1 )
      *v31 |= 1uLL;
    *(_QWORD *)(a3 + 176) = v28;
    v36 = *(_DWORD *)(a1 + 600);
    v37 = *(_QWORD *)(a1 + 6464);
    if ( v36 )
    {
      if ( v37 < 0x420 )
      {
        v38 = v36 - 1;
        goto LABEL_52;
      }
      *(_DWORD *)(a1 + 600) = 0;
LABEL_54:
      v39 = 2LL;
    }
    else
    {
      if ( v37 >= 0x120 )
        goto LABEL_54;
      v38 = v37 < 0xA0 ? 32 : 8;
LABEL_52:
      *(_DWORD *)(a1 + 600) = v38;
      v39 = 4LL;
    }
    __incgsdword(0x2E34u);
    __addgsdword(0x2E30u, v49);
    if ( (unsigned int)MiSubsectionUsingExtents(PrototypePteDirect, v39) )
    {
      MiFlushFileOnlyMdl(v41, v52, v42, a3 + 16);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, a3 + 16, 0LL);
      __writecr8(CurrentIrql);
      goto LABEL_64;
    }
    v33 = IoAsynchronousPageWrite(
            (_DWORD)v24,
            (_DWORD)v52,
            (unsigned int)&v50,
            (unsigned int)MiWriteComplete,
            a3,
            v40,
            0,
            0,
            v23,
            a3 + 16,
            a3 + 32);
  }
  if ( (v33 & 0xC0000000) == 0xC0000000 )
  {
    v34 = 0;
LABEL_63:
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 16) = v33;
    v44 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, a3 + 16, v34);
    __writecr8(v44);
  }
LABEL_64:
  if ( v23 )
    IoDiskIoAttributionDereference(v23);
  return 1LL;
}
