/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0
 * Callers:
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023270 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023310 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetDCOrgEx @ 0x1C0042250 (GreGetDCOrgEx.c)
 *     GreSetDCOrg @ 0x1C0044280 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 *     GreIsRendering @ 0x1C0046D60 (GreIsRendering.c)
 *     GreSelectVisRgnShared @ 0x1C0083C20 (GreSelectVisRgnShared.c)
 *     GreValidateVisrgn @ 0x1C0088AD8 (GreValidateVisrgn.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLock(v3, a2);
  return this;
}
