/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C010216C
 * Callers:
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C03790D0 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0102254 (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  unsigned int v4; // eax
  __int64 v7; // rcx
  char *v8; // rax
  unsigned int v10; // edi
  void *v11; // rax

  v4 = gcfmffTable;
  if ( gcfmffTable < *a3 )
    goto LABEL_2;
  v10 = gcfmffTable + 32;
  if ( gpfmffTable )
    v11 = (void *)PREALLOCMEM2(gpfmffTable);
  else
    v11 = PALLOCMEM2(v10 << 7, 1179012423LL, 1);
  if ( v11 )
  {
    gpfmffTable = v11;
    *a3 = v10;
    v4 = gcfmffTable;
LABEL_2:
    v7 = v4;
    v8 = (char *)gpfmffTable;
    v7 <<= 7;
    *(_OWORD *)((char *)gpfmffTable + v7) = *a4;
    *(_OWORD *)&v8[v7 + 16] = a4[1];
    *(_OWORD *)&v8[v7 + 32] = a4[2];
    *(_OWORD *)&v8[v7 + 48] = a4[3];
    *(_OWORD *)&v8[v7 + 64] = a4[4];
    *(_OWORD *)&v8[v7 + 80] = a4[5];
    *(_OWORD *)&v8[v7 + 96] = a4[6];
    *(_OWORD *)&v8[v7 + 112] = a4[7];
    ++gcfmffTable;
    return 0LL;
  }
  return 3221225495LL;
}
