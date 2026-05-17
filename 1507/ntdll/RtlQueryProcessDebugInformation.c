/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180068A40
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800C40E0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800C4180 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlQueryProcessModuleInformation @ 0x180068C74 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180069678 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x180076580 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x180093B60 (NtOpenProcess.c)
 *     NtTerminateThread @ 0x180093E30 (NtTerminateThread.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800C3520 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800C3A90 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800C3ECC (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800C4084 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800C44D0 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800C5F1C (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EA934 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800EAA34 (RtlpDestroyExecutionRequiredRequest.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int CriticalSectionOwnerInformation; // ebx
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  int v9; // r13d
  __int64 v10; // r8
  int v11; // edx
  int v12; // eax
  HANDLE v13; // rcx
  HANDLE v14; // rcx
  __int64 result; // rax
  HANDLE v16; // r14
  HANDLE v17; // rcx
  HANDLE v18; // r15
  NTSTATUS v19; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  HANDLE v21; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  HANDLE v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 ProcessInformation; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+B8h] [rbp-48h]
  HANDLE v32; // [rsp+C8h] [rbp-38h]
  _QWORD v33[18]; // [rsp+D0h] [rbp-30h] BYREF
  int v34[24]; // [rsp+160h] [rbp+60h] BYREF
  HANDLE Handle; // [rsp+1E8h] [rbp+E8h] BYREF

  CriticalSectionOwnerInformation = 0;
  Handle = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  v9 = a2 & 0x3FFFFFBE;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v10 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v10 )
    memset((void *)(a3 + 208), 0, v10 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v11 = a2 & 0x41;
  if ( v9 == 0 && v11 != 0 && (a2 & 0x80000000) != 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v5 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v27 = 48;
      v28 = 0LL;
      v30 = 0;
      v29 = 0LL;
      v22 = a1;
      v31 = 0LL;
      v23 = 0LL;
      v12 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v27, &v22);
      v13 = Handle;
      v5 = v33;
      v11 = a2 & 0x41;
      if ( v12 < 0 )
        v13 = 0LL;
      v33[1] = RtlpQueryReadVirtualMemory;
      Handle = v13;
      v33[2] = NtQueryInformationProcess;
      v33[0] = v13;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( (!v11 || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(v5, a2, a3)) == 0)
      && ((a2 & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
    }
    v14 = Handle;
    if ( !Handle )
      return (unsigned int)CriticalSectionOwnerInformation;
    goto LABEL_23;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v27 = 48;
    v28 = 0LL;
    v30 = 0;
    v29 = 0LL;
    v22 = a1;
    v31 = 0LL;
    v23 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 1024LL, &v27, &v22) >= 0 )
    {
      if ( NtQueryInformationProcess(Handle, ProcessWow64Information, &ProcessInformation, 8u, 0LL) >= 0
        && ProcessInformation
        && dword_1801572C0 )
      {
        v4 = 1;
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v21 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v4, &v21);
  if ( (int)result >= 0 )
  {
    v16 = v21;
    v17 = v21;
    if ( !v21 )
      v17 = *(HANDLE *)(a3 + 136);
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(v17, &v24);
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx((_DWORD)v16, 0, 6, 0, 0LL, 0LL);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v18 = v32;
        v19 = NtWaitForSingleObject(v32, 1u, &Timeout);
        CriticalSectionOwnerInformation = v19;
        if ( v19 < 0 )
        {
          NtTerminateThread(v18, (unsigned int)v19);
        }
        else
        {
          ReturnLength = 0LL;
          CriticalSectionOwnerInformation = ZwQueryInformationThread(v18, 0LL, v34);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = v34[0];
        }
        NtClose(v18);
      }
      NtClose(v16);
      if ( v24 )
        RtlpDestroyExecutionRequiredRequest(v24);
      if ( CriticalSectionOwnerInformation < 0 )
        return (unsigned int)CriticalSectionOwnerInformation;
      if ( v4 == 1 )
      {
        CriticalSectionOwnerInformation = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a3
                                                                                          + *(_QWORD *)(a3 + 88)
                                                                                          + 80), 4));
      }
      else
      {
        CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(a3);
        if ( CriticalSectionOwnerInformation < 0 )
          return (unsigned int)CriticalSectionOwnerInformation;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        CriticalSectionOwnerInformation = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        CriticalSectionOwnerInformation = -1073741558;
      if ( CriticalSectionOwnerInformation >= 0 )
        return (unsigned int)RtlpValidateRemoteDebugInformation(
                               a3,
                               a2,
                               a3 + 208,
                               *(_QWORD *)(a3 + 72) - 208LL,
                               ReturnLength);
      return (unsigned int)CriticalSectionOwnerInformation;
    }
    v14 = v16;
LABEL_23:
    NtClose(v14);
    return (unsigned int)CriticalSectionOwnerInformation;
  }
  return result;
}
