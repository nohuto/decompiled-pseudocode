/*
 * XREFs of EtwpStartUmLogger @ 0x1800761E0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18000A160 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18000A490 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18000A634 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x18000A7A8 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     EtwpCreateEtwThread @ 0x1800764A0 (EtwpCreateEtwThread.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvaliableLoggerId @ 0x180076D84 (EtwpGetNextAvaliableLoggerId.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     EtwpInitializeCompression @ 0x1800F51B0 (EtwpInitializeCompression.c)
 */

__int64 __fastcall EtwpStartUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v5; // cf
  __int64 v8; // r14
  int v9; // r15d
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  __int64 result; // rax
  __int64 NumberOfProcessors; // r8
  __int64 v16; // rbp
  __int64 inited; // rax
  __int64 v18; // rdi
  int v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 EtwThread; // rax
  unsigned int v27; // edx
  NTSTATUS v28; // eax
  void *v29; // rcx
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = a1;
  v5 = *(_DWORD *)a4 < 0xB0u;
  v31 = 0LL;
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
  if ( (unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144), &v31) )
  {
    result = EtwpGetNextAvaliableLoggerId(a4, &v30);
    if ( !(_DWORD)result )
    {
      if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
      {
        v27 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
        v9 = *(_DWORD *)a4 - v27;
        v8 = a4 + v27;
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
      v16 = v30;
      inited = EtwpInitLoggerContext(a4, v30, NumberOfProcessors, v8, v9);
      v31 = inited;
      v18 = inited;
      if ( inited )
      {
        if ( (*(_DWORD *)(inited + 332) & 0x4000000) != 0 )
        {
          v28 = EtwpInitializeCompression(inited);
          if ( v28 )
          {
            TraceBufferPool = RtlNtStatusToDosError(v28);
            if ( TraceBufferPool )
              goto LABEL_51;
          }
        }
        v19 = *(_DWORD *)(v18 + 332);
        if ( (v19 & 0x400) == 0 )
        {
          v20 = EtwpAddLogHeaderToLogFile(v18, v8, v9, (v19 & 4) != 0);
          if ( v20 )
          {
            TraceBufferPool = RtlNtStatusToDosError(v20);
            if ( TraceBufferPool )
              goto LABEL_51;
          }
        }
        v21 = *(unsigned int *)(v18 + 208);
        v22 = 0xFFFF;
        if ( (unsigned __int64)(v21 - 72) < 0xFFFF )
          v22 = v21 - 72;
        *(_DWORD *)(v18 + 212) = v22 & 0xFFFFFFF8;
        TraceBufferPool = EtwpAllocateTraceBufferPool(v18);
        if ( TraceBufferPool )
          goto LABEL_51;
        v24 = 2 * v16;
        _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v16 + 8));
        v25 = v31;
        if ( (*(_DWORD *)(v18 + 332) & 0x400) == 0 )
        {
          EtwThread = EtwpCreateEtwThread(EtwpLogger, v31);
          if ( !EtwThread )
          {
            TraceBufferPool = NtCurrentTeb()->LastErrorValue;
            goto LABEL_28;
          }
          *(_QWORD *)(v25 + 32) = EtwThread;
        }
        EtwpGetUmLoggerInfoFromContext(a4, v25);
        *(_QWORD *)(EtwpLoggerArray + 8 * v24) = v25;
        EtwpSendSessionNotification(v25, 5, 0);
LABEL_28:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v24 + 8));
        if ( !TraceBufferPool )
        {
          *a2 = *(_DWORD *)a4;
          *a3 = *(_DWORD *)a4;
          return TraceBufferPool;
        }
        v18 = v31;
LABEL_51:
        v29 = *(void **)(a4 + 88);
        if ( v29 )
        {
          NtClose(v29);
          *(_QWORD *)(a4 + 88) = 0LL;
          *(_QWORD *)(v18 + 144) = 0LL;
        }
        EtwpFreeLoggerContext((unsigned int *)v18);
        return TraceBufferPool;
      }
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v16 + 8));
      return 8LL;
    }
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v31 + 20) + 8));
    return 5010LL;
  }
  return result;
}
