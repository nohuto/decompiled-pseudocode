/*
 * XREFs of MiWriteComplete @ 0x14008247C
 * Callers:
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14014B828 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     MiFreeModWriterEntry @ 0x140082AAC (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140082AE0 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     MI_PAGEFILE_WRITE @ 0x14013B758 (MI_PAGEFILE_WRITE.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x1402122AC (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
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
  struct _FILE_OBJECT *v15; // r13
  struct _FILE_OBJECT *v16; // rdx
  int v17; // r12d
  struct _MDL *v18; // r12
  int v19; // esi
  __int64 PageFilePte; // rax
  unsigned int v21; // r10d
  __int64 v22; // rdx
  __int64 updated; // rdi
  struct _MDL *v24; // r15
  unsigned __int64 v25; // rsi
  __int64 PteTimeStamp; // rax
  __int64 v27; // r10
  __int64 v28; // r13
  unsigned int v29; // r12d
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r8
  _QWORD *v33; // rcx
  struct _KEVENT *v34; // r12
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  __int64 v36; // rax
  void *v37; // rcx
  _QWORD *v38; // rcx
  struct _MDL *v40; // [rsp+30h] [rbp-78h]
  unsigned __int64 v41; // [rsp+38h] [rbp-70h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-70h]
  unsigned int *v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+50h] [rbp-58h]
  __int64 v45; // [rsp+58h] [rbp-50h] BYREF
  int v46; // [rsp+B0h] [rbp+8h]
  int v47; // [rsp+B8h] [rbp+10h]
  int v49; // [rsp+C8h] [rbp+20h]

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
  v49 = v11;
  v44 = v10;
  if ( v10 )
  {
    v43 = (unsigned int *)(v9 + 912);
  }
  else
  {
    v45 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v45, 5, 0, v11);
    v43 = (unsigned int *)(v9 + 908);
  }
  v12 = (v8 & 0xFFF) == 0;
  v13 = v8;
  v40 = v3 + 1;
  v14 = *(_QWORD *)(a1 + 168);
  v41 = (unsigned __int64)&v3[1] + 8 * !v12 + 8 * (v13 >> 12);
  if ( !v14 )
    goto LABEL_14;
  v15 = *(struct _FILE_OBJECT **)(a1 + 152);
  if ( (v14 & 1) == 0 )
    CcNotifyOfMappedWriteComplete(
      v15->SectionObjectPointer,
      *(_QWORD *)(a1 + 176),
      (unsigned int)v46,
      (unsigned int)v11);
  FsRtlReleaseFileForModWrite(v15);
  v16 = v15;
  v10 = v44;
  MI_DEREFERENCE_CONTROL_AREA_FILE(v44, v16);
  if ( (v11 & 0x80000000) == 0LL )
  {
LABEL_14:
    if ( (v11 & 0x80000000) == 0LL )
    {
      v18 = v3 + 1;
      goto LABEL_34;
    }
  }
  v17 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v10 != 0, v17, v11) )
  {
    v5 = 1;
LABEL_29:
    v18 = v3 + 1;
    goto LABEL_30;
  }
  if ( !v10 )
    KeBugCheckEx(0x7Au, 0x20uLL, v11, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
    goto LABEL_29;
  if ( (_DWORD)v11 == -1073741670
    || (_DWORD)v11 == -1073741663
    || (_DWORD)v11 == -1073741801
    || v46 > 4096 && !FsRtlIsTotalDeviceFailure(v11) )
  {
    v12 = v17 == 0;
    v18 = v3 + 1;
    if ( !v12 && v41 > (unsigned __int64)&v3[1].Size )
    {
      v5 = 1;
      goto LABEL_30;
    }
  }
  else
  {
    v18 = v3 + 1;
  }
  v4 = 1;
LABEL_30:
  if ( v10 )
    *(_DWORD *)(v9 + 616) = v11;
  else
    *(_DWORD *)(v9 + 612) = v11;
LABEL_34:
  v19 = v4 & 1;
  v47 = v19;
  if ( v19 )
    MiSetDeleteOnClose(v10, 1LL);
  PageFilePte = MiMakePageFilePte(0LL);
  v22 = *(_QWORD *)(a1 + 144);
  updated = PageFilePte;
  if ( v22 )
    updated = MiTransferSoftwarePte(PageFilePte, v22, *(__int64 *)(a1 + 176) >> 12);
  if ( (unsigned __int64)v18 < v41 )
  {
    v24 = v40;
    v25 = v41;
    do
    {
      if ( v24->Next == (struct _MDL *)qword_14034F6F8 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v9, updated, 0LL);
        PteTimeStamp = MiGetPteTimeStamp(updated);
      }
      else
      {
        v28 = 48 * (__int64)v24->Next - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
          {
            v29 += v21;
            if ( (v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v29);
              v21 = 1;
            }
          }
          while ( *(__int64 *)(v28 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
        }
        if ( ((unsigned __int8)v5 & (unsigned __int8)v21) == 0 )
        {
          if ( (*(_BYTE *)(v28 + 34) & 0x10) == 0 || (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
            v5 &= ~2u;
          else
            v5 |= 2u;
        }
        v5 &= ~4u;
        if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 && (v5 & 2) == 0 && (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) == 0 )
        {
          if ( *(_WORD *)(v28 + 32) <= (unsigned __int16)v21 )
          {
            *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 2;
            v5 |= 4u;
          }
          else
          {
            *(_BYTE *)(v28 + 34) |= 0x10u;
            v5 |= 2u;
          }
        }
        v30 = MiWriteCompletePfn(v28, v5);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( v30 )
          MiReleasePageFileInfo(v9, v30, 0LL);
        PteTimeStamp = MiGetPteTimeStamp(updated);
        v27 = 1LL;
      }
      v24 = (struct _MDL *)((char *)v24 + 8);
      updated = MiUpdatePageFileHighInPte(updated, v27 + PteTimeStamp);
    }
    while ( (unsigned __int64)v24 < v25 );
    v19 = v47;
    LODWORD(v11) = v49;
  }
  v31 = *(_DWORD *)(a1 + 140);
  if ( v31 )
  {
    if ( *(_QWORD *)(a1 + 144) )
      v32 = 0LL;
    else
      v32 = v21;
    LOBYTE(v31) = MiReleaseWriteInProgressCharges(v9, v31, v32);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_78;
  if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
    --*(_DWORD *)(v9 + 628);
  v33 = *(_QWORD **)(v9 + 824);
  *(_QWORD *)a1 = v9 + 816;
  *(_QWORD *)(a1 + 8) = v33;
  if ( *v33 != v9 + 816 )
    __fastfail(3u);
  *v33 = a1;
  v34 = (struct _KEVENT *)(v9 + 832);
  *(_QWORD *)(v9 + 824) = a1;
  LOBYTE(v31) = 1;
  if ( *(_BYTE *)(v9 + 609) != 1 )
LABEL_78:
    v34 = 0LL;
  if ( v44 )
  {
    if ( v19 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MI_REFERENCE_CONTROL_AREA_FILE(v44);
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v11;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v36 = MiDecrementModifiedWriteCount(v44, 0LL);
    if ( v36 )
      MiReleaseControlAreaWaiters(v36);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 560));
    v37 = *(void **)(a1 + 200);
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      LOBYTE(v31) = v9 + 56;
      v38 = *(_QWORD **)(v9 + 576);
      *(_QWORD *)a1 = v9 + 568;
      *(_QWORD *)(a1 + 8) = v38;
      if ( *v38 != v9 + 568 )
        __fastfail(3u);
      *v38 = a1;
      *(_QWORD *)(v9 + 576) = a1;
      if ( *(_BYTE *)(v9 + 608) == 1 )
      {
        *(_BYTE *)(v9 + 608) = 0;
        LOBYTE(v31) = KeSignalGate(v9 + 584, 1LL);
      }
    }
    else
    {
      LOBYTE(v31) = MiFreeModWriterEntry(a1);
    }
  }
  if ( (v11 & 0x80000000) == 0LL )
  {
    if ( v44 )
      *(_BYTE *)(v9 + 916) = 0;
    v31 = *v43;
    if ( *v43 )
      *v43 = --v31;
  }
  else if ( a3 )
  {
    if ( !v19 )
      *(_BYTE *)(v9 + 916) = 1;
  }
  else if ( (_DWORD)v11 == -1073741670
         || (_DWORD)v11 == -1073741663
         || (_DWORD)v11 == -1073741801
         || v46 > 4096 && (LOBYTE(v31) = FsRtlIsTotalDeviceFailure(v11), !(_BYTE)v31)
         || (_DWORD)v11 == -1073741740 )
  {
    *v43 = 10;
  }
  if ( v34 )
    LOBYTE(v31) = KeSetEvent(v34, 0, 0);
  return v31;
}
