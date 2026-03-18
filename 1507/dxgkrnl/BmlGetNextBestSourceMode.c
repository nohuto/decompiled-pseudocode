/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C0099080
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     BmlFunctionalizePath @ 0x1C009B4A4 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C000780C (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000822C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     BmlCompareSourceModes @ 0x1C0099310 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0099510 (BmlDoesSourceModeObeyConstraint.c)
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
  __int64 v14; // r12
  __int64 v15; // r15
  _DWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdi
  bool v32; // bp
  int v33; // eax
  __int64 v34; // rbx
  int v35; // r9d
  unsigned int v36; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+70h] [rbp+8h]
  int v45; // [rsp+78h] [rbp+10h]

  v45 = a2;
  v7 = a3;
  if ( !a4 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !a6 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v40);
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
    v41 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v14 = v41;
    if ( !v41 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v7, v41) )
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
  v44 = a4 + 48;
  do
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
    v19[3] = *(unsigned int *)(v18 + 24);
    v19[4] = *(unsigned int *)(v18 + 76);
    v19[5] = *(unsigned int *)(v18 + 80);
    v22 = *(unsigned int *)(v18 + 72);
    v23 = (unsigned int)(v22 - 1);
    if ( (v23 & 0xFFFFFFFC) != 0 || (_DWORD)v22 == 2 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v23, v22, v20, v21);
      WdLogEvent5_WdAssertion(v42);
    }
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v18 + 96));
    v29 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v30 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      v26 = *(int *)(v18 + 96);
      *(_QWORD *)(v30 + 24) = v26;
    }
    v19[6] = v29;
    v19[7] = *(int *)(v18 + 96);
    ++*(_DWORD *)(v15 + a1 + 92);
    if ( v14 == v18 )
      goto LABEL_29;
    if ( (*(_DWORD *)(a1 + 4) & 0x20000) == 0 )
    {
      v26 = *(unsigned int *)(v18 + 76);
      if ( (unsigned int)v26 > *(_DWORD *)(v15 + a1 + 36) )
        goto LABEL_29;
      v26 = *(unsigned int *)(v18 + 80);
      if ( (unsigned int)v26 > *(_DWORD *)(v15 + a1 + 40) )
        goto LABEL_29;
    }
    v31 = *(_QWORD *)(v15 + a1 + 16);
    v26 = *(unsigned int *)(v18 + 72);
    v32 = (*(_DWORD *)v31 & 0x100) == 0;
    if ( *(_BYTE *)(v31 + 116) )
    {
      if ( (unsigned int)(v26 - 3) > 1 )
        goto LABEL_29;
    }
    else if ( (_DWORD)v26 != 1 )
    {
      goto LABEL_29;
    }
    if ( (((_DWORD)v26 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v26 == 2 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v32 && ((v33 = *(_DWORD *)(v18 + 96), v33 < 20) || v33 > 23 && v33 != 32 && v33 != 41)
      || (v25 = 256LL, (*(_DWORD *)v31 & 0x100) != 0)
      && ((v26 = *(unsigned int *)(v31 + 104), (_DWORD)v26) && *(_DWORD *)(v18 + 96) != (_DWORD)v26
       || (*(_DWORD *)(v31 + 4) & 0x100) != 0
       && (*(_DWORD *)(v18 + 76) != *(_DWORD *)(v31 + 84)
        || *(_DWORD *)(v18 + 80) != *(_DWORD *)(v31 + 88)
        || *(_DWORD *)(v18 + 96) != (_DWORD)v26))
      || (v38 = *(_QWORD *)(v15 + a1 + 16), *(_BYTE *)(v38 + 117))
      && (*(_DWORD *)v38 & 0x20000) != 0
      && *(_DWORD *)(v18 + 96) != 21 )
    {
LABEL_29:
      WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      goto LABEL_30;
    }
    ++*(_DWORD *)(v15 + a1 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, v45, v7, v18, (__int64)v16) == 1
      && (!v14 || (unsigned int)BmlCompareSourceModes(a1, v45, v7, v18, v14) == -1) )
    {
      WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
      v16 = (_DWORD *)v18;
    }
LABEL_30:
    v34 = *(_QWORD *)(v18 + 8);
    if ( v34 == v44 )
      v18 = 0LL;
    else
      v18 = v34 - 8;
  }
  while ( v18 );
  if ( v16 )
  {
    v35 = v16[20];
    v36 = v16[19];
    *a6 = v16[6];
    DxgkLogCodePointPacket(0x20u, v7, v36, v35);
    return 0LL;
  }
  return 3223192326LL;
}
