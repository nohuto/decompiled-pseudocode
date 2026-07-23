/*
 * XREFs of BgpFwFreeMemory @ 0x140129BFC
 * Callers:
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14012A060 (BgpFwQueryBootGraphicsInformation.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140725B0C (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 *     ResFwpPageOutBackground @ 0x140727A6C (ResFwpPageOutBackground.c)
 *     BgpConsoleInitialize @ 0x140728460 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140728670 (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140728810 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1407289F8 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140728AC0 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140728B2C (FopFreeMappingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407D42D4 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407D4894 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407D49E4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407D4B64 (FopReadNamingTable.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rdx
  ULONG v2; // r8d
  __int64 v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // rax
  struct _MDL *v6; // rcx
  ULONG v7; // edx
  ULONG v8; // ebx
  struct _MDL *v9; // rbx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v8 = v1 - qword_140328B78 - 8;
    RtlClearBits(&BitMapHeader, v8, *(_DWORD *)(v1 + 8));
    if ( v8 < HintIndex )
      HintIndex = v8;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = *(_QWORD *)(a1 - 40);
      v4 = *(_QWORD **)(a1 - 40 + 8);
      if ( *(_QWORD *)(v3 + 8) != a1 - 40 || *v4 != a1 - 40 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      v5 = 48LL;
    }
    else
    {
      v5 = 32LL;
    }
    v6 = (struct _MDL *)(a1 - v5);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v6, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0);
      v7 = 0;
      v6 = v9;
    }
    else
    {
      v7 = v2;
    }
    ExFreePoolWithTag(v6, v7);
  }
}
