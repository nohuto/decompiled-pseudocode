/*
 * XREFs of ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180009024
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsInTree(const struct CVisual **this, const struct CVisual *a2)
{
  char result; // al

  result = 0;
  while ( a2 )
  {
    if ( a2 == this[3] )
      return 1;
    a2 = (const struct CVisual *)*((_QWORD *)a2 + 8);
  }
  return result;
}
