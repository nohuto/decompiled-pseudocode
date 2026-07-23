/*
 * XREFs of BgkDrawText @ 0x14072A138
 * Callers:
 *     NtDrawText @ 0x14022C560 (NtDrawText.c)
 * Callees:
 *     <none>
 */

__int64 BgkDrawText()
{
  if ( byte_140328E20 && byte_140328D13 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
