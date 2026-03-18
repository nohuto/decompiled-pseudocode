/*
 * XREFs of ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0010878
 * Callers:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00108B4 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069EA0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax
  int v4; // eax

  if ( (unsigned __int64)qword_1C00270F8 > 0x53333333 )
  {
    if ( a2 )
    {
      v2 = dword_1C002730C;
      return (unsigned int)(v2 << 10);
    }
    v4 = dword_1C0027308;
  }
  else
  {
    if ( a2 )
    {
      v2 = dword_1C002731C;
      return (unsigned int)(v2 << 10);
    }
    v4 = dword_1C0027318;
  }
  return (unsigned int)(v4 << 20);
}
