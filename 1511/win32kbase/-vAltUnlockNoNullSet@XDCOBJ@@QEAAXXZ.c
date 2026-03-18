/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4
 * Callers:
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023270 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023310 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetDCOrgEx @ 0x1C0042250 (GreGetDCOrgEx.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     GreSetDCOrg @ 0x1C0044280 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 *     GreIsRendering @ 0x1C0046D60 (GreIsRendering.c)
 *     GreSelectVisRgnShared @ 0x1C0083C20 (GreSelectVisRgnShared.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0088A5C (--1DCOBJA@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1C0088AD8 (GreValidateVisrgn.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)this);
  }
}
