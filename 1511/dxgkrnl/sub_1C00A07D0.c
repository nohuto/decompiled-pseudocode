/*
 * XREFs of sub_1C00A07D0 @ 0x1C00A07D0
 * Callers:
 *     sub_1C00A0D40 @ 0x1C00A0D40 (sub_1C00A0D40.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000CD98 (--$DIFF@H@@YAHHH@Z.c)
 *     sub_1C00A0948 @ 0x1C00A0948 (sub_1C00A0948.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00A1AC0 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00A8810 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00C54D4 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall sub_1C00A07D0(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  bool v7; // r15
  __int64 v8; // rdx
  char v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  int v30; // edi
  int ScaledAspectRatio; // eax
  unsigned int v32; // ebx
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // [rsp+60h] [rbp+8h]
  __int64 v36; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = 0;
  v8 = 104LL * a2;
  v9 = 0;
  v36 = v6;
  v35 = v8;
  v11 = v8 + a1;
  v12 = *(unsigned int *)(v8 + a1 + 52);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(v11 + 56);
    if ( v13 )
    {
      v9 = 1;
      v7 = *(_DWORD *)(a4 + 76) == (_DWORD)v12 && *(_DWORD *)(a4 + 80) == v13;
      if ( *(_DWORD *)(a5 + 76) != (_DWORD)v12 || *(_DWORD *)(a5 + 80) != v13 )
        v9 = 0;
    }
  }
  v14 = v8 + a1;
  if ( *(_DWORD *)(v8 + a1 + 36) && *(_DWORD *)(v14 + 40) )
  {
    LOBYTE(a3) = v9;
    v15 = sub_1C00A0948(a5 + 76, v14 + 36, a3);
    LOBYTE(v16) = v7;
    v17 = v15;
    v18 = sub_1C00A0948(a4 + 76, v14 + 36, v16);
    result = BmlCompareValues<unsigned int>(v18, v17);
    if ( (_DWORD)result )
      return result;
    v6 = v36;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v8, a3, a4);
    v28[3] = a1;
    v28[4] = v6;
    v28[5] = *(unsigned int *)(v14 + 36);
    v28[6] = *(unsigned int *)(v14 + 40);
    WdLogEvent5_WdWarning(v28);
  }
  if ( !*(_DWORD *)(v11 + 52) || !*(_DWORD *)(v11 + 56) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v29[3] = a1;
    v29[4] = v6;
    v29[5] = *(unsigned int *)(v11 + 52);
    v29[6] = *(unsigned int *)(v11 + 56);
    WdLogEvent5_WdWarning(v29);
    return 0LL;
  }
  LOBYTE(v22) = v7;
  v24 = sub_1C00A0948(a4 + 76, v11 + 52, v22);
  LOBYTE(v25) = v9;
  v26 = v24;
  v27 = sub_1C00A0948(a5 + 76, v11 + 52, v25);
  result = BmlCompareValues<unsigned int>(v26, v27);
  if ( !(_DWORD)result )
  {
    if ( v26 == 3 )
    {
      v30 = *(_DWORD *)(v35 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
      v32 = DIFF<int>(ScaledAspectRatio, v30);
      v33 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76));
      v34 = DIFF<int>(v33, v30);
      return BmlCompareValues<int>(v34, v32);
    }
    return 0LL;
  }
  return result;
}
