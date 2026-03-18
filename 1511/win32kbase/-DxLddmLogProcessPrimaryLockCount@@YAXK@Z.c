/*
 * XREFs of ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00B7D78
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v8; // rbx
  char *ErrorLogEntry; // rax
  char *v10; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_DWORD *)&String.Length = 1441792;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v2 = -1LL;
    v3 = -1LL;
    do
      ++v3;
    while ( Src[v3] );
    v4 = 2 * v3 + 2;
    CurrentProcess = PsGetCurrentProcess(Src, v1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v2;
      while ( UnicodeString.Buffer[v2] );
      v8 = (unsigned int)(2 * v2 + 2);
      if ( (unsigned int)v8 + v4 + 40 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(
                                  gpWin32kDriverObject,
                                  (unsigned __int8)v8 + (unsigned __int8)v4 + 40);
        v10 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v8);
          memmove(&v10[v8 + 40], Src, v4);
          IoWriteErrorLogEntry(v10);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
