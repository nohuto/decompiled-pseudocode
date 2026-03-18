/*
 * XREFs of bDeleteSurface @ 0x1C005C5B0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C005B270 (EngDeleteSurface.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00AF20C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00B3B10 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall bDeleteSurface(HSURF a1)
{
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v3);
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v3, a1);
  LODWORD(a1) = SURFREF::bDeleteSurface(v3, 0LL);
  SURFREF::~SURFREF((SURFREF *)v3);
  return (unsigned int)a1;
}
