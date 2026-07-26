/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C0023C14
 * Callers:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0023BA0 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0063328 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00633B4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0063438 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0023C78 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  __int64 v8; // rcx
  int v9; // r8d
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  v9 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( v9 >= 0 )
  {
    if ( v8 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *pcchDest = (unsigned __int64)v10[1] >> 1;
      if ( v11 )
        *v11 = (unsigned __int64)*v10 >> 1;
    }
  }
  return v9;
}
