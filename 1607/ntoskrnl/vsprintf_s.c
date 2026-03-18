/*
 * XREFs of vsprintf_s @ 0x140152B0C
 * Callers:
 *     sprintf_s @ 0x140152AEC (sprintf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _soutput_s @ 0x140153CB4 (_soutput_s.c)
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
    xHalFreeMessageTarget();
  return -1;
}
