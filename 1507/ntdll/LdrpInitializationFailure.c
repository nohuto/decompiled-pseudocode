/*
 * XREFs of LdrpInitializationFailure @ 0x1800BE0A4
 * Callers:
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079BA4 (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     NtRaiseHardError @ 0x180094DD0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800BD4E4 (LdrpLogFatalLdrEtwEvent.c)
 */

void *__fastcall LdrpInitializationFailure(int a1)
{
  char v1; // al
  void *result; // rax

  v1 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1693,
      "LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = LdrpDebugFlags;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
    return (void *)NtRaiseHardError();
  return result;
}
