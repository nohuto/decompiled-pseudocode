/*
 * XREFs of BgpFwFreeMemory @ 0x14011E4C8
 * Callers:
 *     RaspFreeMemory @ 0x14011E4B4 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14011E928 (BgpFwQueryBootGraphicsInformation.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1406D9C6C (ResFwpPageInBackground.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 *     ResFwpPageOutBackground @ 0x1406DB9AC (ResFwpPageOutBackground.c)
 *     BgpDisplayCharacterGetContext @ 0x1406DC5A0 (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDestroy @ 0x1406DC6A0 (BgpFwLibraryDestroy.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1406DC728 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1406DC910 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1406DC9D4 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1406DCA40 (FopFreeMappingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140787D38 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407880A4 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140788498 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140788664 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407887B4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x14078891C (FopReadNamingTable.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
    v8 = v1 - qword_140305C38 - 8;
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
