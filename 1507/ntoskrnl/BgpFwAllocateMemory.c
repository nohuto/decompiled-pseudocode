/*
 * XREFs of BgpFwAllocateMemory @ 0x1401525C4
 * Callers:
 *     BgpRasPrintGlyph @ 0x14015078C (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x140152588 (RaspAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140152BA8 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x1401664BC (BcpGetProgressMessages.c)
 *     ResFwpPageInBackground @ 0x14075CCB4 (ResFwpPageInBackground.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x14075E728 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x14075E808 (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x14075E8A8 (BgpTxtGetRegionContext.c)
 *     BgpDisplayCharacterGetContext @ 0x14075F5E8 (BgpDisplayCharacterGetContext.c)
 *     BgpBcInitializeCriticalMode @ 0x1407FD8F0 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407FDC5C (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1407FDD50 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x1407FE050 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407FE21C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407FE37C (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407FE4F0 (FopReadNamingTable.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140076D2C (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     BgpFwReserveAllocate @ 0x140152800 (BgpFwReserveAllocate.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  if ( (dword_140323CF0 & 0x800) == 0 )
  {
    v1 = 0LL;
    v2 = 0LL;
    if ( (dword_140323CF0 & 0x8000) != 0 )
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
          v9 = qword_140323D90;
          v10 = v1 - 40;
          *(_QWORD *)v10 = qword_140323D90;
          *((_QWORD *)v10 + 1) = &qword_140323D90;
          if ( *(__int64 **)(v9 + 8) != &qword_140323D90 )
            __fastfail(3u);
          *(_QWORD *)(v9 + 8) = v10;
          qword_140323D90 = (__int64)(v1 - 40);
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
