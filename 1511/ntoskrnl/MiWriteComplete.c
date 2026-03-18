/*
 * XREFs of MiWriteComplete @ 0x1400300AC
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1401161A8 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiFreeModWriterEntry @ 0x140030670 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400306A4 (MiReleaseWriteInProgressCharges.c)
 *     MmIsWriteErrorFatal @ 0x140030710 (MmIsWriteErrorFatal.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400E4064 (CcNotifyOfMappedWriteComplete.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MI_PAGEFILE_WRITE @ 0x140109AB4 (MI_PAGEFILE_WRITE.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x1401D18A4 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rbx
  char v6; // si
  unsigned int v7; // edi
  int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // r13
  unsigned __int64 v11; // r10
  ULONG_PTR v12; // r15
  bool v13; // zf
  int v14; // eax
  __int64 v15; // r12
  unsigned int v16; // r12d
  int v17; // eax
  int v18; // esi
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  struct _MDL *v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  struct _KEVENT *v26; // rdi
  _QWORD *v27; // rax
  void *v28; // rcx
  __int64 v29; // r9
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  struct _FILE_OBJECT *v32; // r13
  struct _FILE_OBJECT *v33; // rdx
  BOOLEAN IsTotalDeviceFailure; // al
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _QWORD *v36; // rcx
  unsigned __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  int *v39; // [rsp+38h] [rbp-80h]
  unsigned __int64 v40; // [rsp+40h] [rbp-78h]
  unsigned __int64 v41; // [rsp+48h] [rbp-70h]
  __int64 v42; // [rsp+50h] [rbp-68h]
  PRKEVENT Event; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h] BYREF
  struct _MDL *v45; // [rsp+C0h] [rbp+8h]
  unsigned __int8 v46; // [rsp+C0h] [rbp+8h]
  int v47; // [rsp+C8h] [rbp+10h]

  v3 = *(struct _MDL **)(a1 + 200);
  v6 = 0;
  v7 = 0;
  if ( !v3 )
    v3 = (struct _MDL *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 192);
  v47 = v8;
  if ( (v3->MdlFlags & 0x200) != 0 )
    MiRetardMdl(v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *(_QWORD *)(a1 + 160);
  v11 = 0LL;
  v12 = *a2;
  v42 = v10;
  if ( v10 )
  {
    v39 = (int *)(v9 + 920);
  }
  else
  {
    v44 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v44, 5, 0, v12);
    v11 = 0LL;
    v39 = (int *)(v9 + 916);
  }
  v13 = (v8 & 0xFFF) == 0;
  v14 = v8;
  v45 = v3 + 1;
  v15 = *(_QWORD *)(a1 + 168);
  v40 = (unsigned __int64)&v3[1] + 8 * !v13 + 8 * (v14 >> 12);
  if ( v15 )
  {
    v32 = *(struct _FILE_OBJECT **)(a1 + 152);
    if ( (v15 & 1) == 0 )
      CcNotifyOfMappedWriteComplete(
        v32->SectionObjectPointer,
        *(_QWORD *)(a1 + 176),
        (unsigned int)v47,
        (unsigned int)v12);
    FsRtlReleaseFileForModWrite(v32);
    v33 = v32;
    v10 = v42;
    MI_DEREFERENCE_CONTROL_AREA_FILE(v42, v33);
    v11 = 0LL;
  }
  if ( (v12 & 0x80000000) != 0LL )
  {
    v16 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
    v17 = MmIsWriteErrorFatal(v10 != 0, v16, (unsigned int)v12);
    v11 = 0LL;
    if ( !v17 )
      goto LABEL_12;
    if ( !v10 )
      KeBugCheckEx(0x7Au, 0x20uLL, v12, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
      goto LABEL_13;
    if ( ((_DWORD)v12 == -1073741670
       || (_DWORD)v12 == -1073741663
       || (_DWORD)v12 == -1073741801
       || v47 > 4096 && (IsTotalDeviceFailure = FsRtlIsTotalDeviceFailure(v12), v11 = 0LL, !IsTotalDeviceFailure))
      && v16
      && v40 > (unsigned __int64)&v3[1].Size )
    {
LABEL_12:
      v7 = 1;
    }
    else
    {
      v6 = 1;
    }
LABEL_13:
    if ( v10 )
      *(_DWORD *)(v9 + 600) = v12;
    else
      *(_DWORD *)(v9 + 596) = v12;
  }
  Event = 0LL;
  v18 = v6 & 1;
  if ( v18 )
  {
    MiSetDeleteOnClose(v10, 1LL);
    v11 = 0LL;
  }
  v19 = *(_QWORD *)(a1 + 144);
  if ( v19 )
  {
    v29 = *(__int64 *)(a1 + 176) >> 12;
    v38 = 0LL;
    MI_SET_PAGING_FILE_INFO((unsigned int)&v38, (unsigned int)&v38, v19, v29, 1);
    v20 = v38;
  }
  else
  {
    v20 = 0LL;
    v38 = 0LL;
  }
  v41 = v11;
  v21 = (v40 - (unsigned __int64)v45 + 7) >> 3;
  if ( (unsigned __int64)v45 > v40 )
    v21 = v11;
  if ( v21 )
  {
    v22 = v45;
    while ( v22->Next != (struct _MDL *)qword_1402FF238 )
    {
      v23 = 48 * (__int64)v22->Next - 0x58000000000LL;
      v46 = MiLockPageInline(v23);
      if ( (v7 & 1) == 0 )
      {
        if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 || (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          v7 &= ~2u;
        else
          v7 |= 2u;
      }
      v7 &= ~4u;
      if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 && (v7 & 2) == 0 && (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) == 0 )
      {
        if ( *(_WORD *)(v23 + 32) > 1u )
        {
          *(_BYTE *)(v23 + 34) |= 0x10u;
          v7 |= 2u;
        }
        else
        {
          *(_BYTE *)(v23 + 34) = *(_BYTE *)(v23 + 34) & 0xF8 | 2;
          v7 |= 4u;
        }
      }
      v24 = MiWriteCompletePfn(v23, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v46);
      v11 = 0LL;
      if ( v24 )
      {
        MiReleasePageFileInfo(v9, v24, 0LL);
        v20 = v38;
LABEL_55:
        v11 = 0LL;
        goto LABEL_28;
      }
      v20 = v38;
LABEL_28:
      v22 = (struct _MDL *)((char *)v22 + 8);
      v20 = (unsigned int)v20 ^ ((v20 & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
      v38 = v20;
      if ( ++v41 >= v21 )
      {
        v10 = v42;
        goto LABEL_30;
      }
    }
    if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      MiReleasePageFileInfo(v9, v20, 0LL);
    goto LABEL_55;
  }
LABEL_30:
  v25 = *(_DWORD *)(a1 + 140);
  if ( v25 )
  {
    v31 = *(unsigned int *)(a1 + 140);
    if ( *(_QWORD *)(a1 + 144) == v11 )
      LOBYTE(v25) = MiReleaseWriteInProgressCharges(v9, v31, 1LL);
    else
      LOBYTE(v25) = MiReleaseWriteInProgressCharges(v9, v31, 0LL);
    v11 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 144) == v11 )
    goto LABEL_32;
  if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
    --*(_DWORD *)(v9 + 612);
  LOBYTE(v25) = v9 + 56;
  v30 = *(_QWORD **)(v9 + 832);
  *(_QWORD *)a1 = v9 + 824;
  *(_QWORD *)(a1 + 8) = v30;
  if ( *v30 != v9 + 824 )
    __fastfail(3u);
  *v30 = a1;
  v26 = (struct _KEVENT *)(v9 + 840);
  *(_QWORD *)(v9 + 832) = a1;
  if ( *(_BYTE *)(v9 + 593) != 1 )
LABEL_32:
    v26 = Event;
  if ( v10 )
  {
    if ( v18 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MI_REFERENCE_CONTROL_AREA_FILE(v10);
        LODWORD(PoolWithTag[1].List.Blink) = v12;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v27 = (_QWORD *)MiDecrementModifiedWriteCount(v10, 0LL);
    LODWORD(v11) = 0;
    if ( v27 )
    {
      MiReleaseControlAreaWaiters(v27);
      LODWORD(v11) = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 544));
    v28 = *(void **)(a1 + 200);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      LODWORD(v11) = 0;
    }
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      LOBYTE(v25) = MiFreeModWriterEntry(a1, 1LL);
LABEL_41:
      LODWORD(v11) = 0;
      goto LABEL_42;
    }
    LOBYTE(v25) = v9 + 40;
    v36 = *(_QWORD **)(v9 + 560);
    *(_QWORD *)a1 = v9 + 552;
    *(_QWORD *)(a1 + 8) = v36;
    if ( *v36 != v9 + 552 )
      __fastfail(3u);
    *v36 = a1;
    *(_QWORD *)(v9 + 560) = a1;
    if ( *(_BYTE *)(v9 + 592) == 1 )
    {
      *(_BYTE *)(v9 + 592) = 0;
      LOBYTE(v25) = KeSignalGate(v9 + 568, 1LL);
      goto LABEL_41;
    }
  }
LABEL_42:
  if ( (v12 & 0x80000000) == 0LL )
  {
    if ( v10 )
      *(_BYTE *)(v9 + 952) = v11;
    v25 = *v39;
    if ( *v39 )
      *v39 = --v25;
  }
  else if ( a3 == (_DWORD)v11 )
  {
    if ( (_DWORD)v12 == -1073741670
      || (_DWORD)v12 == -1073741663
      || (_DWORD)v12 == -1073741801
      || v47 > 4096 && (LOBYTE(v25) = FsRtlIsTotalDeviceFailure(v12), !(_BYTE)v25)
      || (_DWORD)v12 == -1073741740 )
    {
      *v39 = 10;
    }
  }
  else if ( !v18 )
  {
    *(_BYTE *)(v9 + 952) = 1;
  }
  if ( v26 )
    LOBYTE(v25) = KeSetEvent(v26, 0, 0);
  return v25;
}
