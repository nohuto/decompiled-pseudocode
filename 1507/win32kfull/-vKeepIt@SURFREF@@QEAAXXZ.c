/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01C1380
 * Callers:
 *     GreReferenceObject @ 0x1C000BE2C (GreReferenceObject.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029D980 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this, __int64 a2)
{
  INC_SHARE_REF_CNT(*((_QWORD *)this + 4), a2);
}
