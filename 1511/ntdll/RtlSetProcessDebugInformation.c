/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800CD370
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x1800CD8C0 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006CF68 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x1800A5B00 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     AVrfpSetProcessVerifierOptions @ 0x1800CF328 (AVrfpSetProcessVerifierOptions.c)
 *     RtlControlStackTraceDataBase @ 0x1800E9210 (RtlControlStackTraceDataBase.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(void *a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  HANDLE v8; // rdi
  unsigned int *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-78h]
  int v12; // [rsp+60h] [rbp-48h]
  HANDLE v13; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( ((a2 & 1) == 0 || (InformationThread = AVrfpSetProcessVerifierOptions(a3)) == 0) && (v5 & 2) != 0 )
    {
      v9 = *(unsigned int **)(a3 + 104);
      if ( v9 )
      {
        v10 = *v9;
        if ( !(_DWORD)v10 && (v9[1] < 0x18 || *((_QWORD *)v9 + 1) || *((_QWORD *)v9 + 2)) )
          return (unsigned int)-1073741811;
        else
          return (unsigned int)RtlControlStackTraceDataBase(v10, v9[1], v9 + 2);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    v13 = 0LL;
    result = RtlpChangeQueryDebugBufferTarget((_QWORD *)a3, (__int64)a1, 0, &v13);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = RtlpCreateUserThreadEx(
                          (__int64)v13,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v11,
                          (__int64)RtlpSetProcessDebugInformationRemote,
                          *(_QWORD *)(a3 + 16),
                          &Handle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = Handle;
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread < 0) )
      {
        NtTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v12;
      }
      NtClose(v8);
    }
    NtClose(v13);
  }
  return (unsigned int)InformationThread;
}
