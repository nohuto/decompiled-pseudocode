/*
 * XREFs of bDeleteSurface @ 0x1C0037780
 * Callers:
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C007B310 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0071170 (HmgShareLockCheckIgnoreStockBit.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1, __int64 a2)
{
  struct SURFACE *v2; // rbx
  unsigned int v3; // edi

  LOBYTE(a2) = 5;
  v2 = (struct SURFACE *)HmgShareLockCheckIgnoreStockBit(a1, a2);
  v3 = SURFACE::bDeleteSurface(v2, 0, 0);
  if ( v3 )
    v2 = 0LL;
  if ( v2 )
    HmgDecrementShareReferenceCount(v2);
  return v3;
}
