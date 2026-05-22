/*
 * XREFs of ?FlushInteresting@ClickRecognizer@@UEAAXW4GestureType@@@Z @ 0x180038E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ClickRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  if ( (a2 & 2) != 0 )
  {
    result = 65527LL;
    *(_WORD *)(a1 + 16) &= ~8u;
  }
  if ( (a2 & 1) != 0 )
  {
    result = 65531LL;
    *(_WORD *)(a1 + 16) &= ~4u;
  }
  if ( (a2 & 8) != 0 )
  {
    result = 65471LL;
    *(_WORD *)(a1 + 16) &= ~0x40u;
  }
  if ( (a2 & 0x200) != 0 )
  {
    result = 65279LL;
    *(_WORD *)(a1 + 16) &= ~0x100u;
  }
  if ( (a2 & 4) != 0 )
  {
    *(_WORD *)(a1 + 16) &= ~0x10u;
    result = 65503LL;
    *(_WORD *)(a1 + 16) &= ~0x20u;
  }
  return result;
}
