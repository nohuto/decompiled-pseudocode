/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0083200
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
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005FBA8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        void *a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  PRKPROCESS **v11; // rcx
  int v12; // r12d
  char *v13; // rax
  struct _MDL **v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rcx
  int v18; // ebx
  _QWORD *v19; // rax
  enum _LOCK_OPERATION v20; // [rsp+28h] [rbp-D0h]
  char v21; // [rsp+40h] [rbp-B8h]
  void *v22[2]; // [rsp+70h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v22[1] = a4;
  v11 = (PRKPROCESS **)a6;
  v12 = 0;
  v21 = 0;
  *a7 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)a2 + 281) )
  {
    if ( a3 == *((_QWORD *)a2 + 33) && a4 == *((void **)a2 + 34) )
    {
      *a6 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
    _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
  }
  if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
  {
    v11 = (PRKPROCESS **)*((_QWORD *)a2 + 12);
    if ( v11 )
    {
      KeStackAttachProcess(*v11[1], &ApcState);
      v12 = 1;
    }
  }
  if ( a5 )
  {
    v21 = 1;
    v13 = VidMmMapViewOfAllocation(a2, a3, (__int64)a4, v22, 0, 0LL);
    if ( v13 )
    {
      memmove(*((void **)this + 31), v13, (size_t)a4);
      v14 = a7;
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC **)a2, v22[0], 0LL);
    }
    else
    {
      memset(*((void **)this + 31), 0, (size_t)a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
      v14 = a7;
    }
    *v14 = *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL);
    goto LABEL_22;
  }
  if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C002F4D4);
    v15 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v15 + 24) = 1560LL;
    WdLogEvent5_WdLowResource(v15);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v18 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            (VIDMM_GLOBAL *)v11,
            *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
            a2,
            a3,
            (unsigned __int64)a4,
            v20,
            this,
            1u);
    if ( v18 >= 0 )
    {
LABEL_22:
      *((_QWORD *)a2 + 34) = a4;
      *((_QWORD *)a2 + 33) = a3;
      *((_BYTE *)a2 + 280) = v21;
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
