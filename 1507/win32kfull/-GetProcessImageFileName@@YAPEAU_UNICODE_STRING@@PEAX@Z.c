/*
 * XREFs of ?GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z @ 0x1C025CE1C
 * Callers:
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CEB4 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

struct _UNICODE_STRING *__fastcall GetProcessImageFileName(HANDLE ProcessHandle)
{
  void *v1; // rbx
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG ProcessInformationLength; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v3 = (void *)AllocFreeTmpBuffer(ProcessInformationLength + 2);
    v1 = v3;
    if ( v3 )
    {
      memset(v3, 0, ProcessInformationLength + 2LL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v1, ProcessInformationLength, 0LL) < 0 )
      {
        FreeTmpBuffer(v1, v4, v5, v6);
        return 0LL;
      }
    }
  }
  return (struct _UNICODE_STRING *)v1;
}
