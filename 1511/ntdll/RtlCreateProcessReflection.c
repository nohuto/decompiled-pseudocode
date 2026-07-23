/*
 * XREFs of RtlCreateProcessReflection @ 0x18008C990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x1800A5C00 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x1800A5C10 (NtWaitForMultipleObjects.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __cdecl RtlCreateProcessReflection(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID StartRoutine,
        PVOID StartContext,
        HANDLE EventHandle,
        PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION ReflectionInformation)
{
  int v10; // ebx
  _QWORD *v11; // rcx
  ULONG_PTR v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  NTSTATUS v15; // eax
  HANDLE v16; // rcx
  PVOID v17; // rax
  int FileHandle; // [rsp+38h] [rbp-89h]
  PVOID v20; // [rsp+68h] [rbp-59h] BYREF
  PVOID v21; // [rsp+70h] [rbp-51h] BYREF
  ULONG_PTR CommitSize; // [rsp+78h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-41h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-39h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-31h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp-29h] BYREF
  HANDLE SourceHandle; // [rsp+A0h] [rbp-21h] BYREF
  PVOID v28; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE v29; // [rsp+B0h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B8h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp-1h] BYREF
  HANDLE Handles[2]; // [rsp+C8h] [rbp+7h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+D8h] [rbp+17h] BYREF
  LARGE_INTEGER v34; // [rsp+E0h] [rbp+1Fh] BYREF

  RegionSize = 4096LL;
  v29 = 0LL;
  v21 = 0LL;
  BaseAddress = 0LL;
  v20 = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  v28 = 0LL;
  SourceHandle = 0LL;
  Handle = 0LL;
  ZwQuerySystemTime(&SystemTime);
  if ( (Flags & 0xFFFFFFE1) != 0 )
    return -1073741584;
  if ( (Flags & 8) != 0 && StartRoutine )
    return -1073741581;
  if ( ReflectionInformation )
    memset(ReflectionInformation, 0, sizeof(_RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION));
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v10 < 0 )
  {
    BaseAddress = 0LL;
    goto LABEL_27;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    BaseAddress,
    RegionSize,
    (PULONG)&RegionSize);
  RegionSize = 4096LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  CommitSize = 88LL;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v20, 0LL, &CommitSize, 0x3000u, 4u);
  if ( v10 < 0 )
  {
    v20 = 0LL;
    goto LABEL_27;
  }
  v11 = v20;
  v12 = CommitSize;
  *((_QWORD *)v20 + 3) = StartContext;
  v11[2] = StartRoutine;
  *v11 = v12;
  *((_DWORD *)v11 + 2) = Flags;
  v11[6] = EventHandle;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    *((_DWORD *)v11 + 2) = Flags | 0x10;
    v10 = RtlpProcessReflectionStartup((PSIZE_T)v20);
    if ( v10 >= 0 && ReflectionInformation )
    {
      ReflectionInformation->ReflectionProcessHandle = (HANDLE)*((_QWORD *)v20 + 7);
      ReflectionInformation->ReflectionThreadHandle = (HANDLE)*((_QWORD *)v20 + 8);
      ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_QWORD *)v20 + 9);
      v17 = v20;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  MaximumSize.QuadPart = CommitSize;
  v10 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v10 < 0 )
    goto LABEL_27;
  ViewSize = CommitSize;
  v10 = ZwMapViewOfSection(SectionHandle, ProcessHandle, &v28, 0LL, CommitSize, 0LL, &ViewSize, ViewUnmap, 0, 4u);
  if ( v10 >= 0 )
  {
    v10 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v21,
            0LL,
            CommitSize,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v10 < 0 )
    {
      v21 = 0LL;
      goto LABEL_27;
    }
    if ( !ReflectionInformation
      || (v10 = ZwCreateEvent(&SourceHandle, 0x1F0003u, 0LL, NotificationEvent, 0), v10 >= 0)
      && (v10 = ZwCreateEvent(&Handle, 0x1F0003u, 0LL, NotificationEvent, 0), v10 >= 0)
      && (v10 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  SourceHandle,
                  ProcessHandle,
                  (PHANDLE)v20 + 4,
                  0x1F0003u,
                  0,
                  2u),
          v10 >= 0)
      && (v10 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  Handle,
                  ProcessHandle,
                  (PHANDLE)v20 + 5,
                  0x1F0003u,
                  0,
                  2u),
          v10 >= 0)
      && (!EventHandle
       || (v10 = ZwDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   EventHandle,
                   ProcessHandle,
                   (PHANDLE)v20 + 6,
                   0x1F0003u,
                   0,
                   2u),
           v10 >= 0)) )
    {
      v13 = v20;
      v14 = v21;
      *(_OWORD *)v21 = *(_OWORD *)v20;
      v14[1] = v13[1];
      v14[2] = v13[2];
      v14[3] = v13[3];
      v14[4] = v13[4];
      *((_QWORD *)v14 + 10) = *((_QWORD *)v13 + 10);
      v10 = RtlpCreateUserThreadEx(
              ProcessHandle,
              0LL,
              2,
              0,
              0LL,
              0LL,
              FileHandle,
              (PUSER_THREAD_START_ROUTINE)RtlpProcessReflectionStartup,
              v28,
              &v29,
              0LL);
      if ( v10 >= 0 )
      {
        if ( ReflectionInformation )
        {
          Handles[0] = v29;
          Handles[1] = SourceHandle;
          if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, 0LL) == 1 )
          {
            if ( *((_QWORD *)v21 + 7) )
            {
              if ( ZwDuplicateObject(
                     ProcessHandle,
                     *((HANDLE *)v21 + 7),
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &ReflectionInformation->ReflectionProcessHandle,
                     0x1FFFFFu,
                     0,
                     2u) < 0 )
              {
                v16 = Handle;
              }
              else
              {
                v15 = ZwDuplicateObject(
                        ProcessHandle,
                        *((HANDLE *)v21 + 8),
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &ReflectionInformation->ReflectionThreadHandle,
                        0x1FFFFFu,
                        0,
                        2u);
                v16 = Handle;
                if ( v15 >= 0 )
                {
                  v10 = ZwSetEvent(Handle, 0LL);
                  ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_QWORD *)v21 + 9);
                  v17 = v21;
LABEL_26:
                  ReflectionInformation->ReflectionClientId.UniqueThread = (void *)*((_QWORD *)v17 + 10);
                  goto LABEL_27;
                }
              }
              v10 = ZwSetEvent(v16, 0LL);
              goto LABEL_27;
            }
            NtWaitForSingleObject(v29, 0, 0LL);
          }
          v10 = -1073741823;
        }
      }
    }
LABEL_27:
    if ( v28 )
      NtUnmapViewOfSection(ProcessHandle, v28);
    goto LABEL_29;
  }
  v28 = 0LL;
LABEL_29:
  if ( v21 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( v20 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v20, &CommitSize, 0x8000u);
  if ( SourceHandle )
    NtClose(SourceHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v29 )
    NtClose(v29);
  ZwQuerySystemTime(&v34);
  return v10;
}
