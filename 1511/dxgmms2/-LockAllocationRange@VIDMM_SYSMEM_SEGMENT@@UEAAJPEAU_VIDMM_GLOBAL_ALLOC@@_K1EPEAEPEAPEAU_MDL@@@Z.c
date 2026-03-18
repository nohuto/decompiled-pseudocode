/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0054D10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00438B0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_LOCAL_ALLOC **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 *a6,
        PRKPROCESS **a7)
{
  PRKPROCESS **v11; // rcx
  int v12; // r15d
  char v13; // r13
  const void *v14; // rax
  __int64 v15; // rax
  __int64 v17; // rcx
  int v18; // r14d
  _QWORD *v19; // rax
  enum _LOCK_OPERATION v20; // [rsp+28h] [rbp-C0h]
  void *v21[2]; // [rsp+68h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v21[1] = a2;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  *a7 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)a2 + 281) )
  {
    if ( (struct _VIDMM_LOCAL_ALLOC *)a3 == a2[33] && (struct _VIDMM_LOCAL_ALLOC *)a4 == a2[34] )
    {
      *a6 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), (struct _VIDMM_GLOBAL_ALLOC *)a2);
    _guard_dispatch_icall_fptr();
  }
  if ( (*(_DWORD *)a2[59] & 8) == 0 )
  {
    v11 = (PRKPROCESS **)a2[12];
    if ( v11 )
    {
      KeStackAttachProcess(*v11[1], &ApcState);
      v12 = 1;
    }
  }
  if ( a5 )
  {
    v13 = 1;
    v14 = VidMmMapViewOfAllocation((struct _VIDMM_GLOBAL_ALLOC *)a2, a3, a4, v21, 0, 0LL);
    if ( v14 )
    {
      memmove(*((void **)this + 31), v14, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_GLOBAL_ALLOC *)a2, v21[0], 0LL);
    }
    else
    {
      memset(*((void **)this + 31), 0, a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *a7 = *(PRKPROCESS **)(*((_QWORD *)this + 32) + 8LL);
    goto LABEL_22;
  }
  if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C002F4D4);
    v15 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v15 + 24) = 1113LL;
    WdLogEvent5_WdLowResource(v15);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v18 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            (VIDMM_GLOBAL *)v11,
            a2[12],
            (struct _VIDMM_GLOBAL_ALLOC *)a2,
            a3,
            a4,
            v20,
            this,
            1u);
    if ( v18 >= 0 )
    {
LABEL_22:
      a2[34] = (struct _VIDMM_LOCAL_ALLOC *)a4;
      a2[33] = (struct _VIDMM_LOCAL_ALLOC *)a3;
      *((_BYTE *)a2 + 280) = v13;
      *((_BYTE *)a2 + 281) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C002F4D4);
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17);
    v19[3] = a2;
    v19[4] = a3;
    v19[5] = a4;
    WdLogEvent5_WdLowResource(v19);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v18;
  }
}
