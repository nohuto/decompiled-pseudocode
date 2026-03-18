/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0067E7C
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C0067E30 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00108B4 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005BA68 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C006B000 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r15
  _QWORD *v13; // rax
  struct _MDL *Mdl; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rbx
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  PVOID v27; // rax
  struct _MDL *v28; // rcx
  __int64 v29; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rbx
  void *v36; // rax
  __int64 CurrentProcess; // rax
  _BYTE v38[96]; // [rsp+E0h] [rbp+E0h] BYREF

  v1 = (unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      (PRKAPC_STATE)(v1 + 40));
    v5 = *((_QWORD *)this + 10);
    v6 = **(_DWORD **)(v5 + 32);
    if ( (unsigned int)(v6 - 3) > 3 || (unsigned int)(v6 - 5) <= 1 )
    {
      v7 = 0;
      *(_BYTE *)v1 = 0;
      *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_QWORD *)this + 6);
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
      v12 = v8;
      if ( v8 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
        v13[3] = v4;
        v13[4] = *((_QWORD *)this + 6);
        v13[5] = *((_QWORD *)this + 10);
        v13[6] = v12;
        WdLogEvent5_WdWarning(v13);
LABEL_23:
        KeUnstackDetachProcess((PRKAPC_STATE)(v1 + 40));
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(*(PVOID *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v4, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = 3709LL;
      WdLogEvent5_WdLowResource(v16);
      v28 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v28 )
      {
        IoFreeMdl(v28);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v7 )
      {
        v29 = *((_QWORD *)this + 10);
        v30 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v29 + 32) - 5);
        if ( v4 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v30, (unsigned int)v30 <= 1) )
        {
          CurrentProcess = PsGetCurrentProcess(v32, v31, v33, v34);
          MmUnmapViewOfSection(CurrentProcess, *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
        else
        {
          v35 = *(void **)(v29 + 56);
          v36 = (void *)PsGetCurrentProcess(v32, v31, v33, v34);
          VidMmUnmapViewAsync(v36, v35, *(PVOID *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
      }
      goto LABEL_23;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v7 )
    {
      v17 = *((_QWORD *)this + 10);
      v18 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v17 + 32) - 5);
      if ( v4 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v18, (unsigned int)v18 <= 1) )
      {
        v25 = PsGetCurrentProcess(v20, v19, v21, v22);
        MmUnmapViewOfSection(v25, *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
      else
      {
        v23 = *(void **)(v17 + 56);
        v24 = (void *)PsGetCurrentProcess(v20, v19, v21, v22);
        VidMmUnmapViewAsync(v24, v23, *(PVOID *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      }
    }
    v26 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v26 + 10) & 5) != 0 )
      v27 = *(PVOID *)(v26 + 24);
    else
      v27 = MmMapLockedPagesSpecifyCache((PMDL)v26, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v27;
    KeUnstackDetachProcess((PRKAPC_STATE)(v1 + 40));
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
