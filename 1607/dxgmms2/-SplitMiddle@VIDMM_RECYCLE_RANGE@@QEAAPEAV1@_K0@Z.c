/*
 * XREFs of ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C0096198
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_RANGE::SplitMiddle(
        VIDMM_RECYCLE_RANGE *this,
        __int64 a2,
        __int64 a3)
{
  struct VIDMM_RECYCLE_RANGE *result; // rax

  VIDMM_RECYCLE_RANGE::SplitAt(this, a3);
  VIDMM_RECYCLE_RANGE::SplitAt(this, a2);
  result = VIDMM_RECYCLE_RANGE::GetNextRange(this);
  if ( !result || *((_QWORD *)result + 4) != a2 + *((_QWORD *)this + 4) )
    return this;
  return result;
}
