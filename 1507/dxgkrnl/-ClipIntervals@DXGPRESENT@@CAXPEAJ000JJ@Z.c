/*
 * XREFs of ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C01479E8
 * Callers:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C00B22B0 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::ClipIntervals(int *a1, int *a2, int *a3, int *a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d

  if ( *a1 >= *a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 7181LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *a3 >= *a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 7182LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a5 >= a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 7183LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a5 > *a1 )
    *a1 = a5;
  if ( a6 < *a2 )
    *a2 = a6;
  v13 = *a1;
  v14 = a6 - a5;
  if ( *a2 - *a1 != a6 - a5 )
  {
    v15 = *a4 - *a3;
    if ( a5 < v13 )
      *a3 += (v15 * (v13 - a5) + v14 - 1) / v14;
    if ( a6 > *a2 )
      *a4 -= v15 * (a6 - *a2) / v14;
    if ( *a3 == *a4 )
    {
      if ( *a1 - a5 < a6 - *a2 )
        ++*a4;
      else
        --*a3;
    }
  }
}
