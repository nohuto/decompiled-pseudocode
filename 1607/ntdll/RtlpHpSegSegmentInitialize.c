/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x18007FB28
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r9d
  _BYTE *v4; // r8

  *(_BYTE *)(a1 + 91) = -2;
  *(_BYTE *)(a1 + 88) |= 8u;
  if ( a2 )
  {
    v3 = a2 - 1;
    *(_BYTE *)(a1 + 88) |= 2u;
    if ( a2 != 1 )
    {
      v4 = (_BYTE *)(a1 + 120);
      do
      {
        *v4 |= 2u;
        v4 += 32;
        --v3;
      }
      while ( v3 );
    }
  }
  result = a1;
  *(_BYTE *)(a1 + 90) = ~(_BYTE)a2;
  *(_BYTE *)(a1 + 8187) = -2;
  *(_DWORD *)(a1 + 64) = -857879331;
  return result;
}
