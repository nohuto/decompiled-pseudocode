/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063D40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0096360 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( (*((_DWORD *)a2 + 19) & 0x10000000) != 0 )
  {
    v4 = *((_QWORD *)a2 + 15);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 568);
      if ( v5 )
        VidSchSwitchFromDevice(v5);
    }
  }
  else
  {
    v2 = *((_QWORD *)a2 + 15);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 216);
      if ( v3 )
        VidSchSwitchFromContext(v3);
    }
  }
}
