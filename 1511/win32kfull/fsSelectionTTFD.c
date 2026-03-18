/*
 * XREFs of fsSelectionTTFD @ 0x1C0012700
 * Callers:
 *     bComputeIFISIZE @ 0x1C00120E4 (bComputeIFISIZE.c)
 *     vFill_IFIMETRICS @ 0x1C00130A4 (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall fsSelectionTTFD(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int16 result; // ax
  __int64 v4; // r8
  char v5; // cl

  v2 = *(unsigned int *)(a2 + 64);
  result = 0;
  if ( (_DWORD)v2 )
    v4 = a1 + v2;
  else
    v4 = 0LL;
  if ( v4 )
    return __ROR2__(*(_WORD *)(v4 + 62), 8);
  v5 = __ROR2__(*(_WORD *)(a1 + *(unsigned int *)(a2 + 16) + 44), 8);
  if ( (v5 & 1) != 0 )
    result = 32;
  if ( (v5 & 2) != 0 )
    return result | 1;
  return result;
}
