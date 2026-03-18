/*
 * XREFs of BgkDrawText @ 0x1407611CC
 * Callers:
 *     NtDrawText @ 0x140262F7C (NtDrawText.c)
 * Callees:
 *     <none>
 */

__int64 BgkDrawText()
{
  if ( byte_140353AF0 && byte_140353B10 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
