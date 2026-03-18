/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0066B4C
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
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  int v7; // edx
  char v8; // al
  void *CurrentProcess; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx

  v3 = *(_QWORD *)a1;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 76LL);
  if ( (v6 & 0x100) == 0 || (*(_DWORD *)(v3 + 80) & 0x80u) == 0 )
  {
    if ( (v6 & 0x100) == 0 && (*(_DWORD *)(v3 + 84) & 4) == 0 )
    {
      v7 = **(_DWORD **)(v3 + 504);
      if ( (v7 & 8) == 0 )
      {
        LOBYTE(v6) = (v7 & 0x40000030) == 0;
        if ( ((unsigned __int8)v6 & ((*(_DWORD *)(v3 + 80) & 0x80u) == 0)) != 0 )
        {
          if ( (v7 & 0x20000000) != 0 )
          {
            v8 = *((_BYTE *)a1 + 32);
            if ( (v8 & 8) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)a1 + 32) = v8 & 0xF7;
            }
            else
            {
              CurrentProcess = (void *)PsGetCurrentProcess(v6);
            }
            VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v3 + 368), a2);
          }
          else
          {
            if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v6, &EventProfilerEnter, a3, 8003);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
              *((_QWORD *)a1 + 3));
            if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v10, &EventProfilerExit, v11, 8003);
          }
        }
      }
    }
    else
    {
      v12 = *(void **)(v3 + 376);
      if ( v12 )
      {
        MmUnmapViewInSystemSpace(v12);
        *(_QWORD *)(v3 + 376) = 0LL;
      }
    }
  }
}
