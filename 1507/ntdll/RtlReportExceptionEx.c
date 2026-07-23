/*
 * XREFs of RtlReportExceptionEx @ 0x1800C7660
 * Callers:
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x180001C2C (ReportExceptionInternal.c)
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 *     WerpProcessId @ 0x180045EA0 (WerpProcessId.c)
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     NtWaitForMultipleObjects @ 0x180093EB0 (NtWaitForMultipleObjects.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  int v5; // ebx
  PVOID v6; // r13
  NTSTATUS v7; // r15d
  HANDLE v8; // rcx
  NTSTATUS v9; // edi
  HANDLE v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rbx
  NTSTATUS InformationThread; // eax
  unsigned int v16; // ecx
  LARGE_INTEGER *v17; // rbx
  NTSTATUS v18; // eax
  unsigned int v20; // [rsp+54h] [rbp-584h]
  HANDLE TargetHandle; // [rsp+58h] [rbp-580h] BYREF
  HANDLE SnapshotHandle; // [rsp+60h] [rbp-578h] BYREF
  HANDLE v23; // [rsp+68h] [rbp-570h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-568h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp-560h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-558h] BYREF
  __int64 v27; // [rsp+88h] [rbp-550h] BYREF
  int v28; // [rsp+90h] [rbp-548h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp-540h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp-538h]
  PVOID v31; // [rsp+A8h] [rbp-530h]
  int v32; // [rsp+B0h] [rbp-528h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-520h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+C0h] [rbp-518h]
  HANDLE Handles[2]; // [rsp+C8h] [rbp-510h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-500h] BYREF
  _QWORD v37[2]; // [rsp+E0h] [rbp-4F8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-4E8h] BYREF
  __int64 v39; // [rsp+120h] [rbp-4B8h]
  __int64 v40; // [rsp+128h] [rbp-4B0h]
  _BYTE ThreadInformation[24]; // [rsp+130h] [rbp-4A8h] BYREF
  __int64 v42; // [rsp+148h] [rbp-490h]
  char v43; // [rsp+160h] [rbp-478h] BYREF
  _QWORD v44[4]; // [rsp+590h] [rbp-48h] BYREF

  Timeouta = Timeout;
  Handle = 0LL;
  EventHandle = 0LL;
  SectionHandle = 0LL;
  TargetHandle = 0LL;
  v23 = 0LL;
  *(_OWORD *)Handles = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  MaximumSize.QuadPart = 0LL;
  SnapshotHandle = 0LL;
  v37[1] = ContextRecord;
  v37[0] = ExceptionRecord;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 2;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (Flags & 4) == 0 )
  {
    v27 = 1LL;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessFaultInformation, &v27, 8u);
  }
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    EventHandle = 0LL;
  }
  else
  {
    v44[0] = EventHandle;
    v5 = 1;
  }
  if ( (int)RtlQueryResourcePolicy(0, 0, &v28, 4LL) < 0 || v28 > 10 )
  {
    SnapshotHandle = &v43;
    v7 = PssNtCaptureSnapshot(&SnapshotHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xFC0019FF, 0x10001Fu);
    v32 = v7;
    v8 = SnapshotHandle;
    if ( v7 < 0 )
      v8 = 0LL;
    SnapshotHandle = v8;
  }
  else
  {
    v7 = -1073741801;
    v32 = -1073741801;
    SnapshotHandle = 0LL;
  }
  MaximumSize.QuadPart = 248LL;
  v9 = NtCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v9 >= 0 )
  {
    v10 = SectionHandle;
    v44[v5] = SectionHandle;
    v11 = (unsigned int)(v5 + 1);
    v20 = v11;
    v9 = ZwMapViewOfSection(v10, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 4u);
    if ( v9 >= 0 )
    {
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
        v44[v11] = TargetHandle;
        v11 = (unsigned int)(v11 + 1);
        v20 = v11;
      }
      if ( ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (HANDLE)0xFFFFFFFFFFFFFFFELL,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &v23,
             0x1FFFFFu,
             2u,
             0) < 0 )
      {
        v23 = 0LL;
      }
      else
      {
        v44[v11] = v23;
        v20 = v11 + 1;
      }
      v12 = BaseAddress;
      v31 = BaseAddress;
      memset(BaseAddress, 0, 0xF8uLL);
      v13 = WerpProcessId((void *)0xFFFFFFFFFFFFFFFFLL);
      v14 = v13;
      v30 = v13;
      InformationThread = ZwQueryInformationThread(
                            (HANDLE)0xFFFFFFFFFFFFFFFELL,
                            ThreadBasicInformation,
                            ThreadInformation,
                            0x30u,
                            0LL);
      v16 = v42;
      if ( InformationThread < 0 )
        v16 = 0;
      v40 = v16;
      v39 = v14;
      *(_DWORD *)v12 = 248;
      v12[21] = v37;
      *((_DWORD *)v12 + 1) = v14;
      *((_DWORD *)v12 + 2) = v16;
      v12[23] = TargetHandle;
      v12[24] = v23;
      v12[26] = EventHandle;
      v12[28] = SnapshotHandle;
      *((_DWORD *)v12 + 58) = v7;
      *((_DWORD *)v12 + 59) = Flags;
      v6 = v31;
      *((_DWORD *)v31 + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      v9 = ReportExceptionInternal(v30, SectionHandle, (__int64)v44, v20, Flags, &Handle);
      if ( v9 >= 0 )
      {
        if ( Handle )
        {
          v17 = Timeouta;
          while ( 1 )
          {
            Handles[0] = Handle;
            Handles[1] = EventHandle;
            v18 = NtWaitForMultipleObjects((EventHandle != 0LL) + 1, Handles, WaitAny, 1u, v17);
            if ( v18 < 0 )
              break;
            if ( v18 == 258 )
            {
              v9 = -1073741823;
              break;
            }
            if ( v18 != 192 && v18 != 257 )
              goto LABEL_31;
          }
        }
        else
        {
LABEL_31:
          v9 = 0;
        }
      }
    }
  }
  if ( SnapshotHandle )
    PssNtFreeSnapshot((__int64)SnapshotHandle);
  if ( v6 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
    if ( SectionHandle )
    {
      NtClose(SectionHandle);
      SectionHandle = 0LL;
    }
    if ( Handle )
      NtClose(Handle);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v23 )
  {
    NtClose(v23);
    v23 = 0LL;
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return v9;
}
