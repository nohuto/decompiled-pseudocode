/*
 * XREFs of wcscat_s @ 0x1800A2430
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v3; // r9
  errno_t v5; // ebx
  signed __int64 v6; // rcx
  wchar_t v7; // ax

  v3 = Destination;
  if ( !Destination || !SizeInWords )
    goto LABEL_5;
  if ( !Source )
  {
    *Destination = 0;
LABEL_5:
    invalid_parameter();
    return 22;
  }
  do
  {
    if ( !*Destination )
      break;
    ++Destination;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 22;
LABEL_15:
    *v3 = 0;
    invalid_parameter();
    return v5;
  }
  v6 = (char *)Destination - (char *)Source;
  do
  {
    v7 = *Source;
    *(const wchar_t *)((char *)Source + v6) = *Source;
    ++Source;
    if ( !v7 )
      break;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 34;
    goto LABEL_15;
  }
  return 0;
}
