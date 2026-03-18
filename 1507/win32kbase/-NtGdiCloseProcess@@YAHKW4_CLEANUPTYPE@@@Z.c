/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0
 * Callers:
 *     GdiProcessCallout @ 0x1C005B5D0 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsGreInternalHidePointerSupported_0 @ 0x1C0001810 (IsGreInternalHidePointerSupported_0.c)
 *     GreInternalHidePointer_0 @ 0x1C0001818 (GreInternalHidePointer_0.c)
 *     IsCleanupHLSURFSupported_0 @ 0x1C0001820 (IsCleanupHLSURFSupported_0.c)
 *     CleanupHLSURF_0 @ 0x1C0001828 (CleanupHLSURF_0.c)
 *     IsvCleanupFontsSupported_0 @ 0x1C0001830 (IsvCleanupFontsSupported_0.c)
 *     vCleanupFonts_0 @ 0x1C0001838 (vCleanupFonts_0.c)
 *     IsvCleanupUMWindowlessSpriteSupported_0 @ 0x1C0001840 (IsvCleanupUMWindowlessSpriteSupported_0.c)
 *     vCleanupUMWindowlessSprite_0 @ 0x1C0001848 (vCleanupUMWindowlessSprite_0.c)
 *     IsvCleanupMetaTypeSupported_0 @ 0x1C0001850 (IsvCleanupMetaTypeSupported_0.c)
 *     vCleanupMetaType_0 @ 0x1C0001858 (vCleanupMetaType_0.c)
 *     IsvCleanupPrivateFontsSupported_0 @ 0x1C0001860 (IsvCleanupPrivateFontsSupported_0.c)
 *     vCleanupPrivateFonts_0 @ 0x1C0001868 (vCleanupPrivateFonts_0.c)
 *     IsGetgpniFontsDirectoryAndScratchSupported_0 @ 0x1C0001870 (IsGetgpniFontsDirectoryAndScratchSupported_0.c)
 *     GetgpniFontsDirectoryAndScratch_0 @ 0x1C0001878 (GetgpniFontsDirectoryAndScratch_0.c)
 *     UmfdSessionUninitialize_0 @ 0x1C0001880 (UmfdSessionUninitialize_0.c)
 *     IsGreDeleteClientObjSupported_0 @ 0x1C0001888 (IsGreDeleteClientObjSupported_0.c)
 *     GreDeleteClientObj_0 @ 0x1C0001890 (GreDeleteClientObj_0.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgLock @ 0x1C003BC00 (HmgLock.c)
 *     bDeleteRegion @ 0x1C0044670 (bDeleteRegion.c)
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C005BC00 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C005BD90 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005BE14 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C005C050 (HmgNextOwned.c)
 *     HmgSetLock @ 0x1C005C2A0 (HmgSetLock.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006A0DC (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C006CFE8 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00BCDD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BE650 (EngLockDriverObj.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebp
  struct HOBJ__ *i; // rcx
  struct HOBJ__ *Owned; // rax
  struct HOBJ__ *v7; // rdi
  HRGN j; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  HRGN v12; // rdi
  __int64 k; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  HDRVOBJ m; // rcx
  char v17; // al
  __int64 v18; // rax
  HDRVOBJ v19; // rdi
  __int64 v21; // [rsp+20h] [rbp-28h]
  _QWORD *v22; // [rsp+60h] [rbp+18h]
  _QWORD *v23; // [rsp+68h] [rbp+20h]

  v3 = 1;
  if ( (int)IsGreInternalHidePointerSupported_0() >= 0 )
    GreInternalHidePointer_0();
  if ( a2 == 2 )
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
  for ( i = 0LL; ; i = v7 )
  {
    Owned = (struct HOBJ__ *)HmgNextOwned(i, a1);
    v7 = Owned;
    if ( !Owned )
      break;
    if ( (BYTE2(Owned) & 0x1F) == 0x10 )
      bDeleteBrush(Owned);
  }
  DxLddmCleanupAtProcessDestroy(a1);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported_0() >= 0 )
    vCleanupUMWindowlessSprite_0();
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
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
  for ( j = 0LL; ; j = v12 )
  {
    v11 = HmgNextOwned(j, a1);
    v12 = (HRGN)v11;
    if ( !v11 )
      break;
    if ( (BYTE2(v11) & 0x1F) == 4 )
    {
      v9 = HmgLock(v11, 4);
      if ( v9 )
      {
        v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v9;
        if ( v10 )
          *(_QWORD *)(v10 + 16) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      }
      bDeleteRegion(v12);
    }
  }
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  for ( k = 0LL; ; k = v15 )
  {
    v14 = HmgNextOwned(k, a1);
    v15 = v14;
    if ( !v14 )
      break;
    if ( (BYTE2(v14) & 0x1F) == 9 )
      bDeleteColorSpace(v14, 0LL);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( (int)IsvCleanupMetaTypeSupported_0() >= 0 )
      vCleanupMetaType_0();
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported_0() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch_0();
      if ( *v22 )
        Win32FreePool();
      if ( *v23 )
        Win32FreePool();
      if ( v21 )
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
  for ( m = 0LL; ; m = v19 )
  {
    v18 = HmgNextOwned(m, a1);
    v19 = (HDRVOBJ)v18;
    if ( !v18 )
      break;
    v17 = BYTE2(v18) & 0x1F;
    if ( (BYTE2(v19) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported_0() >= 0 )
        GreDeleteClientObj_0();
    }
    else if ( v17 == 8 )
    {
      v3 = bDeletePalette((HPALETTE)v19, 1u, a2);
    }
    else if ( v17 == 28 )
    {
      HmgSetLock(v19);
      EngLockDriverObj(v19);
      EngDeleteDriverObj(v19, 1, 1);
    }
    else
    {
      v3 = 0;
    }
  }
  return v3;
}
