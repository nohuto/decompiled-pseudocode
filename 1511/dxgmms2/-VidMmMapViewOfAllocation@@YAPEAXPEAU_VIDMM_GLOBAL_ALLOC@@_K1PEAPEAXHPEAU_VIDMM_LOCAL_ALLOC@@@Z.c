/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C
 * Callers:
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0054B70 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0054D10 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005E860 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0083200 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0083A30 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VidMmMapViewOfAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        int a5,
        _BYTE *MappedBase)
{
  _BYTE *v6; // r15
  _BYTE *v7; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v10; // rsi
  int v11; // edx
  int v12; // r12d
  int v13; // edx
  char *v14; // rdi
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a3;
  v6 = MappedBase;
  v7 = 0LL;
  v10 = a1;
  if ( !MappedBase )
    v6 = (_BYTE *)*((_QWORD *)a1 + 12);
  *a4 = 0LL;
  v11 = *((_DWORD *)a1 + 19);
  MappedBase = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    a1 = (struct _VIDMM_GLOBAL_ALLOC *)**((unsigned int **)a1 + 59);
    if ( ((unsigned __int8)a1 & 1) != 0 )
      goto LABEL_33;
  }
  v12 = 4;
  if ( (v11 & 0x100) != 0 || (*((_DWORD *)v10 + 21) & 4) != 0 )
  {
    v23 = *((_QWORD *)v10 + 44);
    v26 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v23, (char *)v10 + 360, &v27, &v26, 0LL) >= 0 )
    {
      v14 = (char *)(*((_QWORD *)v10 + 45) - v26);
      return &v14[a2];
    }
    _InterlockedIncrement(&dword_1C002F5E0);
    v25 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v25 + 24) = v10;
    WdLogEvent5_WdLowResource(v25);
    return MappedBase;
  }
  v13 = **((_DWORD **)v10 + 59);
  if ( (v13 & 8) == 0 )
  {
    LOBYTE(a1) = (v13 & 0x40000030) == 0;
    if ( ((unsigned __int8)a1 & ((*((_DWORD *)v10 + 20) & 0x80u) == 0)) != 0 )
    {
      if ( (v13 & 0x20000000) != 0 )
      {
        if ( (v13 & 4) == 0 )
          v12 = 1028;
        if ( (gVidMmGlobalFault & 0x1000) != 0 )
        {
          _InterlockedIncrement(&dword_1C002F5E0);
          v19 = WdLogNewEntry5_WdLowResource(a1);
          *(_QWORD *)(v19 + 24) = 637LL;
          WdLogEvent5_WdLowResource(v19);
          v18 = -1073741823;
        }
        else
        {
          v28 = 0LL;
          CurrentProcess = PsGetCurrentProcess();
          v18 = MmMapViewOfSection(
                  *((_QWORD *)v10 + 44),
                  CurrentProcess,
                  &MappedBase,
                  0LL,
                  *((_QWORD *)v10 + 1),
                  &v28,
                  (char *)v10 + 8,
                  2,
                  0,
                  v12);
          if ( v18 >= 0 )
          {
LABEL_16:
            v14 = MappedBase;
            *a4 = MappedBase;
            return &v14[a2];
          }
        }
        _InterlockedIncrement(&dword_1C002F5E0);
        v20 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v20 + 24) = a5;
        WdLogEvent5_WdLowResource(v20);
        if ( !a5 )
        {
          v18 = MmMapViewInSystemSpace(*((PVOID *)v10 + 44), (PVOID *)&MappedBase, (PSIZE_T)v10 + 1);
          if ( v18 < 0 )
            return MappedBase;
          v6[32] |= 8u;
        }
        if ( v18 >= 0 )
          goto LABEL_16;
      }
      else
      {
        if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          Template_q((__int64)a1, &EventProfilerEnter, a3, 8002);
          a3 = v27;
        }
        v7 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)v6 + 1) + 24LL)
                                                                                       + 56LL))(
                        *(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL),
                        *((_QWORD *)v6 + 3),
                        a2,
                        a3,
                        a5);
        MappedBase = v7;
        if ( (qword_1C002F070 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
          return v7;
        Template_q(v21, &EventProfilerExit, v22, 8002);
      }
      return MappedBase;
    }
    if ( a5 && (v13 & 0x20) != 0 )
      return v7;
LABEL_33:
    v14 = (char *)*((_QWORD *)v6 + 2);
    return &v14[a2];
  }
  if ( !a5 )
  {
    v14 = (char *)*((_QWORD *)v10 + 45);
    return &v14[a2];
  }
  return v7;
}
