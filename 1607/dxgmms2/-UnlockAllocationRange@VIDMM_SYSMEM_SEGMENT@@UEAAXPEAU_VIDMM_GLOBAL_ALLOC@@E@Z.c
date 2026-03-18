/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00639D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C004C454 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0066B4C (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0066C38 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  int v7; // r14d
  __int64 v8; // rsi
  void *v9; // rax
  void *v10; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  v4 = a3;
  v7 = 0;
  v8 = *((_QWORD *)a2 + 13);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 288) )
  {
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v8 )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
      v7 = 1;
    }
    v9 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35), &v10, 0);
    if ( v9 )
    {
      memmove(v9, *((const void **)this + 31), *((_QWORD *)a2 + 35));
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v10);
    }
    else
    {
      memset(*((void **)this + 31), 0, *((_QWORD *)a2 + 35));
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    if ( v7 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      (struct _VIDMM_LOCAL_ALLOC *)v8,
      *((_QWORD *)a2 + 34),
      *((_QWORD *)a2 + 35),
      1,
      v4);
  }
  *((_QWORD *)a2 + 35) = 0LL;
  *((_QWORD *)a2 + 34) = 0LL;
  *((_WORD *)a2 + 144) = 0;
}
