/*
 * XREFs of LdrpInitializationFailure @ 0x1800D22F0
 * Callers:
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF78 (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     NtRaiseHardError @ 0x1800A8E90 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D16A8 (LdrpLogFatalLdrEtwEvent.c)
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
      1712,
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
