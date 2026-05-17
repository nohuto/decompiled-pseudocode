/*
 * XREFs of RtlReportExceptionEx @ 0x1800D86C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     WerpSetProcessFaultInformation @ 0x180006BA8 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCompletionEvent @ 0x180006BEC (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x180006D00 (WerpCreateCrashDataSection.c)
 *     WerpProcessId @ 0x1800077BC (WerpProcessId.c)
 *     WerpThreadId @ 0x180007848 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800087E4 (WerpWaitForCrashReporting.c)
 *     ReportExceptionInternal @ 0x180008890 (ReportExceptionInternal.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

__int64 __fastcall RtlReportExceptionEx(__int64 a1, __int64 a2, unsigned int a3, void *a4, void *a5)
{
  unsigned int v8; // r13d
  int v9; // eax
  int v10; // r12d
  struct _TEB *v11; // r8
  int CrashDataSection; // ebx
  _DWORD *v14; // rcx
  HANDLE v15; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD *v16; // [rsp+48h] [rbp-B0h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-A8h]
  HANDLE v18; // [rsp+58h] [rbp-A0h]
  __int64 v19; // [rsp+60h] [rbp-98h]
  HANDLE Handle; // [rsp+68h] [rbp-90h] BYREF
  HANDLE v21[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v22; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v23[4]; // [rsp+90h] [rbp-68h] BYREF

  v19 = (__int64)a4;
  v21[1] = a5;
  v22 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  Handle = 0LL;
  v21[0] = 0LL;
  v16 = 0LL;
  v8 = WerpProcessId(a4);
  v9 = WerpThreadId((__int64)a5);
  v10 = v9;
  v11 = NtCurrentTeb();
  if ( v8 == LODWORD(v11->ClientId.UniqueProcess) && v9 == LODWORD(v11->ClientId.UniqueThread) )
    return RtlReportException(a1, a2, a3);
  *((_QWORD *)&v22 + 1) = a2;
  *(_QWORD *)&v22 = a1;
  if ( (a3 & 4) != 0 || (CrashDataSection = WerpSetProcessFaultInformation(v19), CrashDataSection >= 0) )
  {
    CrashDataSection = WerpCreateCompletionEvent(&v15);
    if ( CrashDataSection >= 0 )
    {
      CrashDataSection = WerpCreateCrashDataSection(v21, (void **)&v16);
      if ( CrashDataSection >= 0 )
      {
        CrashDataSection = ZwDuplicateObject();
        if ( CrashDataSection >= 0 )
        {
          CrashDataSection = ZwDuplicateObject();
          if ( CrashDataSection >= 0 )
          {
            v14 = v16;
            *v16 = 248;
            *((_QWORD *)v14 + 21) = &v22;
            v14[1] = v8;
            v14[2] = v10;
            *((_QWORD *)v14 + 23) = v18;
            *((_QWORD *)v14 + 24) = v17;
            *((_QWORD *)v14 + 26) = v15;
            *((_QWORD *)v14 + 28) = 0LL;
            v14[58] = -1073741801;
            v14[59] = a3;
            v16[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v23[0] = v15;
            v23[1] = v21[0];
            v23[2] = v18;
            v23[3] = v17;
            CrashDataSection = ReportExceptionInternal(v8, (__int64)v21[0], (__int64)v23, 4u, a3, &Handle);
            if ( CrashDataSection >= 0 )
            {
              CrashDataSection = WerpWaitForCrashReporting(v19, (__int64)v15, (__int64)Handle, 0LL);
              if ( CrashDataSection >= 0 )
              {
                if ( (a3 & 4) != 0 || (CrashDataSection = ZwTerminateProcess(), CrashDataSection >= 0) )
                  CrashDataSection = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v16 )
    NtUnmapViewOfSection();
  if ( v21[0] )
    NtClose(v21[0]);
  if ( v15 )
  {
    NtClose(v15);
    v15 = 0LL;
  }
  if ( v17 )
    NtClose(v17);
  if ( v18 )
    NtClose(v18);
  return (unsigned int)CrashDataSection;
}
