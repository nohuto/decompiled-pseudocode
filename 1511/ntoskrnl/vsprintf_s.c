/*
 * XREFs of vsprintf_s @ 0x14014977C
 * Callers:
 *     sprintf_s @ 0x14014975C (sprintf_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _soutput_s @ 0x14014A8E4 (_soutput_s.c)
 */

int __cdecl vsprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !DstBuf || !SizeInBytes || !Format )
    goto LABEL_6;
  result = soutput_s(DstBuf, SizeInBytes, Format, ArgList);
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  if ( result == -2 )
LABEL_6:
    PopPoCoalescinCallback();
  return -1;
}
