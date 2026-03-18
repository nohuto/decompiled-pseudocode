/*
 * XREFs of ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C003081C
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0030248 (FxLibraryGlobalsCommission.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0030748 (FxLibraryGlobalsVerifyVersion.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Mx::MxGetSystemRoutineAddress(const wchar_t *FuncName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, FuncName);
  return MmGetSystemRoutineAddress(&DestinationString);
}
