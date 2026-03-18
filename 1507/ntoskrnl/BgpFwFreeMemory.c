/*
 * XREFs of BgpFwFreeMemory @ 0x140152748
 * Callers:
 *     RaspFreeMemory @ 0x140152734 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140152BA8 (BgpFwQueryBootGraphicsInformation.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x14075CCB4 (ResFwpPageInBackground.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     TxtpDestroyCacheEntry @ 0x14075E7CC (TxtpDestroyCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x14075E7EC (BgpGxRectangleDestroy.c)
 *     ResFwpPageOutBackground @ 0x14075E9F4 (ResFwpPageOutBackground.c)
 *     BgpDisplayCharacterGetContext @ 0x14075F5E8 (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14075F770 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x14075F958 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x14075FA1C (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x14075FA88 (FopFreeMappingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1407FD8F0 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407FDC5C (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x1407FE050 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407FE21C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407FE37C (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407FE4F0 (FopReadNamingTable.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
    v8 = v1 - qword_1403539B8 - 8;
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
      MmFreePagesFromMdl(v9);
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
