/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x140702868
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
