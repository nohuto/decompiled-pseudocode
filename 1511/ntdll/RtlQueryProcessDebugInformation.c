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

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int CriticalSectionOwnerInformation; // ebx
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  int v9; // r13d
  __int64 v10; // r8
  int v11; // edx
  HANDLE v12; // rcx
  __int64 result; // rax
  int v14; // eax
  HANDLE v15; // rcx
  HANDLE v16; // r14
  HANDLE v17; // rcx
  HANDLE v18; // r15
  NTSTATUS v19; // eax
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  HANDLE v22; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  HANDLE v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 ProcessInformation; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp-70h] BYREF
  int v28; // [rsp+98h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+B8h] [rbp-48h]
  HANDLE v33; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v34[18]; // [rsp+D0h] [rbp-30h] BYREF
  int v35[24]; // [rsp+160h] [rbp+60h] BYREF
  HANDLE Handle; // [rsp+1E8h] [rbp+E8h] BYREF

  CriticalSectionOwnerInformation = 0;
  Handle = 0LL;
  v4 = 0;
  v5 = 0LL;
  v21 = (__int64)RtlpQueryProcessDebugInformationRemote;
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
      v28 = 48;
      v29 = 0LL;
      v31 = 0;
      v30 = 0LL;
      v23 = a1;
      v32 = 0LL;
      v24 = 0LL;
      v14 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v28, &v23);
      v15 = Handle;
      v5 = v34;
      v11 = a2 & 0x41;
      if ( v14 < 0 )
        v15 = 0LL;
      v34[1] = RtlpQueryReadVirtualMemory;
      Handle = v15;
      v34[2] = NtQueryInformationProcess;
      v34[0] = v15;
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
    v12 = Handle;
    if ( !Handle )
      return (unsigned int)CriticalSectionOwnerInformation;
    goto LABEL_28;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v28 = 48;
    v29 = 0LL;
    v31 = 0;
    v30 = 0LL;
    v23 = a1;
    v32 = 0LL;
    v24 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 1024LL, &v28, &v23) >= 0 )
    {
      if ( NtQueryInformationProcess(Handle, ProcessWow64Information, &ProcessInformation, 8u, 0LL) >= 0
        && ProcessInformation )
      {
        v21 = (unsigned int)dword_1801552B4;
        if ( dword_1801552B4 )
          v4 = 1;
        else
          v21 = (__int64)RtlpQueryProcessDebugInformationRemote;
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v22 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v4, &v22);
  if ( (int)result >= 0 )
  {
    v16 = v22;
    v17 = v22;
    if ( !v22 )
      v17 = *(HANDLE *)(a3 + 136);
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(v17, &v25);
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          (__int64)v16,
                                          0LL,
                                          6,
                                          0,
                                          0LL,
                                          0LL,
                                          v20,
                                          v21,
                                          *(_QWORD *)(a3 + 16),
                                          &v33,
                                          0LL);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v18 = v33;
        v19 = NtWaitForSingleObject(v33, 1u, &Timeout);
        CriticalSectionOwnerInformation = v19;
        if ( v19 < 0 )
        {
          NtTerminateThread(v18, (unsigned int)v19);
        }
        else
        {
          CriticalSectionOwnerInformation = ZwQueryInformationThread(v18, 0LL, v35, 48LL, 0LL);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = v35[0];
        }
        NtClose(v18);
      }
      NtClose(v16);
      if ( v25 )
        RtlpDestroyExecutionRequiredRequest(v25);
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
        return (unsigned int)RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
      return (unsigned int)CriticalSectionOwnerInformation;
    }
    v12 = v16;
LABEL_28:
    NtClose(v12);
    return (unsigned int)CriticalSectionOwnerInformation;
  }
  return result;
}
