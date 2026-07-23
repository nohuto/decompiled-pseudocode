/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818
 * Callers:
 *     RtlDosPathNameToNtPathName_U @ 0x180011700 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011730 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800117F0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 */

NTSTATUS __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS result; // eax
  int v9; // edx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
  {
    LOBYTE(v9) = a2;
    return RtlDosPathNameToRelativeNtPathName(0, v9, (unsigned int)&DestinationString, 0, a4, 0LL, a5, a6);
  }
  return result;
}
