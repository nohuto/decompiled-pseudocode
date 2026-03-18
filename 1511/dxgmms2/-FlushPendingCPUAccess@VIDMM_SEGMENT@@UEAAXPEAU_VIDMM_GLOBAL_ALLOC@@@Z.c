/*
 * XREFs of ?FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::FlushPendingCPUAccess(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // r8d

  if ( ((_DWORD)this[7] & 0x10) == 0 )
  {
    v4 = **((_DWORD **)a2 + 59);
    if ( (v4 & 4) != 0 )
      VIDMM_GLOBAL::FlushAllocationFromProcessorCache(this[1], a2, v4, a4);
  }
}
