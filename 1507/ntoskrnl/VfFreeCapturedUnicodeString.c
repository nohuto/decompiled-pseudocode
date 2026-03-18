/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x1407373E8
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
