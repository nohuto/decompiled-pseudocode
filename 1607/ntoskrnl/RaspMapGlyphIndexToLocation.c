/*
 * XREFs of RaspMapGlyphIndexToLocation @ 0x140128FE0
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14012842C (RaspGetUnscaledGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14023A9B8 (RaspGetCompositeGlyphList.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140129078 (FioFwReadUshortAtOffset.c)
 *     FioFwReadUlongAtOffset @ 0x1401463F8 (FioFwReadUlongAtOffset.c)
 */

__int64 __fastcall RaspMapGlyphIndexToLocation(__int64 a1, int a2, int *a3)
{
  __int16 v5; // ax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v5 = *(_WORD *)(a1 + 76);
  if ( !v5 )
  {
    v6 = (unsigned int)(*(_DWORD *)(a1 + 72) + 2 * a2);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v6, &v12);
    if ( (int)result < 0 )
      return result;
    v8 = *(_QWORD *)(a1 + 16);
    *a3 = 2 * (unsigned __int16)v12;
    result = FioFwReadUshortAtOffset(*(_QWORD *)(v8 + 16), (unsigned int)(v6 + 2), &v12);
    if ( (int)result < 0 )
      return result;
    v9 = 2 * (unsigned __int16)v12;
    goto LABEL_6;
  }
  if ( v5 != 1 )
    return 3221225595LL;
  v10 = (unsigned int)(*(_DWORD *)(a1 + 72) + 4 * a2);
  result = FioFwReadUlongAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v10, &v12);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    *a3 = v12;
    result = FioFwReadUlongAtOffset(*(_QWORD *)(v11 + 16), (unsigned int)(v10 + 4), &v12);
    if ( (int)result >= 0 )
    {
      v9 = v12;
LABEL_6:
      if ( *a3 == v9 )
        *a3 = -1;
      return 0LL;
    }
  }
  return result;
}
