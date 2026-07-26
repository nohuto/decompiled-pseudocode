/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0063328
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D1FC8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0023C14 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C006348C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x1C0063528 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  size_t v5; // r9
  __int16 v6; // bx
  size_t cchSrcLength; // [rsp+20h] [rbp-30h]
  ULONG cchSrcLengtha; // [rsp+20h] [rbp-30h]
  ULONG v9; // [rsp+28h] [rbp-28h]
  size_t pcchDestLength; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *ppszDest; // [rsp+38h] [rbp-18h] BYREF
  size_t pcchSrcLength; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *ppszSrc; // [rsp+48h] [rbp-8h] BYREF
  size_t pcchNewDestLength; // [rsp+70h] [rbp+20h] BYREF
  size_t pcchDest; // [rsp+78h] [rbp+28h] BYREF

  result = RtlUnicodeStringValidateDestWorker(a1, &ppszDest, &pcchDest, &pcchDestLength, cchSrcLength, v9);
  if ( result >= 0 )
  {
    result = RtlUnicodeStringValidateSrcWorker(a2, &ppszSrc, &pcchSrcLength, v5, cchSrcLengtha);
    if ( result >= 0 )
    {
      v6 = pcchDestLength;
      pcchNewDestLength = 0LL;
      result = RtlWideCharArrayCopyWorker(
                 &ppszDest[pcchDestLength],
                 pcchDest - pcchDestLength,
                 &pcchNewDestLength,
                 ppszSrc,
                 pcchSrcLength);
      a1->Length = 2 * (pcchNewDestLength + v6);
    }
  }
  return result;
}
