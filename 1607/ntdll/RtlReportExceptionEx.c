/*
 * XREFs of RtlReportExceptionEx @ 0x1800D8780
 * Callers:
 *     <none>
 * Callees:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 *     WerpSetProcessFaultInformation @ 0x180006B98 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCompletionEvent @ 0x180006BDC (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x180006CF0 (WerpCreateCrashDataSection.c)
 *     WerpProcessId @ 0x1800077AC (WerpProcessId.c)
 *     WerpThreadId @ 0x180007838 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800087D4 (WerpWaitForCrashReporting.c)
 *     ReportExceptionInternal @ 0x180008880 (ReportExceptionInternal.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  unsigned int v7; // r13d
  int v8; // eax
  int v9; // r12d
  struct _TEB *v10; // r8
  NTSTATUS v12; // ebx
  _QWORD *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B0h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-A8h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SourceHandle; // [rsp+60h] [rbp-98h]
  HANDLE Handle; // [rsp+68h] [rbp-90h] BYREF
  HANDLE v20; // [rsp+70h] [rbp-88h] BYREF
  HANDLE v21; // [rsp+78h] [rbp-80h]
  __int128 v22; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v23[4]; // [rsp+90h] [rbp-68h] BYREF
  void *v24; // [rsp+120h] [rbp+28h]

  SourceHandle = Timeout;
  v21 = v24;
  v22 = 0LL;
  TargetHandle = 0LL;
  v16 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  BaseAddress = 0LL;
  v7 = WerpProcessId(Timeout);
  v8 = WerpThreadId(v24);
  v9 = v8;
  v10 = NtCurrentTeb();
  if ( v7 == LODWORD(v10->ClientId.UniqueProcess) && v8 == LODWORD(v10->ClientId.UniqueThread) )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  *((_QWORD *)&v22 + 1) = ContextRecord;
  *(_QWORD *)&v22 = ExceptionRecord;
  if ( (Flags & 4) != 0 || (v12 = WerpSetProcessFaultInformation(SourceHandle), v12 >= 0) )
  {
    v12 = WerpCreateCompletionEvent(&EventHandle);
    if ( v12 >= 0 )
    {
      v12 = WerpCreateCrashDataSection(&v20, &BaseAddress);
      if ( v12 >= 0 )
      {
        v12 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v12 >= 0 )
        {
          v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v21,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v16,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v12 >= 0 )
          {
            v13 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v13[21] = &v22;
            *((_DWORD *)v13 + 1) = v7;
            *((_DWORD *)v13 + 2) = v9;
            v13[23] = TargetHandle;
            v13[24] = v16;
            v13[26] = EventHandle;
            v13[28] = 0LL;
            *((_DWORD *)v13 + 58) = -1073741801;
            *((_DWORD *)v13 + 59) = Flags;
            *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v23[0] = EventHandle;
            v23[1] = v20;
            v23[2] = TargetHandle;
            v23[3] = v16;
            v12 = ReportExceptionInternal(v7, v20, (__int64)v23, 4u, Flags, &Handle);
            if ( v12 >= 0 )
            {
              v12 = WerpWaitForCrashReporting(SourceHandle, EventHandle, Handle, 0LL);
              if ( v12 >= 0 )
              {
                if ( (Flags & 4) != 0
                  || (v12 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v12 >= 0) )
                {
                  v12 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v20 )
    NtClose(v20);
  if ( EventHandle )
  {
    NtClose(EventHandle);
    EventHandle = 0LL;
  }
  if ( v16 )
    NtClose(v16);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v12;
}
