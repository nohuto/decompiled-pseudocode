/*
 * XREFs of BgpFwAllocateMemory @ 0x14011E344
 * Callers:
 *     BgpRasPrintGlyph @ 0x14011C50C (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x14011E308 (RaspAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14011E928 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x140137CB8 (BcpGetProgressMessages.c)
 *     ResFwpPageInBackground @ 0x1406D9C6C (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x1406DB6E0 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x1406DB7C0 (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x1406DB860 (BgpTxtGetRegionContext.c)
 *     BgpDisplayCharacterGetContext @ 0x1406DC5A0 (BgpDisplayCharacterGetContext.c)
 *     BgpBcInitializeCriticalMode @ 0x140787D38 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407880A4 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140788198 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x140788498 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140788664 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407887B4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x14078891C (FopReadNamingTable.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x1400BC654 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x14011E580 (BgpFwReserveAllocate.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(SIZE_T a1)
{
  char *v1; // rdi
  struct _MDL *v2; // rbx
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
  if ( (dword_1402D4BB0 & 0x800) == 0 )
  {
    v1 = 0LL;
    v2 = 0LL;
    if ( (dword_1402D4BB0 & 0x8000) != 0 )
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
          v9 = qword_1402D4C50;
          v10 = v1 - 40;
          *(_QWORD *)v10 = qword_1402D4C50;
          *((_QWORD *)v10 + 1) = &qword_1402D4C50;
          if ( *(__int64 **)(v9 + 8) != &qword_1402D4C50 )
            __fastfail(3u);
          *(_QWORD *)(v9 + 8) = v10;
          qword_1402D4C50 = (__int64)(v1 - 40);
        }
        *((_DWORD *)v1 - 6) = v5;
        *((_QWORD *)v1 - 2) = v7;
        *((_QWORD *)v1 - 1) = v2;
        if ( !v1 )
        {
LABEL_23:
          if ( v2 )
          {
            MmFreePagesFromMdl(v2);
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
