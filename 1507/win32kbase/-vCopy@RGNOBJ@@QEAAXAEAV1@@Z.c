/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C003E150 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003FA90 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  memmove(
    (void *)(*(_QWORD *)this + 80LL),
    (const void *)(*(_QWORD *)a2 + 80LL),
    *(unsigned int *)(*(_QWORD *)a2 + 80LL) - 80LL);
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                      - *(_DWORD *)a2
                                      - 104
                                      + *(_QWORD *)this
                                      + 104LL;
}
