/*
 * XREFs of ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C00357DC
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0035208 (FxLibraryGlobalsCommission.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C0035708 (FxLibraryGlobalsVerifyVersion.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Mx::MxGetSystemRoutineAddress(const wchar_t *FuncName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, FuncName);
  return MmGetSystemRoutineAddress(&DestinationString);
}
