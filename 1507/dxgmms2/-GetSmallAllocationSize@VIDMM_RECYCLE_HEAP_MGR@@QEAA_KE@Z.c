/*
 * XREFs of ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00108B4
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0067E7C (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006AE64 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax

  if ( a2 )
    return VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(this, a2);
  v2 = dword_1C0027314;
  if ( (unsigned __int64)qword_1C00270F8 > 0x53333333 )
    v2 = dword_1C0027304;
  return (unsigned int)(v2 << 20);
}
