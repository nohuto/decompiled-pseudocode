/*
 * XREFs of RtlpValidAttributeInfo @ 0x1800E281C
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlpValidAttribute @ 0x1800E2634 (RtlpValidAttribute.c)
 */

char __fastcall RtlpValidAttributeInfo(__int64 a1)
{
  __int64 v3; // rsi
  unsigned int v4; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    while ( RtlpValidAttribute(v3) )
    {
      ++v4;
      v3 += 32LL;
      if ( v4 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
