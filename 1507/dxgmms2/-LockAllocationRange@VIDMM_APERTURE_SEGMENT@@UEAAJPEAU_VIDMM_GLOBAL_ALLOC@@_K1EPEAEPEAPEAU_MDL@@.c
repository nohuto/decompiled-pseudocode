/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C006C1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005B4BC (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  VIDMM_GLOBAL **v10; // r14
  struct _MDL **v11; // rbx
  int v12; // r15d
  char v13; // r13
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rcx
  int v21; // ebx
  _QWORD *v22; // rax
  enum _LOCK_OPERATION v23; // [rsp+28h] [rbp-C0h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v10 = this;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  *a7 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)a2 + 281) )
  {
    if ( a3 == *((_QWORD *)a2 + 33) && a4 == *((_QWORD *)a2 + 34) )
    {
      *a6 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
    _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v11 = a7;
  }
  if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
  {
    this = (VIDMM_GLOBAL **)*((_QWORD *)a2 + 12);
    if ( this )
    {
      KeStackAttachProcess(*(PRKPROCESS *)this[1], &ApcState);
      v12 = 1;
    }
  }
  if ( a5 )
  {
    v13 = 1;
    v14 = VidMmMapViewOfAllocation(a2, a3, a4, 0);
    if ( v14 )
    {
      memmove(v10[31], v14, a4);
      VidMmUnmapViewOfAllocation(a2, v15, v16, v17);
    }
    else
    {
      memset(v10[31], 0, a4);
      *((_DWORD *)a2 + 19) |= 0x80000u;
    }
    *v11 = (struct _MDL *)*((_QWORD *)v10[32] + 1);
    goto LABEL_22;
  }
  if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C00274C4);
    v18 = WdLogNewEntry5_WdLowResource(this);
    *(_QWORD *)(v18 + 24) = 1554LL;
    WdLogEvent5_WdLowResource(v18);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v21 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            (VIDMM_GLOBAL *)this,
            *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
            a2,
            a3,
            a4,
            v23,
            (struct VIDMM_SEGMENT *)v10,
            1u);
    if ( v21 >= 0 )
    {
LABEL_22:
      *((_QWORD *)a2 + 34) = a4;
      *((_QWORD *)a2 + 33) = a3;
      *((_BYTE *)a2 + 280) = v13;
      *((_BYTE *)a2 + 281) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C00274C4);
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20);
    v22[3] = a2;
    v22[4] = a3;
    v22[5] = a4;
    WdLogEvent5_WdLowResource(v22);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v21;
  }
}
