/*
 * XREFs of EngWideCharToMultiByte @ 0x1C026BF10
 * Callers:
 *     <none>
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C0124EE8 (ConvertToAndFromWideChar.c)
 */

INT __stdcall EngWideCharToMultiByte(
        UINT CodePage,
        LPWSTR pwszWideCharString,
        INT cjWideCharString,
        LPSTR pszMultiByteString,
        INT cjMultiByteString)
{
  return ConvertToAndFromWideChar(
           CodePage,
           pwszWideCharString,
           cjWideCharString,
           pszMultiByteString,
           cjMultiByteString,
           0);
}
