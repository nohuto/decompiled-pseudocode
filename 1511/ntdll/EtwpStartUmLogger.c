/*
 * XREFs of EtwpStartUmLogger @ 0x180044BE8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180044A70 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x180044FB8 (EtwpSendSessionNotification.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180045078 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpCreateEtwThread @ 0x180045130 (EtwpCreateEtwThread.c)
 *     EtwpAllocateTraceBufferPool @ 0x180045378 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvaliableLoggerId @ 0x1800476A0 (EtwpGetNextAvaliableLoggerId.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180047788 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     EtwpInitializeCompression @ 0x1800F4BAC (EtwpInitializeCompression.c)
 */

__int64 __fastcall EtwpStartUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v5; // cf
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 result; // rax
  int v11; // eax
  unsigned __int64 v12; // rcx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // edx
  __int64 NumberOfProcessors; // r8
  __int64 v17; // rbp
  __int64 inited; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  ULONG TraceBufferPool; // esi
  int v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // r14
  __int64 v28; // rbp
  __int64 EtwThread; // rax
  void *v30; // rcx
  unsigned int v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v31 = a1;
  v5 = *(_DWORD *)a4 < 0xB0u;
  v32 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( v5 )
    return 87LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  v11 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v11 & 0x40B) != 0 )
  {
    v12 = (v11 & 0x40B) - (((unsigned __int64)(v11 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v12 & 0x3333333333333333LL)
          + ((v12 >> 2) & 0x3333333333333333LL)
          + (((v12 & 0x3333333333333333LL) + ((v12 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 != 1 )
      return 87LL;
  }
  else
  {
    *(_DWORD *)(a4 + 64) = v11 | 1;
  }
  v13 = *(_DWORD *)(a4 + 64);
  if ( (v13 & 0x2000000) != 0
    || (v13 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87LL;
  }
  v14 = *(_DWORD *)(a4 + 76);
  if ( v14 )
  {
    if ( *(_DWORD *)(a4 + 68) || v14 < 0 )
      return 87LL;
  }
  if ( (v13 & 6) == 6
    || (*(_DWORD *)(a4 + 64) & 0xC000) == 0xC000
    || (v13 & 0x4000000) != 0 && ((v13 & 2) != 0 || (v13 & 4) != 0 || (v13 & 0x20) != 0 || (v13 & 0x400) != 0) )
  {
    return 87LL;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v32 + 20) + 8));
    return 5010LL;
  }
  result = EtwpGetNextAvaliableLoggerId(a4, &v31);
  if ( !(_DWORD)result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v15 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v9 = *(_DWORD *)a4 - v15;
      v8 = a4 + v15;
      NumberOfProcessors = 0xFFFFFFFFLL;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1LL;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v17 = v31;
    inited = EtwpInitLoggerContext(a4, v31, NumberOfProcessors, v8, v9);
    v32 = inited;
    v20 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)v17 + 8));
      return 8LL;
    }
    if ( (*(_DWORD *)(inited + 332) & 0x4000000) != 0 )
    {
      v21 = EtwpInitializeCompression(inited);
      if ( v21 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v21);
        if ( TraceBufferPool )
          goto LABEL_48;
      }
    }
    v23 = *(_DWORD *)(v20 + 332);
    if ( (v23 & 0x400) == 0 )
    {
      LOBYTE(v19) = (v23 & 4) != 0;
      v24 = EtwpAddLogHeaderToLogFile(v20, v8, v9, v19);
      if ( v24 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v24);
        if ( TraceBufferPool )
          goto LABEL_48;
      }
    }
    v25 = *(unsigned int *)(v20 + 208);
    v26 = 0xFFFF;
    if ( (unsigned __int64)(v25 - 72) < 0xFFFF )
      v26 = v25 - 72;
    *(_DWORD *)(v20 + 212) = v26 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v20);
    if ( TraceBufferPool )
      goto LABEL_48;
    v27 = 2 * v17;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v17 + 8));
    v28 = v32;
    if ( (*(_DWORD *)(v20 + 332) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(EtwpLogger, v32);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
LABEL_45:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v27 + 8));
        if ( !TraceBufferPool )
        {
          *a2 = *(_DWORD *)a4;
          *a3 = *(_DWORD *)a4;
          return TraceBufferPool;
        }
        v20 = v32;
LABEL_48:
        v30 = *(void **)(a4 + 88);
        if ( v30 )
        {
          NtClose(v30);
          *(_QWORD *)(a4 + 88) = 0LL;
          *(_QWORD *)(v20 + 144) = 0LL;
        }
        EtwpFreeLoggerContext((PVOID)v20);
        return TraceBufferPool;
      }
      *(_QWORD *)(v28 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v28);
    *(_QWORD *)(EtwpLoggerArray + 8 * v27) = v28;
    EtwpSendSessionNotification(v28, 5LL);
    goto LABEL_45;
  }
  return result;
}
