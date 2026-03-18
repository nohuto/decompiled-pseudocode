/*
 * XREFs of bDeleteSurface @ 0x1C003A320
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C007EF40 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00BD2BC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v6; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v5);
  LOBYTE(v2) = 5;
  v6 = (unsigned int *)HmgShareLockCheckIgnoreStockBit(a1, v2);
  if ( v6 )
  {
    v3 = SURFREF::bDeleteSurface(v5, 0LL);
    if ( v6 )
      HmgDecrementShareReferenceCount(v6);
  }
  else
  {
    v3 = 0;
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v5);
  return v3;
}
