/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C017E494
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C009B690 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C002C7B8 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00996E8 (BmlGetModeCategoryForRegion.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0099798 (BmlCompareRegionsWithPivot.c)
 *     BmlIsSupportedSourceMode @ 0x1C017E6CC (BmlIsSupportedSourceMode.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 v6; // di
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
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v30; // [rsp+20h] [rbp-48h]
  char v31; // [rsp+70h] [rbp+8h]
  struct _D3DKMDT_2DREGION v33; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 2228224LL;
  if ( (*a4 & 0x220000) != 0x220000 )
  {
    v10 = WdLogNewEntry5_WdAssertion(2228224LL, a2, a3, a4);
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
    if ( ((a4[30] - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = a4[35];
      v16 = a4[36];
      v31 = 0;
    }
    else
    {
      v15 = a4[36];
      v16 = a4[35];
      v31 = 1;
    }
    v17 = v13 + 6;
    v18 = 104LL * v6;
    v19 = 0LL;
    v33.cy = v16;
    v30 = v18;
    v33.cx = v15;
    if ( (_QWORD *)*v17 == v17 )
      goto LABEL_38;
    NextMode = (const struct DMMVIDPNSOURCEMODE *)(*v17 - 8LL);
    if ( !NextMode )
      goto LABEL_38;
    do
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2, 0LL) )
      {
        v23 = a4[26];
        if ( (!v23 || *((_DWORD *)NextMode + 24) == v23)
          && ((*((_DWORD *)a1 + 1) & 0x20000) != 0
           || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v18 + 36]) != 1) )
        {
          if ( v19 )
          {
            if ( (unsigned int)BmlCompareRegionsWithPivot(
                                 (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                                 (struct _D3DKMDT_2DREGION *)((char *)v19 + 76),
                                 &v33) == 1 )
            {
              if ( *((_DWORD *)v19 + 19) == v15 && *((_DWORD *)v19 + 20) == v16 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v25, v24, v21, v22);
                WdLogEvent5_WdAssertion(v26);
              }
              v19 = NextMode;
            }
            v18 = v30;
          }
          else
          {
            v19 = NextMode;
          }
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode, v21, v22);
    }
    while ( NextMode );
    if ( v19 )
    {
      if ( v31 )
      {
        a4[37] = *((_DWORD *)v19 + 20);
        v27 = *((_DWORD *)v19 + 19);
      }
      else
      {
        a4[37] = *((_DWORD *)v19 + 19);
        v27 = *((_DWORD *)v19 + 20);
      }
      a4[38] = v27;
      v14 = 0;
    }
    else
    {
LABEL_38:
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v14 = -1071774970;
      v28[3] = v15;
      v28[4] = v16;
      v28[5] = a3;
      v28[6] = -1071774970LL;
      WdLogEvent5_WdError(v28);
    }
  }
LABEL_39:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11));
  return v14;
}
