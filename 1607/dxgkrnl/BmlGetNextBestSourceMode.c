/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00BFEF0
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000AE54 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C01A8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C00C01D4 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00C03A4 (BmlDoesSourceModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int16 v7; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  struct _D3DKMDT_2DREGION v14; // r12
  __int64 v15; // r15
  _DWORD *v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rdi
  int v20; // edx
  __int64 v21; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdi
  bool v30; // r14
  __int64 v31; // rbx
  unsigned int v32; // r9d
  unsigned int v33; // r8d
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+70h] [rbp+8h]
  int v43; // [rsp+78h] [rbp+10h]

  v43 = a2;
  v7 = a3;
  if ( !a4 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !a6 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v38);
  }
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a5;
  v14 = 0LL;
  *(_QWORD *)(v9 + 24) = a4;
  *(_QWORD *)(v9 + 32) = a5;
  v15 = 104LL * v7;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v39 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a4 + 24, a5);
    v14 = (struct _D3DKMDT_2DREGION)v39;
    if ( !v39 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v7, v39) )
    {
      WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
      return 3223192336LL;
    }
  }
  v16 = 0LL;
  v17 = (_QWORD *)(a4 + 48);
  *(_DWORD *)(v15 + a1 + 92) = 0;
  *(_DWORD *)(v15 + a1 + 96) = 0;
  if ( (_QWORD *)*v17 == v17 )
    return 3223192326LL;
  v18 = *v17 - 8LL;
  if ( !v18 )
    return 3223192326LL;
  v42 = a4 + 48;
  do
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
    v19[3] = *(unsigned int *)(v18 + 24);
    v19[4] = *(unsigned int *)(v18 + 76);
    v19[5] = *(unsigned int *)(v18 + 80);
    v20 = *(_DWORD *)(v18 + 72);
    v21 = (unsigned int)(v20 - 1);
    if ( (v21 & 0xFFFFFFFC) != 0 || v20 == 2 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v40);
    }
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v18 + 96));
    v27 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v28 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v24 = *(int *)(v18 + 96);
      *(_QWORD *)(v28 + 24) = v24;
    }
    v19[6] = v27;
    v19[7] = *(int *)(v18 + 96);
    ++*(_DWORD *)(v15 + a1 + 92);
    if ( v14 == v18
      || (*(_DWORD *)(a1 + 4) & 0x20000) == 0 && (unsigned int)BmlCompareModeExtents(v18 + 76, v15 + a1 + 36) == 1 )
    {
      goto LABEL_24;
    }
    v29 = *(_QWORD *)(v15 + a1 + 16);
    v24 = *(unsigned int *)(v18 + 72);
    v30 = (*(_DWORD *)v29 & 0x100) == 0;
    if ( *(_BYTE *)(v29 + 120) )
    {
      if ( (unsigned int)(v24 - 3) > 1 )
        goto LABEL_24;
    }
    else if ( (_DWORD)v24 != 1 )
    {
      goto LABEL_24;
    }
    if ( (((_DWORD)v24 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v24 == 2 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v30 && ((v35 = *(_DWORD *)(v18 + 96), v35 < 20) || v35 > 23 && v35 != 32 && v35 != 41)
      || (v23 = 256LL, (*(_DWORD *)v29 & 0x100) != 0)
      && ((v24 = *(unsigned int *)(v29 + 108), (_DWORD)v24) && *(_DWORD *)(v18 + 96) != (_DWORD)v24
       || (*(_DWORD *)(v29 + 4) & 0x100) != 0
       && (*(_DWORD *)(v18 + 76) != *(_DWORD *)(v29 + 88)
        || *(_DWORD *)(v18 + 80) != *(_DWORD *)(v29 + 92)
        || *(_DWORD *)(v18 + 96) != (_DWORD)v24))
      || (v36 = *(_QWORD *)(v15 + a1 + 16), *(_BYTE *)(v36 + 121))
      && (*(_DWORD *)v36 & 0x20000) != 0
      && *(_DWORD *)(v18 + 96) != 21 )
    {
LABEL_24:
      WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      goto LABEL_25;
    }
    ++*(_DWORD *)(v15 + a1 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, v43, v7, v18, (struct _D3DKMDT_2DREGION)v16) == 1
      && (!*(_QWORD *)&v14 || (unsigned int)BmlCompareSourceModes(a1, v43, v7, v18, v14) == -1) )
    {
      WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
      v16 = (_DWORD *)v18;
    }
LABEL_25:
    v31 = *(_QWORD *)(v18 + 8);
    if ( v31 == v42 )
      v18 = 0LL;
    else
      v18 = v31 - 8;
  }
  while ( v18 );
  if ( v16 )
  {
    v32 = v16[20];
    v33 = v16[19];
    *a6 = v16[6];
    DxgkLogCodePointPacket(0x20u, v7, v33, v32);
    return 0LL;
  }
  return 3223192326LL;
}
