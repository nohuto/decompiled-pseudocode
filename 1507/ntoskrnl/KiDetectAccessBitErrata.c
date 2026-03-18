/*
 * XREFs of KiDetectAccessBitErrata @ 0x1403F8AFC
 * Callers:
 *     KiSetFeatureBits @ 0x1403F80E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDetectAccessBitErrata(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 1597) == 2 && *(_BYTE *)(a1 + 1520) == 6 )
  {
    if ( (LOBYTE(a2) = *(_BYTE *)(a1 + 1523), (unsigned __int8)a2 <= 0x36u)
      && (v2 = 0x6000C010000000LL, _bittest64(&v2, a2))
      || (LOBYTE(a2) = a2 - 55, (unsigned __int8)a2 <= 0x16u)
      && (result = 4718593LL, _bittest((const int *)&result, a2))
      && *(_BYTE *)(a1 + 1522) <= 7u )
    {
      KiAccessBitErrata = 1;
    }
  }
  return result;
}
