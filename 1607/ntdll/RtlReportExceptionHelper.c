/*
 * XREFs of RtlReportExceptionHelper @ 0x18000786C
 * Callers:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 * Callees:
 *     WerpSetProcessFaultInformation @ 0x180006B98 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCompletionEvent @ 0x180006BDC (WerpCreateCompletionEvent.c)
 *     WerpGetProcessSnapshot @ 0x180006C58 (WerpGetProcessSnapshot.c)
 *     WerpCreateCrashDataSection @ 0x180006CF0 (WerpCreateCrashDataSection.c)
 *     WerpProcessId @ 0x1800077AC (WerpProcessId.c)
 *     WerpThreadId @ 0x180007838 (WerpThreadId.c)
 *     PssNtFreeSnapshot @ 0x180007C30 (PssNtFreeSnapshot.c)
 *     WerpWaitForCrashReporting @ 0x1800087D4 (WerpWaitForCrashReporting.c)
 *     ReportExceptionInternal @ 0x180008880 (ReportExceptionInternal.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
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
  _QWORD *v14; // rcx
  int v16; // [rsp+40h] [rbp-528h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-520h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-518h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-510h] BYREF
  _BYTE *v20; // [rsp+60h] [rbp-508h]
  PVOID BaseAddress; // [rsp+68h] [rbp-500h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-4F8h] BYREF
  HANDLE v23; // [rsp+78h] [rbp-4F0h] BYREF
  int v24; // [rsp+80h] [rbp-4E8h]
  _QWORD v25[3]; // [rsp+88h] [rbp-4E0h] BYREF
  _BYTE v26[1136]; // [rsp+A0h] [rbp-4C8h] BYREF
  _QWORD v27[4]; // [rsp+510h] [rbp-58h] BYREF

  v23 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  TargetHandle = 0LL;
  v18 = 0LL;
  v6 = 0;
  BaseAddress = 0LL;
  v20 = 0LL;
  v25[1] = a2;
  v25[0] = a1;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation((void *)0xFFFFFFFFFFFFFFFFLL);
  if ( WerpCreateCompletionEvent(&EventHandle) < 0 )
  {
    EventHandle = 0LL;
  }
  else
  {
    v27[0] = EventHandle;
    v6 = 1;
  }
  ProcessSnapshot = WerpGetProcessSnapshot(v7, v26);
  v9 = v26;
  if ( ProcessSnapshot < 0 )
    v9 = 0LL;
  v20 = v9;
  v10 = WerpCreateCrashDataSection(&Handle, &BaseAddress);
  if ( v10 >= 0 )
  {
    v27[v6] = Handle;
    v11 = (unsigned int)(v6 + 1);
    v16 = v11;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      v27[(unsigned int)v11] = TargetHandle;
      v11 = (unsigned int)(v11 + 1);
      v16 = v11;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v18,
           0x1FFFFFu,
           2u,
           0) < 0 )
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
    v13 = WerpThreadId((void *)0xFFFFFFFFFFFFFFFELL);
    v14 = BaseAddress;
    *(_DWORD *)BaseAddress = 248;
    v14[21] = v25;
    *((_DWORD *)v14 + 1) = v12;
    *((_DWORD *)v14 + 2) = v13;
    v14[23] = TargetHandle;
    v14[24] = v18;
    v14[26] = EventHandle;
    v14[28] = v20;
    *((_DWORD *)v14 + 58) = ProcessSnapshot;
    *((_DWORD *)v14 + 59) = a3;
    *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v10 = ReportExceptionInternal(v24, (_DWORD)Handle, (unsigned int)v27, v16, a3, (__int64)&v23);
    if ( v10 >= 0 )
    {
      if ( !v23 || (v10 = WerpWaitForCrashReporting(0LL, EventHandle, v23, a4), v10 >= 0) )
        v10 = 0;
    }
  }
  if ( v20 )
    PssNtFreeSnapshot(v20);
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( Handle )
      NtClose(Handle);
    if ( v23 )
      NtClose(v23);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v18 )
  {
    NtClose(v18);
    v18 = 0LL;
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return (unsigned int)v10;
}
