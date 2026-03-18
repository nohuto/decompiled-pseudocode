/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0066C38
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00639D0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0063AB0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0066980 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00967F0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0097130 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 v10; // rcx
  int v11; // r12d
  int v12; // edx
  char *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // ebx
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v27 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v10 = *(unsigned int *)(v5 + 76);
  if ( (v10 & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
    return (char *)(a2 + *((_QWORD *)a1 + 2));
  v11 = 4;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 || (*(_DWORD *)(v5 + 84) & 4) != 0 )
  {
    v22 = *(_QWORD *)(v5 + 368);
    v28 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v22, v5 + 376, &v27, &v28, 0LL) >= 0 )
    {
      v13 = (char *)(*(_QWORD *)(v5 + 376) - v28);
      return &v13[a2];
    }
    _InterlockedIncrement(&dword_1C0035660);
    v24 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v24 + 24) = v5;
    WdLogEvent5_WdLowResource(v24);
    return (char *)MappedBase;
  }
  v12 = **(_DWORD **)(v5 + 504);
  if ( (v12 & 8) == 0 )
  {
    LOBYTE(v10) = (v12 & 0x30) == 0;
    if ( ((unsigned __int8)v10 & ((*(_DWORD *)(v5 + 80) & 0x80u) == 0)) == 0 )
    {
      if ( !a5 || (v12 & 0x20) == 0 )
      {
        v13 = (char *)*((_QWORD *)a1 + 2);
        return &v13[a2];
      }
      return (char *)v6;
    }
    if ( (v12 & 0x20000000) != 0 )
    {
      if ( (v12 & 4) == 0 )
        v11 = 1028;
      if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
      {
        _InterlockedIncrement(&dword_1C0035660);
        v15 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v15 + 24) = 637LL;
        WdLogEvent5_WdLowResource(v15);
        v17 = -1073741823;
      }
      else
      {
        v25 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v10);
        v17 = MmMapViewOfSection(
                *(_QWORD *)(v5 + 368),
                CurrentProcess,
                &MappedBase,
                0LL,
                *(_QWORD *)(v5 + 8),
                &v25,
                v5 + 8,
                2,
                0,
                v11);
        if ( v17 >= 0 )
        {
LABEL_21:
          v13 = (char *)MappedBase;
          *a4 = MappedBase;
          return &v13[a2];
        }
      }
      _InterlockedIncrement(&dword_1C0035660);
      v19 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v19 + 24) = a5;
      WdLogEvent5_WdLowResource(v19);
      if ( !a5 )
      {
        v17 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 368), &MappedBase, (PSIZE_T)(v5 + 8));
        if ( v17 < 0 )
          return (char *)MappedBase;
        *((_BYTE *)a1 + 32) |= 8u;
      }
      if ( v17 >= 0 )
        goto LABEL_21;
    }
    else
    {
      if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        Template_q(v10, &EventProfilerEnter, a3, 8002);
        a3 = v27;
      }
      v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)a1 + 1)
                                                                                                  + 24LL)
                                                                                    + 56LL))(
                     *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
                     *((_QWORD *)a1 + 3),
                     a2,
                     a3,
                     a5);
      MappedBase = v6;
      if ( (qword_1C0035050 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (char *)v6;
      Template_q(v20, &EventProfilerExit, v21, 8002);
    }
    return (char *)MappedBase;
  }
  if ( !a5 )
  {
    v13 = *(char **)(v5 + 376);
    return &v13[a2];
  }
  return (char *)v6;
}
