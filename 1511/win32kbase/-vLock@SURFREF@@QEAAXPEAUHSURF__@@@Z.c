/*
 * XREFs of ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00A8C28
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 */

void __fastcall SURFREF::vLock(SURFREF *this, HSURF a2)
{
  *(_QWORD *)this = HmgShareLockCheck((int)a2, 5);
}
