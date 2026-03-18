/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00BCEAC (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0034958 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00BFE9C (BmlGetModeCategoryForRegion.c)
 *     BmlIsSupportedSourceMode @ 0x1C00C0410 (BmlIsSupportedSourceMode.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C04D4 (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // ebx
  UINT v15; // r15d
  UINT v16; // r14d
  _QWORD *v17; // rbp
  __int64 v18; // r12
  const struct DMMVIDPNSOURCEMODE *v19; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v27; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+70h] [rbp+8h]
  struct _D3DKMDT_2DREGION v30; // [rsp+88h] [rbp+20h] BYREF

  if ( !a1 || a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 2228224LL;
  if ( (*a4 & 0x220000) != 0x220000 )
  {
    v10 = WdLogNewEntry5_WdAssertion(2228224LL);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a3 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v13 = 0LL;
LABEL_11:
    v14 = -1071774968;
    goto LABEL_39;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD **)(v11 + 104);
  if ( !v13 )
    goto LABEL_11;
  if ( (_QWORD *)v13[6] == v13 + 6 )
  {
    v14 = -1071774970;
  }
  else
  {
    if ( ((a4[31] - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = a4[36];
      v16 = a4[37];
      v28 = 0;
    }
    else
    {
      v15 = a4[37];
      v16 = a4[36];
      v28 = 1;
    }
    v17 = v13 + 6;
    v18 = 104LL * a2;
    v19 = 0LL;
    v30.cy = v16;
    v27 = v18;
    v30.cx = v15;
    if ( (_QWORD *)*v17 == v17 )
      goto LABEL_38;
    NextMode = (const struct DMMVIDPNSOURCEMODE *)(*v17 - 8LL);
    if ( !NextMode )
      goto LABEL_38;
    do
    {
      if ( BmlIsSupportedSourceMode((__int64)NextMode, 1, 0) )
      {
        v21 = a4[27];
        if ( (!v21 || *((_DWORD *)NextMode + 24) == v21)
          && ((*((_DWORD *)a1 + 1) & 0x20000) != 0
           || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v18 + 36]) != 1) )
        {
          if ( v19 )
          {
            if ( (unsigned int)BmlCompareRegionsWithPivot(
                                 (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                                 (struct _D3DKMDT_2DREGION *)((char *)v19 + 76),
                                 &v30) == 1 )
            {
              if ( *((_DWORD *)v19 + 19) == v15 && *((_DWORD *)v19 + 20) == v16 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v22);
                WdLogEvent5_WdAssertion(v23);
              }
              v19 = NextMode;
            }
            v18 = v27;
          }
          else
          {
            v19 = NextMode;
          }
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
    }
    while ( NextMode );
    if ( v19 )
    {
      if ( v28 )
      {
        a4[38] = *((_DWORD *)v19 + 20);
        v24 = *((_DWORD *)v19 + 19);
      }
      else
      {
        a4[38] = *((_DWORD *)v19 + 19);
        v24 = *((_DWORD *)v19 + 20);
      }
      a4[39] = v24;
      v14 = 0;
    }
    else
    {
LABEL_38:
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v14 = -1071774970;
      v25[3] = v15;
      v25[4] = v16;
      v25[5] = a3;
      v25[6] = -1071774970LL;
      WdLogEvent5_WdError(v25);
    }
  }
LABEL_39:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11));
  return v14;
}
