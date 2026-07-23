/*
 * XREFs of BgpFwAllocateMemory @ 0x140129A78
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14012A060 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x1401417C0 (BcpGetProgressMessages.c)
 *     ResFwpPageInBackground @ 0x140725B0C (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x1407275FC (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x140727920 (BgpTxtGetRegionContext.c)
 *     BgpConsoleInitialize @ 0x140728460 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140728670 (BgpDisplayCharacterGetContext.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407D42D4 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1407D43C8 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407D4894 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407D49E4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407D4B64 (FopReadNamingTable.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1400A8990 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     BgpFwReserveAllocate @ 0x140129CB8 (BgpFwReserveAllocate.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(SIZE_T a1)
{
  char *v1; // rdi
  PMDL v2; // rbx
  char v3; // r14
  unsigned int v4; // eax
  ULONG v5; // ebp
  __int64 v6; // r15
  SIZE_T v7; // rsi
  char *PoolWithTag; // rax
  __int64 v9; // rcx
  char *v10; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_1402F9F90 & 0x800) == 0 )
  {
    v1 = 0LL;
    v2 = 0LL;
    if ( (dword_1402F9F90 & 0x8000) != 0 )
    {
      v3 = 1;
      v4 = 48;
      v5 = 1262634818;
    }
    else
    {
      v3 = 0;
      v5 = 1263093570;
      v4 = 32;
    }
    v6 = v4;
    v7 = v4 + a1;
    if ( v7 >= a1 && v7 < 0xFFFFEFFF )
    {
      if ( v7 < 0x1000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, v5);
LABEL_9:
        if ( !PoolWithTag )
          goto LABEL_23;
        v1 = &PoolWithTag[v6];
        if ( v3 )
        {
          v9 = qword_1402FA050;
          v10 = v1 - 40;
          if ( *(__int64 **)(qword_1402FA050 + 8) != &qword_1402FA050 )
            __fastfail(3u);
          *(_QWORD *)v10 = qword_1402FA050;
          *((_QWORD *)v10 + 1) = &qword_1402FA050;
          *(_QWORD *)(v9 + 8) = v10;
          qword_1402FA050 = (__int64)(v1 - 40);
        }
        *((_DWORD *)v1 - 6) = v5;
        *((_QWORD *)v1 - 2) = v7;
        *((_QWORD *)v1 - 1) = v2;
        if ( !v1 )
        {
LABEL_23:
          if ( v2 )
          {
            MiFreePagesFromMdl((ULONG_PTR)v2, 0);
            ExFreePoolWithTag(v2, 0);
          }
        }
        return (__int64)v1;
      }
      v7 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v7, MmCached, 5u);
      v2 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
        else
          PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_9;
      }
    }
    return (__int64)v1;
  }
  return BgpFwReserveAllocate();
}
