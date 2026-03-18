/*
 * XREFs of sfac_ReadGlyphHorMetrics @ 0x1C00A16D4
 * Callers:
 *     sfac_ReadGlyphMetrics @ 0x1C00A1768 (sfac_ReadGlyphMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DAE9C (SubstituteHorMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ReadGlyphHorMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // di
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 200);
  result = sfac_GetDataPtr(a1, 0, -1, 7, 1, (__int64)&v13);
  if ( !(_DWORD)result )
  {
    if ( a2 >= v4 )
    {
      v11 = v13;
      v12 = 4LL * v4;
      *a3 = __ROR2__(*(_WORD *)(v12 + v13 - 4), 8);
      *a4 = __ROR2__(*(_WORD *)(v12 + 2 * (a2 - (unsigned __int64)v4) + v11), 8);
    }
    else
    {
      v10 = v13;
      *a3 = __ROR2__(*(_WORD *)(v13 + 4LL * a2), 8);
      *a4 = __ROR2__(*(_WORD *)(v10 + 4LL * a2 + 2), 8);
    }
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return 0LL;
  }
  return result;
}
