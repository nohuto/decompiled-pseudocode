/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     INC_SHARE_REF_CNT @ 0x1C00294C0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002AAF0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002ADD0 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002AE4C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C720 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CD80 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0036B60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgReplaceObject @ 0x1C0036E20 (HmgReplaceObject.c)
 *     HmgValidHandle @ 0x1C00577F0 (HmgValidHandle.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C005A5C0 (HmgSetLock.c)
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     MultiUserCleanupDCs @ 0x1C006CF54 (MultiUserCleanupDCs.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgReferenceCheckLock @ 0x1C0074BE0 (HmgReferenceCheckLock.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     NtGdiGetEntry @ 0x1C007D600 (NtGdiGetEntry.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi

  v2 = a2;
  if ( a2 < 0x10000 )
    return a2;
  if ( *(_DWORD *)this <= 0x10000u )
    return (unsigned __int16)a2;
  v4 = (unsigned __int16)a2;
  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2) )
    return v4;
  return v2;
}
