/*
 * XREFs of RtlpAddRange @ 0x1405A009C
 * Callers:
 *     RtlAddRange @ 0x1405A0000 (RtlAddRange.c)
 *     RtlpDeleteFromMergedRange @ 0x1405C4B74 (RtlpDeleteFromMergedRange.c)
 *     RtlMergeRangeLists @ 0x1406C767C (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpAddIntersectingRanges @ 0x1405A0754 (RtlpAddIntersectingRanges.c)
 */

__int64 __fastcall RtlpAddRange(unsigned __int64 *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // r9
  __int64 **v7; // rdx
  __int64 *v8; // rax
  unsigned __int64 *i; // rdx
  unsigned __int64 v11; // rax
  bool v12; // cf
  __int64 *v13; // rdx
  __int64 v14; // rcx

  *((_BYTE *)a2 + 33) &= ~2u;
  v4 = a2[1];
  v5 = 0;
  v6 = *a2;
  if ( (unsigned __int64 *)*a1 != a1 && v6 <= *(_QWORD *)(a1[1] - 32) )
  {
    for ( i = (unsigned __int64 *)(*a1 - 40); a1 != i + 5; i = (unsigned __int64 *)(i[5] - 40) )
    {
      v11 = *i;
      if ( v4 < *i )
      {
        v13 = (__int64 *)i[6];
        v14 = *v13;
        a2[5] = *v13;
        a2[6] = (__int64)v13;
        *(_QWORD *)(v14 + 8) = a2 + 5;
        *v13 = (__int64)(a2 + 5);
        return v5;
      }
      v12 = v11 < v6;
      if ( v11 > v6 )
      {
        if ( v4 < v11 )
          continue;
        v12 = v11 < v6;
      }
      if ( !v12 || i[1] >= v6 )
        return (unsigned int)RtlpAddIntersectingRanges(a1, i, a2, a3);
    }
  }
  v7 = (__int64 **)a1[1];
  v8 = a2 + 5;
  a2[5] = (__int64)a1;
  a2[6] = (__int64)v7;
  if ( *v7 != (__int64 *)a1 )
    __fastfail(3u);
  *v7 = v8;
  a1[1] = (unsigned __int64)v8;
  return v5;
}
