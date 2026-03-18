/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8
 * Callers:
 *     GdiProcessCallout @ 0x1C0044F00 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
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
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     HmgLockEx @ 0x1C0025B60 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C0037530 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 *     bDeleteRegion @ 0x1C0037860 (bDeleteRegion.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0045540 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C004562C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0072760 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgSetLock @ 0x1C0073464 (HmgSetLock.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00764AC (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C007F6A4 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BF9B0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BFAB0 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r8d
  __int64 i; // rcx
  HBRUSH Owned; // rax
  HBRUSH v10; // rdi
  int v11; // r8d
  __int64 j; // rcx
  unsigned __int64 v13; // rax
  HRGN v14; // rdi
  __int64 k; // rcx
  HCOLORSPACE v16; // rax
  HCOLORSPACE v17; // rdi
  int v18; // r8d
  __int64 m; // rcx
  unsigned __int64 v20; // rax
  HDRVOBJ v21; // rdi
  __int64 v23; // rax
  char *v24; // rdx
  char v25; // al
  _QWORD *v26; // [rsp+50h] [rbp+18h]
  _QWORD *v27; // [rsp+58h] [rbp+20h]

  v3 = 1;
  if ( (int)IsGreInternalHidePointerSupported_0() >= 0 )
    GreInternalHidePointer_0();
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( (int)IsCleanupHLSURFSupported_0() >= 0 )
      CleanupHLSURF_0();
  }
  vCleanupDCs(a1, v5, v6);
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
  for ( i = 0LL; ; i = (__int64)v10 )
  {
    Owned = (HBRUSH)HmgNextOwned(i, a1, v7);
    v10 = Owned;
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
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(a1, a2);
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
  for ( j = 0LL; ; j = (__int64)v14 )
  {
    v13 = HmgNextOwned(j, a1, v11);
    v14 = (HRGN)v13;
    if ( !v13 )
      break;
    if ( (BYTE2(v13) & 0x1F) == 4 )
    {
      v23 = HmgLockEx(v13, 4, 0);
      if ( v23 )
      {
        v24 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v23;
        if ( v24 )
          *((_QWORD *)v24 + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
      }
      bDeleteRegion(v14);
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
  for ( k = 0LL; ; k = (__int64)v17 )
  {
    v16 = (HCOLORSPACE)HmgNextOwned(k, a1, v11);
    v17 = v16;
    if ( !v16 )
      break;
    if ( (BYTE2(v16) & 0x1F) == 9 )
      bDeleteColorSpace(v16);
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
      if ( *v26 )
        Win32FreePool();
      if ( *v27 )
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
  for ( m = 0LL; ; m = (__int64)v21 )
  {
    v20 = HmgNextOwned(m, a1, v18);
    v21 = (HDRVOBJ)v20;
    if ( !v20 )
      break;
    v25 = BYTE2(v20) & 0x1F;
    if ( (BYTE2(v21) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported_0() >= 0 )
        GreDeleteClientObj_0();
    }
    else if ( v25 == 8 )
    {
      v3 = bDeletePalette((HPALETTE)v21);
    }
    else if ( v25 == 28 )
    {
      HmgSetLock(v21);
      EngLockDriverObj(v21);
      EngDeleteDriverObj(v21, 1, 1);
    }
    else
    {
      v3 = 0;
    }
  }
  return v3;
}
