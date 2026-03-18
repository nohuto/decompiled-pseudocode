/*
 * XREFs of ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x140206034
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402051DC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402072C0 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPickRandomRegion(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  signed int v3; // r9d
  unsigned int v4; // r11d
  int v5; // r9d
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rsi
  unsigned int v15; // r15d
  int v16; // ecx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // r13d
  unsigned int v21; // ebp
  __int64 v22; // rsi
  int v23; // ebx
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rsi
  unsigned int v28; // r14d
  unsigned int v29; // ecx
  _QWORD *v30; // rcx
  __int64 i; // rax
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned int v36; // esi
  __int64 v37; // rdi
  _QWORD *v38; // r9
  __int64 j; // rax

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 208);
  if ( v2 )
  {
    v4 = -1;
    v5 = -1;
    v6 = 0;
    v7 = (unsigned int)(__rdtsc() >> 4) % v2 + 1;
    while ( v6 < v7 )
    {
      if ( !(unsigned __int8)*(_DWORD *)(v1 + 128) )
      {
        ++v5;
        goto LABEL_26;
      }
      v8 = *(_DWORD *)(v1 + 192);
      v9 = *(_QWORD *)(v1 + 200);
      v10 = v5 + 1 < v8 ? v5 + 1 : 0;
      v11 = v8 - 1;
      if ( (v9 & 4) != 0 )
      {
        v12 = 1LL;
        v13 = 32;
      }
      else
      {
        v12 = 0LL;
        v13 = 0;
      }
      v14 = v9 - 4 * v12;
      while ( 1 )
      {
        v15 = v13 + v11;
        if ( v11 - v10 == -1 )
          goto LABEL_12;
        v17 = (_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)(v13 + v10) >> 6));
        v18 = ((1LL << ((v13 + v10) & 0x3F)) - 1) | ~*v17;
        if ( v18 == -1 )
        {
          while ( (unsigned __int64)++v17 <= v14 + 8 * ((unsigned __int64)v15 >> 6) )
          {
            v18 = ~*v17;
            if ( *v17 )
              goto LABEL_16;
          }
LABEL_12:
          v16 = -1;
          goto LABEL_18;
        }
LABEL_16:
        _BitScanForward64((unsigned __int64 *)&v18, ~v18);
        v16 = v18 + ((unsigned int)(((__int64)v17 - v14) >> 3) << 6);
        if ( v16 > v15 )
          goto LABEL_12;
        if ( v16 != -1 )
          break;
LABEL_18:
        if ( !v10 )
          goto LABEL_23;
        v19 = v5 + 2;
        if ( v5 + 2 > v8 )
          v19 = *(_DWORD *)(v1 + 192);
        v11 = v19 - 1;
        v10 = 0;
      }
      v16 -= v13;
LABEL_23:
      if ( v16 <= v5 )
        v16 = *(_DWORD *)(v1 + 140);
      v5 = v16;
LABEL_26:
      ++v6;
    }
    v20 = 0;
LABEL_28:
    if ( v20 >= 7 )
      return v4;
    if ( !ST_STORE<SM_TRAITS>::StStagingRegionFind(v1, (unsigned int)v5) )
      return (unsigned int)v3;
    if ( !(unsigned __int8)*(_DWORD *)(v1 + 128) )
    {
      v5 = v3 + 1;
      goto LABEL_52;
    }
    v21 = *(_DWORD *)(v1 + 192);
    v22 = *(_QWORD *)(v1 + 200);
    v23 = v3 + 1 < v21 ? v3 + 1 : 0;
    v24 = v21 - 1;
    if ( (v22 & 4) != 0 )
    {
      v25 = 1LL;
      v26 = 32;
    }
    else
    {
      v25 = 0LL;
      v26 = 0;
    }
    v27 = v22 - 4 * v25;
    while ( 1 )
    {
      v28 = v26 + v24;
      if ( v24 - v23 == -1 )
        goto LABEL_37;
      v30 = (_QWORD *)(v27 + 8 * ((unsigned __int64)(unsigned int)(v26 + v23) >> 6));
      for ( i = ((1LL << ((v26 + v23) & 0x3F)) - 1) | ~*v30; i == -1; i = ~*v30 )
      {
        if ( (unsigned __int64)++v30 > v27 + 8 * ((unsigned __int64)v28 >> 6) )
          goto LABEL_37;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v29 = i + ((unsigned int)(((__int64)v30 - v27) >> 3) << 6);
      if ( v29 > v28 )
      {
LABEL_37:
        v29 = v4;
      }
      else if ( v29 != v4 )
      {
        v29 -= v26;
LABEL_49:
        if ( (int)v29 <= v3 )
          v29 = *(_DWORD *)(v1 + 140);
        v5 = v29;
LABEL_52:
        if ( v5 == *(_DWORD *)(v1 + 140) )
        {
          if ( (unsigned __int8)*(_DWORD *)(v1 + 128) )
          {
            v33 = *(_QWORD *)(v1 + 200);
            if ( (v33 & 4) != 0 )
            {
              v34 = 1LL;
              v35 = 32;
            }
            else
            {
              v34 = 0LL;
              v35 = 0;
            }
            v36 = v35 + *(_DWORD *)(v1 + 192) - 1;
            v37 = v33 - 4 * v34;
            if ( !*(_DWORD *)(v1 + 192) )
              goto LABEL_67;
            v38 = (_QWORD *)(v37 + 8 * ((unsigned __int64)v35 >> 6));
            for ( j = ((1LL << (v35 & 0x3F)) - 1) | ~*v38; j == -1; j = ~*v38 )
            {
              if ( (unsigned __int64)++v38 > v37 + 8 * ((unsigned __int64)v36 >> 6) )
                goto LABEL_67;
            }
            _BitScanForward64((unsigned __int64 *)&j, ~j);
            v5 = j + ((unsigned int)(((__int64)v38 - v37) >> 3) << 6);
            if ( v5 > v36 )
              goto LABEL_67;
            if ( v5 != v4 )
              v5 -= v35;
            if ( v5 <= -1 )
LABEL_67:
              v5 = *(_DWORD *)(v1 + 140);
          }
          else
          {
            v5 = 0;
          }
        }
        ++v20;
        goto LABEL_28;
      }
      if ( !v23 )
        goto LABEL_49;
      v32 = v3 + 2;
      if ( v3 + 2 > v21 )
        v32 = *(_DWORD *)(v1 + 192);
      v24 = v4 + v32;
      v23 = 0;
    }
  }
  return (unsigned int)-1;
}
