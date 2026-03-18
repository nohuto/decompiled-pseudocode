/*
 * XREFs of sub_1C00A0A40 @ 0x1C00A0A40
 * Callers:
 *     sub_1C00A7898 @ 0x1C00A7898 (sub_1C00A7898.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00087A8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000BA48 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     sub_1C00A0C4C @ 0x1C00A0C4C (sub_1C00A0C4C.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00A0D14 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     sub_1C00A0D40 @ 0x1C00A0D40 (sub_1C00A0D40.c)
 */

__int64 __fastcall sub_1C00A0A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  unsigned __int16 v7; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // r9d
  unsigned int v31; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+70h] [rbp+8h]
  int v38; // [rsp+78h] [rbp+10h]

  v38 = a2;
  v7 = a3;
  if ( !a4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a6 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v35);
  }
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a5;
  v14 = 0LL;
  *(_QWORD *)(v9 + 24) = a4;
  *(_QWORD *)(v9 + 32) = a5;
  v15 = 104LL * v7;
  *a6 = -1;
  if ( a5 == -1
    || (v14 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a4 + 24, a5)) != 0 && (unsigned __int8)sub_1C00A0C4C(a1, v7) )
  {
    v16 = 0LL;
    v17 = (_QWORD *)(a4 + 48);
    *(_DWORD *)(v15 + a1 + 92) = 0;
    *(_DWORD *)(v15 + a1 + 96) = 0;
    if ( (_QWORD *)*v17 == v17 )
      return 3223192326LL;
    v18 = *v17 - 8LL;
    if ( !v18 )
      return 3223192326LL;
    v37 = a4 + 48;
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
        v36 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v36);
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
        || (*(_DWORD *)(a1 + 4) & 0x20000) == 0 && (unsigned int)BmlCompareModeExtents(v18 + 76, v15 + a1 + 36) == 1
        || !(unsigned __int8)sub_1C00A0C4C(a1, v7)
        || (v33 = *(_QWORD *)(v15 + a1 + 16), *(_BYTE *)(v33 + 117))
        && (*(_DWORD *)v33 & 0x20000) != 0
        && *(_DWORD *)(v18 + 96) != 21 )
      {
        WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      }
      else
      {
        ++*(_DWORD *)(v15 + a1 + 96);
        if ( (unsigned int)sub_1C00A0D40(a1, v38, v7, v18, (__int64)v16) == 1
          && (!v14 || (unsigned int)sub_1C00A0D40(a1, v38, v7, v18, v14) == -1) )
        {
          WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
          v16 = (_DWORD *)v18;
        }
      }
      v29 = *(_QWORD *)(v18 + 8);
      if ( v29 == v37 )
        v18 = 0LL;
      else
        v18 = v29 - 8;
    }
    while ( v18 );
    if ( v16 )
    {
      v30 = v16[20];
      v31 = v16[19];
      *a6 = v16[6];
      DxgkLogCodePointPacket(0x20u, v7, v31, v30);
      return 0LL;
    }
    else
    {
      return 3223192326LL;
    }
  }
  else
  {
    WdLogNewEntry5_WdTrace(v10, v13, v11, v12);
    return 3223192336LL;
  }
}
