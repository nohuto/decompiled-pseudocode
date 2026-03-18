/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34
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
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005E694 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC **a1, void *a2, struct _VIDMM_LOCAL_ALLOC *a3)
{
  void *CurrentProcess; // rdi
  struct _VIDMM_LOCAL_ALLOC *v4; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v6; // rbx
  int v7; // edx
  int v8; // edx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx

  CurrentProcess = 0LL;
  v4 = a3;
  v6 = (struct _VIDMM_GLOBAL_ALLOC *)a1;
  if ( !a3 )
    v4 = a1[12];
  v7 = *((_DWORD *)a1 + 19);
  if ( (v7 & 0x100) == 0 || (a1 = (struct _VIDMM_LOCAL_ALLOC **)*(unsigned int *)a1[59], ((unsigned __int8)a1 & 1) == 0) )
  {
    if ( (v7 & 0x100) == 0 && (*((_DWORD *)v6 + 21) & 4) == 0 )
    {
      v8 = **((_DWORD **)v6 + 59);
      if ( (v8 & 8) == 0 )
      {
        LOBYTE(a1) = (v8 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & ((*((_DWORD *)v6 + 20) & 0x80u) == 0)) != 0 )
        {
          if ( (v8 & 0x20000000) != 0 )
          {
            v9 = *((_BYTE *)v4 + 32);
            if ( (v9 & 8) != 0 )
              *((_BYTE *)v4 + 32) = v9 & 0xF7;
            else
              CurrentProcess = (void *)PsGetCurrentProcess();
            VidMmUnmapViewAsync(CurrentProcess, *((PVOID *)v6 + 44), a2);
          }
          else
          {
            if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 8003);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL),
              *((_QWORD *)v4 + 3));
            if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(v10, &EventProfilerExit, v11, 8003);
          }
        }
      }
    }
    else
    {
      v12 = (void *)*((_QWORD *)v6 + 45);
      if ( v12 )
      {
        MmUnmapViewInSystemSpace(v12);
        *((_QWORD *)v6 + 45) = 0LL;
      }
    }
  }
}
