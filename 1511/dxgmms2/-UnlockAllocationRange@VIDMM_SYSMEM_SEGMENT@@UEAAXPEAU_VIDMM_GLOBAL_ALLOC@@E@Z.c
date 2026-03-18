/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0054B70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0043820 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v5; // esi
  __int64 v6; // rcx
  void *v7; // rax
  void *v8[2]; // [rsp+40h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v8[1] = a2;
  v5 = 0;
  if ( *((_BYTE *)a2 + 280) )
  {
    if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
    {
      v6 = *((_QWORD *)a2 + 12);
      if ( v6 )
      {
        KeStackAttachProcess(**(PRKPROCESS **)(v6 + 8), &ApcState);
        v5 = 1;
      }
    }
    v7 = VidMmMapViewOfAllocation(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34), v8, 0, 0LL);
    if ( v7 )
    {
      memmove(v7, *((const void **)this + 31), *((_QWORD *)a2 + 34));
      VidMmUnmapViewOfAllocation(a2, v8[0], 0LL);
    }
    else
    {
      memset(*((void **)this + 31), 0, *((_QWORD *)a2 + 34));
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    if ( v5 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      1,
      a3);
  }
  *((_QWORD *)a2 + 34) = 0LL;
  *((_QWORD *)a2 + 33) = 0LL;
  *((_WORD *)a2 + 140) = 0;
}
