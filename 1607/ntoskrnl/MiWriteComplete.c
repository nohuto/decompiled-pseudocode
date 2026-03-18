/*
 * XREFs of MiWriteComplete @ 0x14008E9E0
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x140119444 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1401246C0 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140026CE8 (MiReleaseControlAreaWaiters.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiFreeModWriterEntry @ 0x14008EF68 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008EF9C (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x14008F084 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x14008F0EC (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x14008F178 (MiIsRetryIoStatus.c)
 *     FsRtlReleaseFileForModWrite @ 0x14008F1B4 (FsRtlReleaseFileForModWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14008FAB8 (CcNotifyOfMappedWriteComplete.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x140116DD4 (MI_PAGEFILE_WRITE.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x1401DF37C (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x1401E2EB0 (MiRetardMdl.c)
 *     MiGetPteTimeStamp @ 0x1401F269C (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401F274C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401F299C (MiTransferSoftwarePte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

int __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  char v4; // si
  unsigned int v5; // ebx
  int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // r13
  ULONG_PTR v11; // r15
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r12
  struct _FILE_OBJECT *v15; // rax
  unsigned int v16; // r12d
  int v17; // esi
  __int64 PageFilePte; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 updated; // rdi
  struct _MDL *v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 PteTimeStamp; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  struct _KEVENT *v33; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _QWORD *v35; // rax
  void *v36; // rcx
  _QWORD *v37; // rcx
  int v39; // [rsp+30h] [rbp-78h]
  _DWORD *v40; // [rsp+38h] [rbp-70h]
  struct _MDL *v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v45; // [rsp+B0h] [rbp+8h]
  int v46; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v48; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    v3 = (struct _MDL *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 192);
  v46 = v8;
  if ( (v3->MdlFlags & 0x200) != 0 )
    MiRetardMdl(v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *a2;
  v39 = v11;
  v43 = v10;
  if ( v10 )
  {
    v40 = (_DWORD *)(v9 + 912);
  }
  else
  {
    v42 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v42, 5, 0, v11);
    v40 = (_DWORD *)(v9 + 908);
  }
  v12 = (v8 & 0xFFF) == 0;
  v13 = v8;
  v41 = v3 + 1;
  v14 = *(_QWORD *)(a1 + 168);
  v44 = (unsigned __int64)&v3[1] + 8 * !v12 + 8 * (v13 >> 12);
  if ( v14 )
  {
    v15 = *(struct _FILE_OBJECT **)(a1 + 152);
    v48 = (unsigned __int64)v15;
    if ( (v14 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(
        v15->SectionObjectPointer,
        *(_QWORD *)(a1 + 176),
        (unsigned int)v46,
        (unsigned int)v11);
      v15 = (struct _FILE_OBJECT *)v48;
    }
    FsRtlReleaseFileForModWrite(v15);
    MiDereferenceControlAreaFile(v10, v48);
    if ( (v11 & 0x80000000) != 0LL )
      goto LABEL_15;
  }
  if ( (v11 & 0x80000000) != 0LL )
  {
LABEL_15:
    v16 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
    if ( !(unsigned int)MmIsWriteErrorFatal(v10 != 0, v16, (unsigned int)v11) )
      goto LABEL_22;
    if ( !v10 )
      KeBugCheckEx(0x7Au, 0x20uLL, v11, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
      goto LABEL_23;
    if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v11, v46) && v16 && v44 > (unsigned __int64)&v3[1].Size )
LABEL_22:
      v5 = 1;
    else
      v4 = 1;
LABEL_23:
    if ( v10 )
      *(_DWORD *)(v9 + 592) = v11;
    else
      *(_DWORD *)(v9 + 588) = v11;
  }
  v17 = v4 & 1;
  if ( v17 )
    MiSetDeleteOnClose(v10, 1LL);
  PageFilePte = MiMakePageFilePte(0LL);
  v21 = *(_QWORD *)(a1 + 144);
  updated = PageFilePte;
  if ( v21 )
    updated = MiTransferSoftwarePte(PageFilePte, v21, (unsigned int)(*(_QWORD *)(a1 + 176) >> 12), (unsigned int)v19);
  v23 = v41;
  if ( (unsigned __int64)v41 < v44 )
  {
    v24 = v44;
    while ( v23->Next == (struct _MDL *)qword_140327688 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      {
        v25 = updated;
LABEL_48:
        MiReleasePageFileInfo((struct _KEVENT *)v9, v25, 0);
      }
LABEL_49:
      PteTimeStamp = MiGetPteTimeStamp(updated, v21, v19);
      v23 = (struct _MDL *)((char *)v23 + 8);
      updated = MiUpdatePageFileHighInPte(updated, PteTimeStamp + 1);
      if ( (unsigned __int64)v23 >= v24 )
      {
        LODWORD(v11) = v39;
        v10 = v43;
        goto LABEL_51;
      }
    }
    v26 = 48 * (__int64)v23->Next - 0x58000000000LL;
    v45 = MiLockPageInline(v26);
    if ( (v5 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v26 + 34) & 0x10) == 0 || (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
        v5 &= ~2u;
      else
        v5 |= 2u;
    }
    v5 &= ~4u;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 && (v5 & 2) == 0 && (*(_QWORD *)(v26 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( *(_WORD *)(v26 + 32) <= 1u )
      {
        *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 2;
        v5 |= 4u;
      }
      else
      {
        *(_BYTE *)(v26 + 34) |= 0x10u;
        v5 |= 2u;
      }
    }
    v29 = MiWriteCompletePfn(v26, v5, v27, v28);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v45);
    if ( !v29 )
      goto LABEL_49;
    v25 = v29;
    goto LABEL_48;
  }
LABEL_51:
  LODWORD(v31) = *(_DWORD *)(a1 + 140);
  if ( (_DWORD)v31 )
  {
    if ( *(_QWORD *)(a1 + 144) )
      LODWORD(v31) = MiReleaseWriteInProgressCharges(v9, (unsigned int)v31, 0LL, v20);
    else
      LODWORD(v31) = MiReleaseWriteInProgressCharges(v9, (unsigned int)v31, 1LL, v20);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_61;
  if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
    --*(_DWORD *)(v9 + 604);
  v31 = v9 + 816;
  v32 = *(_QWORD **)(v9 + 824);
  if ( *v32 != v9 + 816 )
    __fastfail(3u);
  *(_QWORD *)a1 = v31;
  v33 = (struct _KEVENT *)(v9 + 832);
  *(_QWORD *)(a1 + 8) = v32;
  *v32 = a1;
  *(_QWORD *)(v9 + 824) = a1;
  if ( *(_BYTE *)(v9 + 585) != 1 )
LABEL_61:
    v33 = 0LL;
  if ( v10 )
  {
    if ( v17 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v10);
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v11;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v35 = (_QWORD *)MiDecrementModifiedWriteCount(v10, 0LL);
    if ( v35 )
      MiReleaseControlAreaWaiters(v35);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 536));
    v36 = *(void **)(a1 + 200);
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v31 = v9 + 544;
      v37 = *(_QWORD **)(v9 + 552);
      if ( *v37 != v9 + 544 )
        __fastfail(3u);
      *(_QWORD *)a1 = v31;
      *(_QWORD *)(a1 + 8) = v37;
      *v37 = a1;
      *(_QWORD *)(v9 + 552) = a1;
      if ( *(_BYTE *)(v9 + 584) == 1 )
      {
        *(_BYTE *)(v9 + 584) = 0;
        LODWORD(v31) = KeSignalGate(v9 + 560, 1LL);
      }
    }
    else
    {
      LODWORD(v31) = MiFreeModWriterEntry(a1, 1LL);
    }
  }
  if ( (v11 & 0x80000000) == 0LL )
  {
    if ( v10 )
      *(_BYTE *)(v9 + 944) = 0;
    LODWORD(v31) = *v40;
    if ( *v40 )
    {
      LODWORD(v31) = v31 - 1;
      *v40 = v31;
    }
  }
  else if ( a3 )
  {
    if ( !v17 )
      *(_BYTE *)(v9 + 944) = 1;
  }
  else
  {
    LODWORD(v31) = MiIsRetryIoStatus((unsigned int)v11, v46);
    if ( (_DWORD)v31 || (_DWORD)v11 == -1073741740 )
      *v40 = 10;
  }
  if ( v33 )
    LODWORD(v31) = KeSetEvent(v33, 0, 0);
  return v31;
}
