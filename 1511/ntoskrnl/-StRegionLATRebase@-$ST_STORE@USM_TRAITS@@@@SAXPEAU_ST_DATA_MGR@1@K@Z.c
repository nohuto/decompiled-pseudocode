/*
 * XREFs of ?StRegionLATRebase@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140207154
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14010F674 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StRegionLATRebase(__int64 a1, unsigned int a2)
{
  int v3; // r10d
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rsi
  unsigned int v12; // r14d
  int v13; // ecx
  _QWORD *v14; // rcx
  int v15; // ecx
  _BYTE *v16; // rax
  unsigned int v17; // ecx

  *(_DWORD *)(a1 + 496) -= a2;
  v3 = -1;
  while ( 2 )
  {
    result = *(unsigned int *)(a1 + 128);
    if ( !(_BYTE)result )
    {
      ++v3;
      goto LABEL_24;
    }
    v5 = *(_DWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 200);
    v7 = v3 + 1 < v5 ? v3 + 1 : 0;
    v8 = v5 - 1;
    if ( (v6 & 4) != 0 )
    {
      v9 = 1LL;
      v10 = 32;
    }
    else
    {
      v9 = 0LL;
      v10 = 0;
    }
    v11 = v6 - 4 * v9;
    while ( 1 )
    {
      v12 = v10 + v8;
      result = v8 - v7 + 1;
      if ( v8 - v7 == -1 )
        goto LABEL_9;
      v14 = (_QWORD *)(v11 + 8 * ((unsigned __int64)(unsigned int)(v10 + v7) >> 6));
      for ( result = ((1LL << ((v10 + v7) & 0x3F)) - 1) | ~*v14; result == -1; result = ~*v14 )
      {
        if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~result);
      v13 = result + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
      if ( v13 > v12 )
      {
LABEL_9:
        v13 = -1;
        goto LABEL_16;
      }
      if ( v13 != -1 )
        break;
LABEL_16:
      if ( !v7 )
        goto LABEL_21;
      v15 = v3 + 2;
      if ( v3 + 2 > v5 )
        v15 = *(_DWORD *)(a1 + 192);
      v8 = v15 - 1;
      v7 = 0;
    }
    v13 -= v10;
LABEL_21:
    if ( v13 <= v3 )
      v13 = *(_DWORD *)(a1 + 140);
    v3 = v13;
LABEL_24:
    if ( v3 != *(_DWORD *)(a1 + 140) )
    {
      v16 = (_BYTE *)(*(_QWORD *)(a1 + 488) + (unsigned int)v3);
      v17 = (unsigned __int8)*v16;
      if ( v17 > HIWORD(a2) )
        *v16 = v17 - BYTE2(a2);
      else
        *v16 = 0;
      continue;
    }
    return result;
  }
}
