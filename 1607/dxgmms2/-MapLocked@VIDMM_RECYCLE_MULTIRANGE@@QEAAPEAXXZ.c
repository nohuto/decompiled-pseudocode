/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0095AAC
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C0095A60 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00101A8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0066CD0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  unsigned __int64 v1; // rbp
  void *result; // rax
  unsigned __int64 v4; // r14
  __int64 v5; // r8
  int v6; // edx
  char v7; // bl
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  __int64 v17; // rcx
  void *v18; // rbx
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  PVOID v22; // rax
  struct _MDL *v23; // rcx
  __int64 v24; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v25; // rcx
  __int64 v26; // rcx
  void *v27; // rbx
  void *v28; // rax
  __int64 CurrentProcess; // rax
  _BYTE v30[96]; // [rsp+E0h] [rbp+E0h] BYREF

  v1 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
    *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v4;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      (PRKAPC_STATE)(v1 + 40));
    v5 = *((_QWORD *)this + 10);
    v6 = **(_DWORD **)(v5 + 32);
    if ( (unsigned int)(v6 - 3) > 3 || (unsigned int)(v6 - 5) <= 1 )
    {
      v7 = 0;
      *(_BYTE *)v1 = 0;
      *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_QWORD *)this + 6);
    }
    else
    {
      v7 = 1;
      *(_BYTE *)v1 = 1;
      v8 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v5 + 56),
             *((_QWORD *)this + 6),
             v4,
             ((v6 - 4) & 0xFFFFFFFD) == 0,
             (void **)(v1 + 16),
             (void **)(v1 + 8),
             0,
             0LL);
      v10 = v8;
      if ( v8 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9);
        v11[3] = v4;
        v11[4] = *((_QWORD *)this + 6);
        v11[5] = *((_QWORD *)this + 10);
        v11[6] = v10;
        WdLogEvent5_WdWarning(v11);
LABEL_23:
        KeUnstackDetachProcess((PRKAPC_STATE)(v1 + 40));
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(*(PVOID *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v4, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = 3902LL;
      WdLogEvent5_WdLowResource(v14);
      v23 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v23 )
      {
        IoFreeMdl(v23);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v7 )
      {
        v24 = *((_QWORD *)this + 10);
        v25 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v24 + 32) - 5);
        if ( v4 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v25, (unsigned int)v25 <= 1) )
        {
          CurrentProcess = PsGetCurrentProcess(v26);
          MmUnmapViewOfSection(CurrentProcess, *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
        else
        {
          v27 = *(void **)(v24 + 56);
          v28 = (void *)PsGetCurrentProcess(v26);
          VidMmUnmapViewAsync(v28, v27, *(PVOID *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
      }
      goto LABEL_23;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v7 )
    {
      v15 = *((_QWORD *)this + 10);
      v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v15 + 32) - 5);
      if ( v4 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v16, (unsigned int)v16 <= 1) )
      {
        v20 = PsGetCurrentProcess(v17);
        MmUnmapViewOfSection(v20, *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
      else
      {
        v18 = *(void **)(v15 + 56);
        v19 = (void *)PsGetCurrentProcess(v17);
        VidMmUnmapViewAsync(v19, v18, *(PVOID *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
    }
    v21 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
      v22 = *(PVOID *)(v21 + 24);
    else
      v22 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v22;
    KeUnstackDetachProcess((PRKAPC_STATE)(v1 + 40));
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
