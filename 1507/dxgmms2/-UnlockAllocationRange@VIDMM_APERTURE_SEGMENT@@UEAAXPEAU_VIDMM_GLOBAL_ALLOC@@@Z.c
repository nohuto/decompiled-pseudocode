/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006CB20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z @ 0x1C0053D3C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(const void **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  if ( *((_BYTE *)a2 + 280) )
  {
    if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
    {
      v5 = *((_QWORD *)a2 + 12);
      if ( v5 )
      {
        KeStackAttachProcess(**(PRKPROCESS **)(v5 + 8), &ApcState);
        v4 = 1;
      }
    }
    v6 = VidMmMapViewOfAllocation(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34), 0);
    if ( v6 )
    {
      memmove(v6, this[31], *((_QWORD *)a2 + 34));
      VidMmUnmapViewOfAllocation(a2, v7, v8, v9);
    }
    else
    {
      memset((void *)this[31], 0, *((_QWORD *)a2 + 34));
      *((_DWORD *)a2 + 19) |= 0x80000u;
    }
    if ( v4 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    VIDMM_GLOBAL::UnlockAllocation(
      (VIDMM_GLOBAL *)this,
      *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      1);
  }
  *((_QWORD *)a2 + 33) = 0LL;
  *((_QWORD *)a2 + 34) = 0LL;
  *((_WORD *)a2 + 140) = 0;
}
