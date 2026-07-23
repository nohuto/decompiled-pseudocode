/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x18006C270
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800CD730 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800CD7D0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     RtlQueryProcessModuleInformation @ 0x18006C4B4 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006CF68 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A5580 (NtOpenProcess.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800CCF50 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800CD0E0 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800CD51C (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800CD6D4 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800CDA10 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800CF24C (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EE7E0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800EE8E0 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int CriticalSectionOwnerInformation; // ebx
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  ULONG v9; // r13d
  SIZE_T OffsetFree; // r8
  ULONG v11; // edx
  HANDLE v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // eax
  HANDLE v15; // rcx
  HANDLE v16; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v18; // r15
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h]
  NTSTATUS (__cdecl *v21)(PVOID); // [rsp+60h] [rbp-A0h]
  HANDLE v22; // [rsp+68h] [rbp-98h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 ProcessInformation; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v29[18]; // [rsp+D0h] [rbp-30h] BYREF
  int ThreadInformation[24]; // [rsp+160h] [rbp+60h] BYREF
  HANDLE ProcessHandle; // [rsp+1E8h] [rbp+E8h] BYREF

  CriticalSectionOwnerInformation = 0;
  ProcessHandle = 0LL;
  v4 = 0;
  v5 = 0LL;
  v21 = (NTSTATUS (__cdecl *)(PVOID))RtlpQueryProcessDebugInformationRemote;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  v9 = Flags & 0x3FFFFFBE;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  v11 = Flags & 0x41;
  if ( v9 == 0 && v11 != 0 && (Flags & 0x80000000) != 0 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v5 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v14 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v15 = ProcessHandle;
      v5 = v29;
      v11 = Flags & 0x41;
      if ( v14 < 0 )
        v15 = 0LL;
      v29[1] = RtlpQueryReadVirtualMemory;
      ProcessHandle = v15;
      v29[2] = NtQueryInformationProcess;
      v29[0] = v15;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( (!v11 || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(v5, Flags, Buffer)) == 0)
      && ((Flags & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation(Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
    }
    v12 = ProcessHandle;
    if ( !ProcessHandle )
      return CriticalSectionOwnerInformation;
    goto LABEL_28;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x400u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL) >= 0
        && ProcessInformation )
      {
        v21 = (NTSTATUS (__cdecl *)(PVOID))HIDWORD(LdrSystemDllInitBlock.Wow64SharedInformation[1]);
        if ( HIDWORD(LdrSystemDllInitBlock.Wow64SharedInformation[1]) )
          v4 = 1;
        else
          v21 = (NTSTATUS (__cdecl *)(PVOID))RtlpQueryProcessDebugInformationRemote;
      }
      NtClose(ProcessHandle);
    }
    ProcessHandle = 0LL;
  }
  v22 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v4, &v22);
  if ( result >= 0 )
  {
    v16 = v22;
    TargetProcessHandle = v22;
    if ( !v22 )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v24);
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          v16,
                                          0LL,
                                          6,
                                          0,
                                          0LL,
                                          0LL,
                                          v20,
                                          v21,
                                          Buffer->ViewBaseTarget,
                                          &Handle,
                                          0LL);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v18 = Handle;
        v19 = NtWaitForSingleObject(Handle, 1u, &Timeout);
        CriticalSectionOwnerInformation = v19;
        if ( v19 < 0 )
        {
          NtTerminateThread(v18, v19);
        }
        else
        {
          CriticalSectionOwnerInformation = ZwQueryInformationThread(
                                              v18,
                                              ThreadBasicInformation,
                                              ThreadInformation,
                                              0x30u,
                                              0LL);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = ThreadInformation[0];
        }
        NtClose(v18);
      }
      NtClose(v16);
      if ( v24 )
        RtlpDestroyExecutionRequiredRequest(v24);
      if ( CriticalSectionOwnerInformation < 0 )
        return CriticalSectionOwnerInformation;
      if ( v4 == 1 )
      {
        CriticalSectionOwnerInformation = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(Buffer);
        if ( CriticalSectionOwnerInformation < 0 )
          return CriticalSectionOwnerInformation;
      }
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        CriticalSectionOwnerInformation = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        CriticalSectionOwnerInformation = -1073741558;
      if ( CriticalSectionOwnerInformation >= 0 )
        return RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
      return CriticalSectionOwnerInformation;
    }
    v12 = v16;
LABEL_28:
    NtClose(v12);
    return CriticalSectionOwnerInformation;
  }
  return result;
}
