/*
 * XREFs of ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011D50
 * Callers:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011D28 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00599B4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D108 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax
  int v4; // eax

  if ( (unsigned __int64)qword_1C002F118 <= 0x53333333 )
  {
    if ( !a2 )
    {
      v2 = dword_1C002F340;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C002F344;
  }
  else
  {
    if ( !a2 )
    {
      v2 = dword_1C002F330;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C002F334;
  }
  return (unsigned int)(v4 << 10);
}
