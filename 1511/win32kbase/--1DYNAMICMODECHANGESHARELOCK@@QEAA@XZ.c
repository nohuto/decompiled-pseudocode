/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0045860 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B82D0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 * Callees:
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(this, &LockRelease, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v3);
  }
}
