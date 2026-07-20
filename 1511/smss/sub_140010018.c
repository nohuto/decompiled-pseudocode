/*
 * XREFs of sub_140010018 @ 0x140010018
 * Callers:
 *     sub_14000FE88 @ 0x14000FE88 (sub_14000FE88.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140010018(unsigned __int64 a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x40; ++i )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return 1LL << i;
}
