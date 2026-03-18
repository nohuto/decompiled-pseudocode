/*
 * XREFs of EngWideCharToMultiByte @ 0x1C026AA80
 * Callers:
 *     <none>
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
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
