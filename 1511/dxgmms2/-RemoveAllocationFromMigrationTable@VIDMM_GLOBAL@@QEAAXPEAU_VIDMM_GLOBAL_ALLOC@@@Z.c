/*
 * XREFs of ?RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004629C
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00550F0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0082E40 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromMigrationTable(
        union _LARGE_INTEGER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rcx

  if ( this[889] )
  {
    DXGFASTMUTEX::Acquire(this[887]);
    if ( *((_BYTE *)a2 + 92) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1780); i = (unsigned int)(i + 1) )
      {
        v4 = (__int64)this[889];
        if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8 * i) == a2 )
          *(_QWORD *)(v4 + 8 * i) = *(_QWORD *)(v4 + 8LL * (unsigned int)--*((_DWORD *)this + 1780));
      }
      *((_BYTE *)a2 + 92) = 0;
    }
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)this[887], v4, v5, v6);
  }
}
