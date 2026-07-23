/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800CB5E8
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x180040FF4 (LdrpAllocateTlsEntry.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     LdrpProtectedCopyMemory @ 0x18006CCD0 (LdrpProtectedCopyMemory.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180083BB4 (LdrpTouchThreadStack.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CA204 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x1800D3770 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v3; // al
  NTSTATUS v4; // edi
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = LdrpDebugFlags;
  v4 = *(_DWORD *)*a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      491,
      "LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
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
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v6 = Response - 105;
        v5 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_17;
        v6 = Response - 73;
        v5 = Response == 73;
      }
      if ( v5 )
        return 1LL;
      v7 = v6 - 6;
      if ( !v7 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            (const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName,
            &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v4);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent((const void **)&NtCurrentPeb()->ProcessParameters->ImagePathName, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
      }
    }
  }
  return 1LL;
}
