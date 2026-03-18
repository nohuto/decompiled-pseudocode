/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C00CE920
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C00CD9AC (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00CE98C (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00CEA14 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  __int16 v4; // bx
  size_t v5; // [rsp+20h] [rbp-28h]
  size_t v6; // [rsp+20h] [rbp-28h]
  ULONG v7; // [rsp+28h] [rbp-20h]
  wchar_t *v8; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength; // [rsp+58h] [rbp+10h] BYREF
  size_t v10; // [rsp+60h] [rbp+18h] BYREF
  size_t v11; // [rsp+68h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  result = RtlUnicodeStringValidateDestWorker(DestinationString, &v8, &v10, &v11, v5, v7);
  if ( result >= 0 )
  {
    v4 = v11;
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(
               &v8[v11],
               v10 - v11,
               &pcchNewDestLength,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
               v6);
    DestinationString->Length = 2 * (pcchNewDestLength + v4);
  }
  return result;
}
