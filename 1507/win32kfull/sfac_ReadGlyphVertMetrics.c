/*
 * XREFs of sfac_ReadGlyphVertMetrics @ 0x1C0110A74
 * Callers:
 *     sfac_ReadGlyphMetrics @ 0x1C0110654 (sfac_ReadGlyphMetrics.c)
 *     SubstituteVertMetrics @ 0x1C01109CC (SubstituteVertMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 *     sfac_ReadGlyphBbox @ 0x1C00B6EE0 (sfac_ReadGlyphBbox.c)
 */

__int64 __fastcall sfac_ReadGlyphVertMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // si
  __int64 v5; // r10
  unsigned int v10; // r8d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 202);
  v5 = 0LL;
  v13 = 0LL;
  if ( a2 < v4 )
    v10 = 4 * a2 + 4;
  else
    v10 = 2 * (a2 + v4) + 2;
  if ( *(_DWORD *)(a1 + 204) )
  {
    result = sfac_GetDataPtr(a1, 0, v10, 20, 0, &v13);
    if ( (_DWORD)result )
      return result;
    v5 = v13;
  }
  if ( *(_DWORD *)(a1 + 204) && v5 )
  {
    if ( a2 >= v4 )
    {
      v12 = 4LL * v4;
      *a3 = __ROR2__(*(_WORD *)(v12 + v5 - 4), 8);
      *a4 = __ROR2__(*(_WORD *)(v12 + 2 * (a2 - (unsigned __int64)v4) + v5), 8);
    }
    else
    {
      *a3 = __ROR2__(*(_WORD *)(v5 + 4LL * a2), 8);
      *a4 = __ROR2__(*(_WORD *)(v5 + 4LL * a2 + 2), 8);
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
    result = sfac_ReadGlyphBbox(a1, *(_WORD *)(a1 + 216), &v13);
    if ( (_DWORD)result )
      return result;
    *a3 = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *a4 = *(_WORD *)(a1 + 224) - HIWORD(v13);
  }
  return 0LL;
}
