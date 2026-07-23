/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18001C280 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18006DF80 (RtlDosPathNameToNtPathName_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
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
