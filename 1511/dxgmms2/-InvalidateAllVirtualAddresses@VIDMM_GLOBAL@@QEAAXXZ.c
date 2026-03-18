/*
 * XREFs of ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007B158
 * Callers:
 *     VidMmInvalidateAllVirtualAddresses @ 0x1C001C6B0 (VidMmInvalidateAllVirtualAddresses.c)
 * Callees:
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0084A04 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllVirtualAddresses(VIDMM_GLOBAL *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
    VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * i));
}
