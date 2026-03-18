/*
 * XREFs of ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006185C
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005DE78 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C005F95C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::Init(
        VIDMM_RECYCLE_RANGE *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  CCHAR LeastSignificantBit; // al

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  *((_QWORD *)this + 11) = 3LL;
  ++*(_QWORD *)a2;
  LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)this + 4));
  if ( LeastSignificantBit < 0 )
    *((_QWORD *)this + 7) = 0LL;
  else
    *((_QWORD *)this + 7) = 1LL << LeastSignificantBit;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 84) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
}
