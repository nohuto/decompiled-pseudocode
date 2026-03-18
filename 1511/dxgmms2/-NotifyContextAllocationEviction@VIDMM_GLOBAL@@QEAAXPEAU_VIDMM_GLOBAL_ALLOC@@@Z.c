/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0049C34
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00550F0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0082E40 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*((_DWORD *)a2 + 19) & 0x10000000) != 0 )
  {
    v4 = *((_QWORD *)a2 + 14);
    if ( v4 && *(_QWORD *)(v4 + 544) )
      VidSchSwitchFromDevice();
  }
  else
  {
    v2 = *((_QWORD *)a2 + 14);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 216);
      if ( v3 )
      {
        LOBYTE(a2) = 1;
        VidSchSwitchFromContext(v3, a2);
      }
    }
  }
}
