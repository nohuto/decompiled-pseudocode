/*
 * XREFs of LdrpInitializationFailure @ 0x1800CAD44
 * Callers:
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180080E70 (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     NtRaiseHardError @ 0x1800A7AB0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CA204 (LdrpLogFatalLdrEtwEvent.c)
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
      1692,
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
