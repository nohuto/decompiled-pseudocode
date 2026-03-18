/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C028F280
 * Callers:
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C037F480 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C01306FC (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  unsigned int v4; // eax
  unsigned int v7; // edi
  void *v8; // rax
  __int64 v9; // rcx
  char *v10; // rax

  v4 = gcfmffTable;
  if ( gcfmffTable < *a3 )
    goto LABEL_7;
  v7 = gcfmffTable + 32;
  if ( gpfmffTable )
    v8 = PREALLOCMEM2(gpfmffTable, gcfmffTable << 7, v7 << 7, 0x46464D47u);
  else
    v8 = PALLOCMEM2(v7 << 7, 1179012423LL, 1);
  if ( v8 )
  {
    gpfmffTable = v8;
    *a3 = v7;
    v4 = gcfmffTable;
LABEL_7:
    v9 = v4;
    v10 = (char *)gpfmffTable;
    v9 <<= 7;
    *(_OWORD *)((char *)gpfmffTable + v9) = *a4;
    *(_OWORD *)&v10[v9 + 16] = a4[1];
    *(_OWORD *)&v10[v9 + 32] = a4[2];
    *(_OWORD *)&v10[v9 + 48] = a4[3];
    *(_OWORD *)&v10[v9 + 64] = a4[4];
    *(_OWORD *)&v10[v9 + 80] = a4[5];
    *(_OWORD *)&v10[v9 + 96] = a4[6];
    *(_OWORD *)&v10[v9 + 112] = a4[7];
    ++gcfmffTable;
    return 0LL;
  }
  return 3221225495LL;
}
