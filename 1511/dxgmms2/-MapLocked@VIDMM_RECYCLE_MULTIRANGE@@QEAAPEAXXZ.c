/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00824DC
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C0082490 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011D28 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005E694 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0061DF0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
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
  void *v17; // rbx
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  PVOID v21; // rax
  struct _MDL *v22; // rcx
  __int64 v23; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v24; // rcx
  void *v25; // rbx
  void *v26; // rax
  __int64 CurrentProcess; // rax
  _BYTE v28[96]; // [rsp+E0h] [rbp+E0h] BYREF

  v1 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      (PRKAPC_STATE)(v1 + 40));
    v5 = *((_QWORD *)this + 10);
    v6 = **(_DWORD **)(v5 + 32);
    if ( (unsigned int)(v6 - 3) > 3 || (unsigned int)(v6 - 5) <= 1 )
    {
      v7 = 0;
      *(_BYTE *)v1 = 0;
      *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_QWORD *)this + 6);
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
    Mdl = IoAllocateMdl(*(PVOID *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v4, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = 3800LL;
      WdLogEvent5_WdLowResource(v14);
      v22 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v22 )
      {
        IoFreeMdl(v22);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v7 )
      {
        v23 = *((_QWORD *)this + 10);
        v24 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v23 + 32) - 5);
        if ( v4 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v24, (unsigned int)v24 <= 1) )
        {
          CurrentProcess = PsGetCurrentProcess();
          MmUnmapViewOfSection(CurrentProcess, *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
        else
        {
          v25 = *(void **)(v23 + 56);
          v26 = (void *)PsGetCurrentProcess();
          VidMmUnmapViewAsync(v26, v25, *(PVOID *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
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
        v19 = PsGetCurrentProcess();
        MmUnmapViewOfSection(v19, *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
      else
      {
        v17 = *(void **)(v15 + 56);
        v18 = (void *)PsGetCurrentProcess();
        VidMmUnmapViewAsync(v18, v17, *(PVOID *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
    }
    v20 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
      v21 = *(PVOID *)(v20 + 24);
    else
      v21 = MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v21;
    KeUnstackDetachProcess((PRKAPC_STATE)(v1 + 40));
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
