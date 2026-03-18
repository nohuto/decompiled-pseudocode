/*
 * XREFs of sfac_ReadGlyphHorMetrics @ 0x1C0111450
 * Callers:
 *     sfac_ReadGlyphMetrics @ 0x1C0110654 (sfac_ReadGlyphMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DA3E8 (SubstituteHorMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ReadGlyphHorMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // di
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 200);
  result = sfac_GetDataPtr(a1, 0, 0xFFFFFFFF, 7, 1, &v12);
  if ( !(_DWORD)result )
  {
    if ( a2 >= v4 )
    {
      v11 = v12 + 4 * v4;
      if ( v11 + 2LL * (a2 - v4 + 1) > v12 + (unsigned __int64)*(unsigned int *)(a1 + 84) )
        return 5135LL;
      *a3 = __ROR2__(*(_WORD *)(v12 + 4LL * v4 - 4), 8);
      *a4 = __ROR2__(*(_WORD *)(v11 + 2 * (a2 - (unsigned __int64)v4)), 8);
    }
    else
    {
      v10 = v12;
      *a3 = __ROR2__(*(_WORD *)(v12 + 4LL * a2), 8);
      *a4 = __ROR2__(*(_WORD *)(v10 + 4LL * a2 + 2), 8);
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
