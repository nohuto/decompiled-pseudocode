/*
 * XREFs of vswprintf_s @ 0x140176670
 * Callers:
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     _swoutput_s @ 0x140178AF8 (_swoutput_s.c)
 */

int __cdecl vswprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, va_list ArgList)
{
  int result; // eax

  if ( !Dst || !SizeInWords || !Format )
    goto LABEL_6;
  result = swoutput_s(Dst, SizeInWords, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Dst = 0;
  if ( result == -2 )
LABEL_6:
    PopPoCoalescinCallback();
  return -1;
}
