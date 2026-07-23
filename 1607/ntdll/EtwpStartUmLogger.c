/*
 * XREFs of EtwpStartUmLogger @ 0x18005395C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180053810 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpInitializeCompression @ 0x180003078 (EtwpInitializeCompression.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     EtwpSendSessionNotification @ 0x180053C88 (EtwpSendSessionNotification.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180054328 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpCreateEtwThread @ 0x1800543E0 (EtwpCreateEtwThread.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054620 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvaliableLoggerId @ 0x180056E1C (EtwpGetNextAvaliableLoggerId.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180056F10 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall EtwpStartUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v5; // cf
  __int64 v8; // r14
  unsigned int v9; // r15d
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  __int64 result; // rax
  __int64 NumberOfProcessors; // r8
  __int64 v16; // rbp
  __int64 inited; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  int v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v25; // r14
  __int64 v26; // rbp
  __int64 EtwThread; // rax
  unsigned int v28; // edx
  NTSTATUS v29; // eax
  ULONG v30; // eax
  void *v31; // rcx
  unsigned int v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h]

  v32 = a1;
  v5 = *(_DWORD *)a4 < 0xB0u;
  v33 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( v5 )
    return 87LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  v10 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v10 & 0x40B) != 0 )
  {
    v11 = (v10 & 0x40B) - (((unsigned __int64)(v10 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v11 & 0x3333333333333333LL)
          + ((v11 >> 2) & 0x3333333333333333LL)
          + (((v11 & 0x3333333333333333LL) + ((v11 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == 1 )
      goto LABEL_4;
    return 87LL;
  }
  *(_DWORD *)(a4 + 64) = v10 | 1;
LABEL_4:
  v12 = *(_DWORD *)(a4 + 64);
  if ( (v12 & 0x2000000) != 0
    || (v12 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87LL;
  }
  v13 = *(_DWORD *)(a4 + 76);
  if ( v13 )
  {
    if ( *(_DWORD *)(a4 + 68) || v13 < 0 )
      return 87LL;
  }
  if ( (v12 & 6) == 6
    || (*(_DWORD *)(a4 + 64) & 0xC000) == 0xC000
    || (v12 & 0x4000000) != 0 && ((v12 & 2) != 0 || (v12 & 4) != 0 || (v12 & 0x20) != 0 || (v12 & 0x400) != 0) )
  {
    return 87LL;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v33 + 20) + 8));
    return 5010LL;
  }
  result = EtwpGetNextAvaliableLoggerId(a4, &v32);
  if ( !(_DWORD)result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v28 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v9 = *(_DWORD *)a4 - v28;
      v8 = a4 + v28;
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
    v16 = v32;
    inited = EtwpInitLoggerContext(a4, v32, NumberOfProcessors, v8, v9);
    v33 = inited;
    v19 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v16 + 8));
      return 8LL;
    }
    if ( (*(_DWORD *)(inited + 324) & 0x4000000) != 0 )
    {
      v29 = EtwpInitializeCompression(inited);
      if ( v29 )
      {
        v30 = RtlNtStatusToDosError(v29);
        TraceBufferPool = v30;
        if ( v30 )
          goto LABEL_56;
      }
    }
    v20 = *(_DWORD *)(v19 + 324);
    if ( (v20 & 0x400) == 0 )
    {
      LOBYTE(v18) = (v20 & 4) != 0;
      v21 = EtwpAddLogHeaderToLogFile(v19, v8, v9, v18);
      if ( v21 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v21);
        if ( TraceBufferPool )
          goto LABEL_56;
      }
    }
    v22 = *(unsigned int *)(v19 + 208);
    v23 = 0xFFFF;
    if ( (unsigned __int64)(v22 - 72) < 0xFFFF )
      v23 = v22 - 72;
    *(_DWORD *)(v19 + 212) = v23 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v19);
    if ( TraceBufferPool )
      goto LABEL_56;
    v25 = 2 * v16;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v16 + 8));
    v26 = v33;
    if ( (*(_DWORD *)(v19 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(EtwpLogger, v33);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_26;
      }
      *(_QWORD *)(v26 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v26);
    *(_QWORD *)(EtwpLoggerArray + 8 * v25) = v26;
    EtwpSendSessionNotification(v26, 5LL, 0LL);
LABEL_26:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v25 + 8));
    if ( !TraceBufferPool )
    {
      *a2 = *(_DWORD *)a4;
      *a3 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
    v19 = v33;
LABEL_56:
    v31 = *(void **)(a4 + 88);
    if ( v31 )
    {
      NtClose(v31);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v19 + 144) = 0LL;
    }
    EtwpFreeLoggerContext((unsigned int *)v19);
    return TraceBufferPool;
  }
  return result;
}
