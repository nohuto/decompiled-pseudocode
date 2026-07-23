/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180042E60 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180047290 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180078220 (RtlDosPathNameToNtPathName_U.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        _UNICODE_STRING *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return RtlDosPathNameToRelativeNtPathName(0, a2, &DestinationString, 0LL, a4, 0LL, a5, a6);
  return result;
}
