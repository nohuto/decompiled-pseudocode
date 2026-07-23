/*
 * XREFs of CmpIsValueTombstone @ 0x1404CD800
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(a1 + 144) & 0x80000) != 0 )
    return (*(unsigned __int8 *)(a2 + 16) >> 1) & 1;
  else
    LOBYTE(v2) = 0;
  return v2;
}
