/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C00D4240
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C00D3538 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00D42A0 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00D4328 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]
  size_t v6; // [rsp+20h] [rbp-18h]
  ULONG v7; // [rsp+28h] [rbp-10h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, 0LL, v5, v7);
  if ( v3 >= 0 )
  {
    pcchNewDestLength = 0LL;
    v3 = RtlWideCharArrayCopyStringWorker(ppszDest, pcchDest, &pcchNewDestLength, L"\\Registry\\Machine\\", v6);
    DestinationString->Length = 2 * pcchNewDestLength;
  }
  return v3;
}
