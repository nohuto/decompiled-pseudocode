/*
 * XREFs of ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A4E3C
 * Callers:
 *     _lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator() @ 0x180006204 (_lambda_0fac207bc2d8fd4a1b8744335422bc83_--operator().c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PE.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800313F0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004EF94 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x180145260 (-GetInputSink@CInteraction@@UEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputHandle(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 21);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 16);
  return result;
}
