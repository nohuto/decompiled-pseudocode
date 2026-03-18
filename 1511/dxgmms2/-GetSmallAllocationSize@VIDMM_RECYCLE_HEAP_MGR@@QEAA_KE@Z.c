/*
 * XREFs of ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011D28
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D108 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061C68 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00824DC (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
        VIDMM_RECYCLE_HEAP_MGR *this,
        unsigned __int8 a2)
{
  int v2; // eax

  if ( a2 )
    return VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(this, a2);
  v2 = dword_1C002F33C;
  if ( (unsigned __int64)qword_1C002F118 > 0x53333333 )
    v2 = dword_1C002F32C;
  return (unsigned int)(v2 << 20);
}
