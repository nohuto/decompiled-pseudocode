/*
 * XREFs of _snwprintf_s @ 0x140148DEC
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x14045FFD0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     _vsnwprintf_s @ 0x140148E0C (_vsnwprintf_s.c)
 */

int snwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnwprintf_s(DstBuf, SizeInWords, MaxCount, Format, va);
}
