/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC
 * Callers:
 *     GdiProcessCallout @ 0x1C0059660 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsGreInternalHidePointerSupported_0 @ 0x1C0001820 (IsGreInternalHidePointerSupported_0.c)
 *     GreInternalHidePointer_0 @ 0x1C0001828 (GreInternalHidePointer_0.c)
 *     IsCleanupHLSURFSupported_0 @ 0x1C0001830 (IsCleanupHLSURFSupported_0.c)
 *     CleanupHLSURF_0 @ 0x1C0001838 (CleanupHLSURF_0.c)
 *     IsvCleanupFontsSupported_0 @ 0x1C0001840 (IsvCleanupFontsSupported_0.c)
 *     vCleanupFonts_0 @ 0x1C0001848 (vCleanupFonts_0.c)
 *     IsvCleanupUMWindowlessSpriteSupported_0 @ 0x1C0001850 (IsvCleanupUMWindowlessSpriteSupported_0.c)
 *     vCleanupUMWindowlessSprite_0 @ 0x1C0001858 (vCleanupUMWindowlessSprite_0.c)
 *     IsvCleanupMetaTypeSupported_0 @ 0x1C0001860 (IsvCleanupMetaTypeSupported_0.c)
 *     vCleanupMetaType_0 @ 0x1C0001868 (vCleanupMetaType_0.c)
 *     IsvCleanupPrivateFontsSupported_0 @ 0x1C0001870 (IsvCleanupPrivateFontsSupported_0.c)
 *     vCleanupPrivateFonts_0 @ 0x1C0001878 (vCleanupPrivateFonts_0.c)
 *     IsGetgpniFontsDirectoryAndScratchSupported_0 @ 0x1C0001880 (IsGetgpniFontsDirectoryAndScratchSupported_0.c)
 *     GetgpniFontsDirectoryAndScratch_0 @ 0x1C0001888 (GetgpniFontsDirectoryAndScratch_0.c)
 *     UmfdSessionUninitialize_0 @ 0x1C0001890 (UmfdSessionUninitialize_0.c)
 *     IsGreDeleteClientObjSupported_0 @ 0x1C0001898 (IsGreDeleteClientObjSupported_0.c)
 *     GreDeleteClientObj_0 @ 0x1C00018A0 (GreDeleteClientObj_0.c)
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0059CA0 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0059EC0 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0059F48 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005A02C (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C005A0C8 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C005A5C0 (HmgSetLock.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C005C384 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0081514 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00CBE10 (EngLockDriverObj.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // r15d
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // esi
  __int64 i; // rcx
  char v10; // cl
  unsigned int Owned; // r14d
  __int64 v12; // [rsp+20h] [rbp-38h]
  HDRVOBJ hdo; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+20h]

  v3 = 1;
  if ( (int)IsGreInternalHidePointerSupported_0() >= 0 )
    GreInternalHidePointer_0();
  if ( a2 == 1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 284) & 1) == 0
      && !*(_DWORD *)(CurrentProcessWin32Process + 64) )
    {
      return 1LL;
    }
  }
  else if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( (int)IsCleanupHLSURFSupported_0() >= 0 )
      CleanupHLSURF_0();
  }
  vCleanupDCs(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( (int)IsvCleanupFontsSupported_0() >= 0 )
    vCleanupFonts_0();
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  vCleanupBrushes(a1);
  DxLddmCleanupAtProcessDestroy(a1);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported_0() >= 0 )
    vCleanupUMWindowlessSprite_0();
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    WPP_MAIN_CB.DeviceQueue.1 = 0LL;
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(a1, a2);
  if ( gGarbageCollectionPendingCount )
    vGarbageCollectObjects();
  if ( a2 == 2 )
  {
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(4u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(a1);
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  vCleanupLCSPs(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( (int)IsvCleanupMetaTypeSupported_0() >= 0 )
      vCleanupMetaType_0();
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported_0() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch_0();
      if ( *(_QWORD *)hdo )
        Win32FreePool();
      if ( *v14 )
        Win32FreePool();
      if ( v12 )
        Win32FreePool();
    }
    UmfdSessionUninitialize_0();
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    if ( (int)IsvCleanupPrivateFontsSupported_0() >= 0 )
      vCleanupPrivateFonts_0();
  }
  vRemoveRefPalettes(a1);
  v8 = 0;
  hdo = 0LL;
  for ( i = 0LL; ; i = Owned )
  {
    Owned = HmgNextOwned(i, a1, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    v10 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported_0() >= 0 )
        GreDeleteClientObj_0();
    }
    else if ( v10 == 8 )
    {
      v3 = bDeletePalette((HPALETTE)hdo);
      if ( !v3 && !v8 )
        v8 = 1;
    }
    else if ( v10 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(hdo);
      EngDeleteDriverObj(hdo, 1, 1);
    }
    else
    {
      if ( !v8 )
        v8 = 1;
      v3 = 0;
    }
  }
  return v3;
}
