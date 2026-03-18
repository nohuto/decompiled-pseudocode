/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C006B890 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BC50 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C006C1B0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006CB20 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005BA68 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  void *CurrentProcess; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx

  v5 = *((_DWORD *)a1 + 19);
  if ( (v5 & 0x100) == 0 || (**((_DWORD **)a1 + 59) & 1) == 0 )
  {
    if ( (v5 & 0x100) == 0 && (*((_DWORD *)a1 + 21) & 4) == 0 )
    {
      v6 = **((unsigned int **)a1 + 59);
      if ( (v6 & 8) == 0 && (v6 & 0x40000031) == 0 )
      {
        if ( (v6 & 0x20000000) != 0 )
        {
          v7 = *((_QWORD *)a1 + 12);
          v8 = *(_BYTE *)(v7 + 32);
          if ( (v8 & 8) != 0 )
          {
            CurrentProcess = 0LL;
            *(_BYTE *)(v7 + 32) = v8 & 0xF7;
          }
          else
          {
            CurrentProcess = (void *)PsGetCurrentProcess(v6, v7, a3, a4);
          }
          VidMmUnmapViewAsync(CurrentProcess, *((PVOID *)a1 + 44), *(PVOID *)(*((_QWORD *)a1 + 12) + 16LL));
          *(_QWORD *)(*((_QWORD *)a1 + 12) + 16LL) = 0LL;
        }
        else
        {
          if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v6, &EventProfilerEnter, a3, 8003);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) + 24LL) + 64LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL));
          *(_QWORD *)(*((_QWORD *)a1 + 12) + 16LL) = 0LL;
          if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v10, &EventProfilerExit, v11, 8003);
        }
      }
    }
    else
    {
      v12 = (void *)*((_QWORD *)a1 + 45);
      if ( v12 )
      {
        MmUnmapViewInSystemSpace(v12);
        *((_QWORD *)a1 + 45) = 0LL;
      }
    }
  }
}
