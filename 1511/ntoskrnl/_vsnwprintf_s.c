/*
 * XREFs of _vsnwprintf_s @ 0x140148E0C
 * Callers:
 *     _snwprintf_s @ 0x140148DEC (_snwprintf_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _swoutput_s @ 0x14014AA7C (_swoutput_s.c)
 */

int __cdecl vsnwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !DstBuf )
    {
LABEL_12:
      PopPoCoalescinCallback();
      return -1;
    }
  }
  else if ( !DstBuf )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInWords )
    goto LABEL_12;
  if ( SizeInWords > MaxCount )
  {
    result = swoutput_s(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = swoutput_s(DstBuf, SizeInWords, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1LL )
    return -1;
LABEL_11:
  *DstBuf = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}
