/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C00F6AB8
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C0378D90 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0102254 (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  __int64 v4; // rax
  _OWORD *v7; // rdx
  __int128 v8; // xmm0
  _OWORD *v9; // rbx
  unsigned int v11; // edi
  void *v12; // rax

  v4 = gcfsTable;
  if ( gcfsTable < *a3 )
    goto LABEL_2;
  v11 = gcfsTable + 32;
  if ( gpfsTable )
    v12 = (void *)PREALLOCMEM2(gpfsTable);
  else
    v12 = PALLOCMEM2(196 * v11, 1651729991LL, 1);
  if ( v12 )
  {
    gpfsTable = v12;
    *a3 = v11;
    v4 = gcfsTable;
LABEL_2:
    v7 = (char *)gpfsTable + 196 * v4;
    *v7 = *a4;
    v7[1] = a4[1];
    v7[2] = a4[2];
    v7[3] = a4[3];
    v7[4] = a4[4];
    v7[5] = a4[5];
    v7[6] = a4[6];
    v7 += 8;
    v8 = a4[7];
    v9 = a4 + 8;
    *(v7 - 1) = v8;
    *v7 = *v9;
    v7[1] = v9[1];
    v7[2] = v9[2];
    v7[3] = v9[3];
    *((_DWORD *)v7 + 16) = *((_DWORD *)v9 + 16);
    ++gcfsTable;
    return 0LL;
  }
  return 3221225495LL;
}
