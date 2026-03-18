/*
 * XREFs of IsUninterceptable @ 0x1C00A2484
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00A3B48 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
