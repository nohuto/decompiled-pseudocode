/*
 * XREFs of ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004E698
 * Callers:
 *     VidMmInvalidateAllVirtualAddresses @ 0x1C000E6C0 (VidMmInvalidateAllVirtualAddresses.c)
 * Callees:
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C006FEEC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllVirtualAddresses(VIDMM_GLOBAL *this)
{
  __int64 v1; // rbx

  v1 = 0LL;
  for ( *((_DWORD *)this + 1616) = 1; (unsigned int)v1 < *((_DWORD *)this + 926); v1 = (unsigned int)(v1 + 1) )
    VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v1));
}
