/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1C00648FC
 * Callers:
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0064798 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0064824 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C00111AC (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  unsigned __int16 *v6; // rcx
  unsigned __int64 *v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rdx

  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateWorker(SourceString, (const size_t)ppszSrc, (ULONG)pcchSrcLength);
  if ( result >= 0 )
  {
    if ( v6 )
    {
      v9 = *((_QWORD *)v6 + 1);
      *v7 = (unsigned __int64)*v6 >> 1;
      *v8 = v9;
    }
  }
  return result;
}
