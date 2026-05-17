/*
 * XREFs of RtlReportExceptionHelper @ 0x18000787C
 * Callers:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 * Callees:
 *     WerpSetProcessFaultInformation @ 0x180006BA8 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCompletionEvent @ 0x180006BEC (WerpCreateCompletionEvent.c)
 *     WerpGetProcessSnapshot @ 0x180006C68 (WerpGetProcessSnapshot.c)
 *     WerpCreateCrashDataSection @ 0x180006D00 (WerpCreateCrashDataSection.c)
 *     WerpProcessId @ 0x1800077BC (WerpProcessId.c)
 *     WerpThreadId @ 0x180007848 (WerpThreadId.c)
 *     PssNtFreeSnapshot @ 0x180007C40 (PssNtFreeSnapshot.c)
 *     WerpWaitForCrashReporting @ 0x1800087E4 (WerpWaitForCrashReporting.c)
 *     ReportExceptionInternal @ 0x180008890 (ReportExceptionInternal.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

__int64 __fastcall RtlReportExceptionHelper(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  NTSTATUS ProcessSnapshot; // r15d
  _BYTE *v9; // rcx
  int v10; // esi
  __int64 v11; // rbx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // rcx
  int v16; // [rsp+40h] [rbp-528h]
  HANDLE v17; // [rsp+48h] [rbp-520h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-518h] BYREF
  HANDLE v19; // [rsp+58h] [rbp-510h] BYREF
  _BYTE *v20; // [rsp+60h] [rbp-508h]
  _DWORD *v21; // [rsp+68h] [rbp-500h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-4F8h] BYREF
  HANDLE v23; // [rsp+78h] [rbp-4F0h] BYREF
  int v24; // [rsp+80h] [rbp-4E8h]
  _QWORD v25[3]; // [rsp+88h] [rbp-4E0h] BYREF
  _BYTE v26[1136]; // [rsp+A0h] [rbp-4C8h] BYREF
  _QWORD v27[4]; // [rsp+510h] [rbp-58h] BYREF

  v23 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v21 = 0LL;
  v20 = 0LL;
  v25[1] = a2;
  v25[0] = a1;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  if ( (int)WerpCreateCompletionEvent(&v19) < 0 )
  {
    v19 = 0LL;
  }
  else
  {
    v27[0] = v19;
    v6 = 1;
  }
  ProcessSnapshot = WerpGetProcessSnapshot(v7, (__int64)v26);
  v9 = v26;
  if ( ProcessSnapshot < 0 )
    v9 = 0LL;
  v20 = v9;
  v10 = WerpCreateCrashDataSection(&Handle, (void **)&v21);
  if ( v10 >= 0 )
  {
    v27[v6] = Handle;
    v11 = (unsigned int)(v6 + 1);
    v16 = v11;
    if ( (int)ZwDuplicateObject(-1LL, -1LL, -1LL, &v17, 0x1FFFFF, 2, 0) < 0 )
    {
      v17 = 0LL;
    }
    else
    {
      v27[(unsigned int)v11] = v17;
      v11 = (unsigned int)(v11 + 1);
      v16 = v11;
    }
    if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v18, 0x1FFFFF, 2, 0) < 0 )
    {
      v18 = 0LL;
    }
    else
    {
      v27[v11] = v18;
      v16 = v11 + 1;
    }
    v12 = WerpProcessId((void *)0xFFFFFFFFFFFFFFFFLL);
    v24 = v12;
    v13 = WerpThreadId(-2LL);
    v14 = v21;
    *v21 = 248;
    *((_QWORD *)v14 + 21) = v25;
    v14[1] = v12;
    v14[2] = v13;
    *((_QWORD *)v14 + 23) = v17;
    *((_QWORD *)v14 + 24) = v18;
    *((_QWORD *)v14 + 26) = v19;
    *((_QWORD *)v14 + 28) = v20;
    v14[58] = ProcessSnapshot;
    v14[59] = a3;
    v21[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v10 = ReportExceptionInternal(v24, (_DWORD)Handle, (unsigned int)v27, v16, a3, (__int64)&v23);
    if ( v10 >= 0 )
    {
      if ( !v23 || (v10 = WerpWaitForCrashReporting(0LL, v19, v23, a4), v10 >= 0) )
        v10 = 0;
    }
  }
  if ( v20 )
    PssNtFreeSnapshot(v20);
  if ( v21 )
  {
    NtUnmapViewOfSection(-1LL, v21);
    if ( Handle )
      NtClose(Handle);
    if ( v23 )
      NtClose(v23);
  }
  if ( v17 )
  {
    NtClose(v17);
    v17 = 0LL;
  }
  if ( v18 )
  {
    NtClose(v18);
    v18 = 0LL;
  }
  if ( v19 )
    NtClose(v19);
  return (unsigned int)v10;
}
