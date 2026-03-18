/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500
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
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3, int a4)
{
  void *v4; // rdi
  __int64 v5; // r15
  int v7; // ecx
  __int64 v8; // r9
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  NTSTATUS v15; // ebx
  __int64 CurrentProcess; // rax
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF

  v28 = a3;
  v4 = 0LL;
  v5 = a4;
  MappedBase = 0LL;
  v7 = *((_DWORD *)a1 + 19);
  v8 = a3;
  if ( (v7 & 0x100) != 0 )
  {
    a3 = **((unsigned int **)a1 + 59);
    if ( (a3 & 1) != 0 )
      goto LABEL_27;
  }
  v10 = 4;
  if ( (v7 & 0x100) != 0 || (*((_DWORD *)a1 + 21) & 4) != 0 )
  {
    v21 = *((_QWORD *)a1 + 44);
    v25 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v21, (char *)a1 + 360, &v28, &v25, 0LL) >= 0 )
    {
      v18 = (char *)(*((_QWORD *)a1 + 45) - v25);
      return &v18[a2];
    }
    _InterlockedIncrement(&dword_1C00275D0);
    v23 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdLowResource(v23);
    return (char *)MappedBase;
  }
  v11 = **((unsigned int **)a1 + 59);
  if ( (v11 & 8) == 0 )
  {
    if ( (v11 & 0x40000031) == 0 )
    {
      if ( (v11 & 0x20000000) != 0 )
      {
        LOBYTE(v11) = v11 & 4;
        if ( !(_BYTE)v11 )
          v10 = 1028;
        if ( (gVidMmGlobalFault & 0x1000) != 0 )
        {
          _InterlockedIncrement(&dword_1C00275D0);
          v13 = WdLogNewEntry5_WdLowResource(v11);
          *(_QWORD *)(v13 + 24) = 630LL;
          WdLogEvent5_WdLowResource(v13);
          v15 = -1073741823;
        }
        else
        {
          v26 = 0LL;
          CurrentProcess = PsGetCurrentProcess(v11, a2, a3, v8);
          v15 = MmMapViewOfSection(
                  *((_QWORD *)a1 + 44),
                  CurrentProcess,
                  &MappedBase,
                  0LL,
                  *((_QWORD *)a1 + 1),
                  &v26,
                  (char *)a1 + 8,
                  2,
                  0,
                  v10);
          if ( v15 >= 0 )
          {
LABEL_18:
            *(_QWORD *)(*((_QWORD *)a1 + 12) + 16LL) = MappedBase;
            v18 = (char *)MappedBase;
            return &v18[a2];
          }
        }
        _InterlockedIncrement(&dword_1C00275D0);
        v17 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v17 + 24) = v5;
        WdLogEvent5_WdLowResource(v17);
        if ( !(_DWORD)v5 )
        {
          v15 = MmMapViewInSystemSpace(*((PVOID *)a1 + 44), &MappedBase, (PSIZE_T)a1 + 1);
          if ( v15 < 0 )
            return (char *)MappedBase;
          *(_BYTE *)(*((_QWORD *)a1 + 12) + 32LL) |= 8u;
        }
        if ( v15 >= 0 )
          goto LABEL_18;
      }
      else
      {
        if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          Template_q(v11, &EventProfilerEnter, a3, 8002);
          v8 = v28;
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL)
                                                                                                + 24LL)
                                                                                  + 56LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) + 24LL),
                *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL),
                a2,
                v8,
                v5);
        *(_QWORD *)(*((_QWORD *)a1 + 12) + 16LL) = v19;
        v4 = *(void **)(*((_QWORD *)a1 + 12) + 16LL);
        MappedBase = v4;
        if ( (qword_1C0027060 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
          return (char *)v4;
        Template_q(v19, &EventProfilerExit, v20, 8002);
      }
      return (char *)MappedBase;
    }
    if ( (_DWORD)v5 && (v11 & 0x20) != 0 )
      return (char *)v4;
LABEL_27:
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 16LL);
    return (char *)(a2 + v12);
  }
  if ( !(_DWORD)v5 )
  {
    v12 = *((_QWORD *)a1 + 45);
    return (char *)(a2 + v12);
  }
  return (char *)v4;
}
