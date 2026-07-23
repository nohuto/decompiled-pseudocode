/*
 * XREFs of RtlUnhandledExceptionFilter2 @ 0x1800F1DF0
 * Callers:
 *     RtlUserThreadStart @ 0x180051D40 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x180090EF4 (TppExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D1860 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2D5C (LdrpFatalExceptionFilter.c)
 *     RtlUnhandledExceptionFilter @ 0x1800F1DD0 (RtlUnhandledExceptionFilter.c)
 * Callees:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F7334 (RtlIsAnyDebuggerPresent.c)
 */

LONG __cdecl RtlUnhandledExceptionFilter2(PEXCEPTION_POINTERS ExceptionPointers, ULONG Flags)
{
  wchar_t *Buffer; // r13
  __int64 v4; // rdx
  unsigned int **v5; // rcx
  int v6; // esi
  unsigned int *v7; // r15
  __int64 v8; // r15
  int v9; // r9d
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  const char *v12; // rax
  const void *v13; // r9
  _WORD *v15; // [rsp+30h] [rbp-48h]

  Buffer = NtCurrentPeb()->ProcessParameters->CommandLine.Buffer;
  v6 = 0;
  if ( RtlIsAnyDebuggerPresent() )
  {
    v7 = *v5;
    if ( **v5 == -1073741819 )
    {
      DbgPrintEx(0x65u, 0, "\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, v4);
      v12 = "write to";
      if ( !ExceptionPointers->ExceptionRecord->ExceptionInformation[0] )
        v12 = "read from";
      DbgPrintEx(
        0x65u,
        0,
        "The instruction at %p tried to %s ",
        ExceptionPointers->ExceptionRecord->ExceptionAddress,
        v12);
      v13 = (const void *)ExceptionPointers->ExceptionRecord->ExceptionInformation[1];
      if ( v13 )
        DbgPrintEx(0x65u, 0, "an invalid address, %p\n\n", v13);
      else
        DbgPrintEx(0x65u, 0, "a NULL pointer\n\n");
    }
    else
    {
      switch ( *v7 )
      {
        case 0xC0000006:
          DbgPrintEx(0x65u, 0, "\n\n *** Inpage error in %ws:%s\n\n", Buffer, v4);
          DbgPrintEx(
            0x65u,
            0,
            "The instruction at %p referenced memory at %p.\n",
            ExceptionPointers->ExceptionRecord->ExceptionAddress,
            (const void *)ExceptionPointers->ExceptionRecord->ExceptionInformation[1]);
          DbgPrintEx(
            0x65u,
            0,
            "This failed because of error %Ix.\n\n",
            ExceptionPointers->ExceptionRecord->ExceptionInformation[2]);
          v11 = ExceptionPointers->ExceptionRecord->ExceptionInformation[2];
          switch ( v11 )
          {
            case 0xFFFFFFFFC000009AuLL:
              DbgPrintEx(
                0x65u,
                0,
                "This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case 0xFFFFFFFFC000009CuLL:
            case 0xFFFFFFFFC000016AuLL:
              DbgPrintEx(
                0x65u,
                0,
                "This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case 0xFFFFFFFFC0000185uLL:
              DbgPrintEx(0x65u, 0, "This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v8 = *((_QWORD *)v7 + 4);
          if ( v8 )
          {
            v15 = *(_WORD **)v8;
            if ( *(_QWORD *)v8 && **(_WORD **)v8 == 1 )
            {
              DbgPrintEx(0x65u, 0, "\n\n *** Resource timeout (%p) in %ws:%s\n\n", v8, Buffer, v4, v15);
              v9 = *(_DWORD *)(v8 + 68);
              if ( v9 >= 0 )
              {
                if ( v9 <= 0 )
                  DbgPrintEx(
                    0x65u,
                    0,
                    "The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
                else
                  DbgPrintEx(0x65u, 0, "The resource is owned shared by %d threads\n", v9);
              }
              else
              {
                DbgPrintEx(0x65u, 0, "The resource is owned exclusively by thread %p\n", *(const void **)(v8 + 72));
              }
            }
            else
            {
              DbgPrintEx(0x65u, 0, "\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v8, Buffer, v4, v15);
              v10 = *(_QWORD *)(v8 + 16);
              if ( v10 )
              {
                DbgPrintEx(0x65u, 0, "The critical section is owned by thread %x.\n", v10);
                DbgPrintEx(0x65u, 0, "Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  0x65u,
                  0,
                  "The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                  "\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(0x65u, 0, "\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, v4);
          DbgPrintEx(
            0x65u,
            0,
            "This is usually the result of a memory copy to a local buffer or structure where the size is not properly ca"
            "lculated/checked.\n");
          DbgPrintEx(0x65u, 0, "If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            0x65u,
            0,
            "The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(0x65u, 0, "\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v7, Buffer, v4);
          break;
      }
    }
    DbgPrintEx(0x65u, 0, " *** enter .exr %p for the exception record\n", ExceptionPointers->ExceptionRecord);
    if ( ExceptionPointers->ExceptionRecord->ExceptionCode != -1073740791 )
      DbgPrintEx(0x65u, 0, " ***  enter .cxr %p for the context\n", ExceptionPointers->ContextRecord);
    DbgPrintEx(0x65u, 0, " *** then kb to get the faulting stack\n\n");
    __debugbreak();
  }
  if ( ExceptionPointers->ExceptionRecord->ExceptionCode == -1073740791 )
    RtlReportException(ExceptionPointers->ExceptionRecord, ExceptionPointers->ContextRecord, 0);
  LOBYTE(v6) = ExceptionPointers->ExceptionRecord->ExceptionCode != -1073741420;
  return v6 - 1;
}
