/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x18006D3A0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D57A0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D5840 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800544C0 (RtlpCreateUserThreadEx.c)
 *     RtlQueryProcessModuleInformation @ 0x18006D5D4 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006E358 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B40 (RtlQueryProcessHeapInformation.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A68E0 (NtOpenProcess.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4F70 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5100 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D555C (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D5744 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D5A80 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800D727C (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800F74E0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800F75E0 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int CriticalSectionOwnerInformation; // ebx
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  ULONG v9; // r13d
  SIZE_T OffsetFree; // r8
  ULONG v11; // edx
  NTSTATUS v12; // eax
  HANDLE v13; // rcx
  HANDLE v14; // rcx
  NTSTATUS result; // eax
  HANDLE v16; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v18; // r15
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h]
  NTSTATUS (__cdecl *v21)(PVOID); // [rsp+60h] [rbp-A0h]
  HANDLE v22; // [rsp+68h] [rbp-98h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-90h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v27; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
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
      v12 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v13 = ProcessHandle;
      v5 = v29;
      v11 = Flags & 0x41;
      if ( v12 < 0 )
        v13 = 0LL;
      v29[1] = RtlpQueryReadVirtualMemory;
      ProcessHandle = v13;
      v29[2] = NtQueryInformationProcess;
      v29[0] = v13;
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
    v14 = ProcessHandle;
    if ( !ProcessHandle )
      return CriticalSectionOwnerInformation;
    goto LABEL_23;
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
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v27);
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
      if ( v27 )
        RtlpDestroyExecutionRequiredRequest(v27);
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
    v14 = v16;
LABEL_23:
    NtClose(v14);
    return CriticalSectionOwnerInformation;
  }
  return result;
}
