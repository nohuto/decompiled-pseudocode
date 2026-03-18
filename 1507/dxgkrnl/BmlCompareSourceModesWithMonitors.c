/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C00995C4
 * Callers:
 *     BmlCompareSourceModes @ 0x1C0099310 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C0008624 (--$DIFF@H@@YAHHH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00996E8 (BmlGetModeCategoryForRegion.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0099764 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C009ABE8 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00B0A68 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int ModeCategoryForRegion; // eax
  unsigned int v11; // r11d
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // r11d
  int v20; // r11d
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // edi
  int ScaledAspectRatio; // eax
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int v27; // eax

  v6 = (unsigned __int16)a2;
  v8 = 104LL * (unsigned __int16)a2;
  v9 = a1 + v8;
  if ( *(_DWORD *)(a1 + v8 + 36) && *(_DWORD *)(v9 + 40) )
  {
    BmlGetModeCategoryForRegion(a5 + 76, v9 + 36);
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(a4 + 76, v9 + 36);
    result = BmlCompareValues<unsigned int>(ModeCategoryForRegion, v11);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v21[3] = a1;
    v21[4] = v6;
    v21[5] = *(unsigned int *)(v9 + 36);
    v21[6] = *(unsigned int *)(v9 + 40);
    WdLogEvent5_WdWarning(v21);
  }
  v17 = a1 + v8;
  if ( !*(_DWORD *)(a1 + v8 + 52) || !*(_DWORD *)(v17 + 56) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v22[3] = a1;
    v22[4] = v6;
    v22[5] = *(unsigned int *)(v17 + 52);
    v22[6] = *(unsigned int *)(v17 + 56);
    WdLogEvent5_WdWarning(v22);
    return 0LL;
  }
  BmlGetModeCategoryForRegion(a4 + 76, v17 + 52);
  v18 = BmlGetModeCategoryForRegion(a5 + 76, v17 + 52);
  result = BmlCompareValues<unsigned int>(v19, v18);
  if ( !(_DWORD)result )
  {
    if ( v20 == 3 )
    {
      v23 = *(_DWORD *)(a1 + v8 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
      v25 = DIFF<int>(ScaledAspectRatio, v23);
      v26 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76));
      v27 = DIFF<int>(v26, v23);
      return BmlCompareValues<int>(v27, v25);
    }
    return 0LL;
  }
  return result;
}
