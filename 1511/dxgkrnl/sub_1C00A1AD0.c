/*
 * XREFs of sub_1C00A1AD0 @ 0x1C00A1AD0
 * Callers:
 *     sub_1C00A099C @ 0x1C00A099C (sub_1C00A099C.c)
 *     sub_1C00A6D34 @ 0x1C00A6D34 (sub_1C00A6D34.c)
 *     sub_1C00A6E28 @ 0x1C00A6E28 (sub_1C00A6E28.c)
 *     sub_1C01828D8 @ 0x1C01828D8 (sub_1C01828D8.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000CD98 (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00A8810 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00C54D4 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall sub_1C00A1AD0(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  unsigned __int64 v5; // r9
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ecx
  int ScaledAspectRatio; // edi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax

  v5 = a3->cx * (unsigned __int64)a3->cy;
  v6 = 0;
  v7 = a2->cx * (unsigned __int64)a2->cy - v5;
  v8 = a1->cx * (unsigned __int64)a1->cy - v5;
  if ( v8 < 0 )
    v8 = v5 - a1->cx * (unsigned __int64)a1->cy;
  if ( v7 < 0 )
    v7 = v5 - a2->cx * (unsigned __int64)a2->cy;
  if ( v7 == v8 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3);
    v12 = BmlGetScaledAspectRatio(a1);
    v13 = DIFF<int>(v12, ScaledAspectRatio);
    v14 = BmlGetScaledAspectRatio(a2);
    v15 = DIFF<int>(v14, ScaledAspectRatio);
    return BmlCompareValues<int>(v15, v13);
  }
  else
  {
    v9 = 1;
    if ( v7 <= v8 )
    {
      LOBYTE(v6) = v7 >= v8;
      return (unsigned int)(v6 - 1);
    }
    return v9;
  }
}
