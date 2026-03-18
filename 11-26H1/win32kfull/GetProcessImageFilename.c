/*
 * XREFs of GetProcessImageFileName @ 0x140219038
 * Callers:
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x140218D64 (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 *     GetProcessImageFilename @ 0x140218F80 (GetProcessImageFilename.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall GetProcessImageFileName(HANDLE ProcessHandle)
{
  void *v1; // rbx
  void *v3; // rax
  ULONG ProcessInformationLength; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  ProcessInformationLength = 0;
  if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v3 = (void *)AllocFreeTmpBuffer(ProcessInformationLength + 2);
    v1 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, ProcessInformationLength + 2LL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v1, ProcessInformationLength, 0LL) < 0 )
      {
        FreeTmpBuffer(v1);
        return 0LL;
      }
    }
  }
  return v1;
}
