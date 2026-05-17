/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800C0F28
 * Callers:
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x180055DE4 (LdrpAllocateTlsEntry.c)
 *     LdrpProtectedCopyMemory @ 0x180069460 (LdrpProtectedCopyMemory.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x1800779B4 (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180093E30 (NtTerminateThread.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800BD4E4 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x1800CACC0 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v3; // al
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      491,
      "LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v3 = LdrpDebugFlags;
  }
  if ( (v3 & 0x10) != 0 )
    __debugbreak();
  if ( (v3 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &v9, 2LL);
      if ( v9 > 98 )
      {
        v5 = v9 - 105;
        v4 = v9 == 105;
      }
      else
      {
        if ( v9 == 98 || v9 == 66 )
          goto LABEL_17;
        v5 = v9 - 73;
        v4 = v9 == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            (const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName,
            &LoaderFatalErrorThread);
          NtTerminateThread();
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &LoaderFatalErrorProc);
        ZwTerminateProcess();
      }
    }
  }
  return 1LL;
}
