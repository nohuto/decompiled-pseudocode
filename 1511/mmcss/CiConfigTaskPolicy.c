/*
 * XREFs of CiConfigTaskPolicy @ 0x1C000D820
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v1; // r8
  char v2; // r9
  __int64 result; // rax
  __int64 v4; // r8

  *(_BYTE *)(a1 + 3) &= ~1u;
  v1 = *(_BYTE *)(a1 + 3);
  if ( CiSystemResponsiveness == 100 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
  }
  else
  {
    v2 = (v1 >> 4) & 7;
    if ( v2 == 3 )
    {
      *(_BYTE *)a1 = 24;
    }
    else
    {
      *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
      if ( v2 != 2 )
        goto LABEL_5;
    }
    *(_BYTE *)(a1 + 3) = v1 | 1;
  }
LABEL_5:
  result = qword_1C00071F0;
  *(_QWORD *)(a1 + 32) &= qword_1C00071F0;
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    v4 = qword_1C00071F0;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
