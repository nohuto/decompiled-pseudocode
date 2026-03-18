/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003B168
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003985C (--1DCOBJA@@QEAA@XZ.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003AAC8 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003AB68 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C0054B70 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C0069360 (GreSelectVisRgnShared.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C00B7890 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)this);
  }
}
