/*
 * XREFs of BgkDrawText @ 0x1406DE14C
 * Callers:
 *     NtDrawText @ 0x1402136BC (NtDrawText.c)
 * Callees:
 *     <none>
 */

__int64 BgkDrawText()
{
  if ( byte_140305D78 && byte_140305D99 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
