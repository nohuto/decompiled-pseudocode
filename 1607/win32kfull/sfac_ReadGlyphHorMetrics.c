/*
 * XREFs of sfac_ReadGlyphHorMetrics @ 0x1C001D4D0
 * Callers:
 *     sfac_ReadGlyphMetrics @ 0x1C001C940 (sfac_ReadGlyphMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DDA08 (SubstituteHorMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ReadGlyphHorMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // si
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // edx
  int v12; // r9d
  int v13; // r11d
  __int64 v14; // r8
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 200);
  result = sfac_GetDataPtr(a1, 0, -1, 7, 1, (__int64)&v15);
  if ( !(_DWORD)result )
  {
    if ( a2 >= v4 )
    {
      v12 = a2 - v4;
      v13 = 4 * v4;
      v14 = v15 + v13;
      if ( v14 + 2LL * (v12 + 1) > v15 + (unsigned __int64)*(unsigned int *)(a1 + 84) )
        return 5135LL;
      *a3 = __ROR2__(*(_WORD *)(v13 - 4 + v15), 8);
      *a4 = __ROR2__(*(_WORD *)(v14 + 2LL * v12), 8);
    }
    else
    {
      v10 = v15;
      v11 = 4 * a2;
      *a3 = __ROR2__(*(_WORD *)(v11 + v15), 8);
      *a4 = __ROR2__(*(_WORD *)(v11 + 2 + v10), 8);
    }
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return 0LL;
  }
  return result;
}
