/*
 * XREFs of RtlStringValidateDestAndLengthA @ 0x1C0055CF4
 * Callers:
 *     RtlStringCchCatA @ 0x1C0055BF4 (RtlStringCchCatA.c)
 *     RtlStringCchCatNA @ 0x1C0055C4C (RtlStringCchCatNA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringValidateDestAndLengthA(
        NTSTRSAFE_PCSTR pszDest,
        size_t cchDest,
        size_t *pcchDestLength,
        const size_t cchMax)
{
  NTSTATUS v4; // r9d
  size_t v5; // rax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = cchDest;
  v4 = 0;
  if ( !cchDest )
    goto LABEL_8;
  do
  {
    if ( !*pszDest )
      break;
    ++pszDest;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
LABEL_8:
    v4 = -1073741811;
  if ( pcchDestLength )
  {
    if ( v4 >= 0 )
    {
      *pcchDestLength = cchDest - v5;
      return v4;
    }
LABEL_12:
    *pcchDestLength = 0LL;
  }
  return v4;
}
