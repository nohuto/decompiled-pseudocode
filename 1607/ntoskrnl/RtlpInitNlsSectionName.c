/*
 * XREFs of RtlpInitNlsSectionName @ 0x1404747A0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14047444C (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RtlpInitNlsSectionName(
        int a1,
        unsigned int a2,
        wchar_t *a3,
        __int64 a4,
        UNICODE_STRING *DestinationString)
{
  int v6; // ecx
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx

  v6 = a1 - 11;
  if ( v6 )
  {
    if ( v6 != 1 )
      return -1073741585;
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionNORM%.8x", a2);
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionCP%d", a2);
  }
  v8 = result;
  if ( result < 0 )
    return result;
  RtlInitUnicodeString(DestinationString, a3);
  return v8;
}
