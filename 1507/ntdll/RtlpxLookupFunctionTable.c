/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180015180
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800136F0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     RtlPcToFileHeader @ 0x180018580 (RtlPcToFileHeader.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlLookupFunctionTable @ 0x1800CAF40 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180015594 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 *a2)
{
  bool v3; // zf
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  char *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  int v15; // edx
  unsigned __int64 v16; // rbx
  signed __int64 v17; // rcx
  signed __int64 v18; // rcx
  signed __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rax
  bool v24; // cl
  char *v25; // rdx
  signed __int64 v26; // rax
  int j; // ecx
  _QWORD *v29; // rax
  __int64 i; // rcx
  unsigned __int64 v31; // [rsp+30h] [rbp-29h] BYREF
  int v32; // [rsp+38h] [rbp-21h]
  int v33; // [rsp+40h] [rbp-19h]
  unsigned __int64 v34; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 *v35; // [rsp+58h] [rbp-1h]
  __int64 v36; // [rsp+60h] [rbp+7h]
  void *UniqueThread; // [rsp+68h] [rbp+Fh]
  int v38; // [rsp+70h] [rbp+17h]
  signed __int32 v39[3]; // [rsp+74h] [rbp+1Bh] BYREF
  int v40; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+D0h] [rbp+77h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v3 )
  {
    v40 = 0;
    v6 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !v6 )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable != 1 )
      {
        v7 = 1;
        v8 = LdrpInvertedFunctionTable - 1;
        while ( v8 >= v7 )
        {
          v9 = (v8 + v7) >> 1;
          v10 = (char *)&xmmword_180157330 + 24 * v9;
          v11 = *((_QWORD *)v10 + 1);
          if ( a1 < v11 )
          {
            if ( !v9 )
              break;
            v8 = v9 - 1;
          }
          else
          {
            if ( a1 < v11 + *((unsigned int *)v10 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v10;
              a2[2] = *((_QWORD *)v10 + 2);
              v5 = *a2;
              break;
            }
            v7 = v9 + 1;
          }
        }
      }
      v12 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      v13 = v12;
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(3221226084LL);
        if ( (v12 & 2) != 0 )
        {
LABEL_39:
          if ( (v13 & 8) != 0 )
          {
            v29 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v29[1] )
              v29 = (_QWORD *)*v29;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v20 = -9LL;
          }
          else
          {
            v20 = -1LL;
          }
          while ( 1 )
          {
            v21 = (v13 & 6) == 2 ? v20 + 4 : v20;
            v22 = v21 + v13;
            v23 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v21 + v13, v13);
            if ( v13 == v23 )
              break;
            v13 = v23;
          }
          if ( (v13 & 6) == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v22, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v18 = v13 - 16;
          if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v18 = 0LL;
          v19 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v18, v13);
          v3 = v13 == v19;
          v13 = v19;
          if ( v3 )
            break;
          if ( (v19 & 2) != 0 )
            goto LABEL_39;
        }
      }
LABEL_14:
      if ( v5 || !byte_18015732C )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (v6 & 1) != 0 && (((v6 >> 1) & 1) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v24 = 0;
        v39[0] = 2;
        v36 = 0LL;
        if ( ((v6 >> 1) & 1) != 0 )
        {
          v35 = 0LL;
          v38 = -1;
          v34 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
          v25 = (char *)((unsigned __int64)&v34 | v6 & 8 | 7);
          v24 = (v6 & 4) == 0;
        }
        else
        {
          v38 = -2;
          v35 = &v34;
          v25 = (char *)&v34 + 3;
        }
        v26 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, (signed __int64)v25, v6);
        v3 = v6 == v26;
        v6 = v26;
        if ( !v3 )
          goto LABEL_51;
        if ( v24 )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = SRWLockSpinCount; j; --j )
          {
            if ( (v39[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v39, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v39[0] & 4) == 0 );
        }
      }
      else
      {
        v17 = v6 | 1;
        if ( (v6 & 2) == 0 )
          v17 += 16LL;
        if ( v6 == _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v17, v6) )
          goto LABEL_3;
LABEL_51:
        RtlBackoff(&v40);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        v6 = LdrpInvertedFunctionTableSRWLock;
      }
    }
  }
LABEL_16:
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v31, 24LL, 0LL) >= 0 )
  {
    v16 = v31;
    if ( v31 )
    {
      if ( (v33 & 2) == 0 && (v33 & 1) == 0 && a1 >= v31 )
      {
        LOBYTE(v15) = 1;
        if ( (int)RtlpImageDirectoryEntryToDataEx(v31, v15, 3, (int)a2 + 20, (__int64)&v41) < 0 )
          v5 = 0LL;
        else
          v5 = v41;
        *((_DWORD *)a2 + 4) = v32;
        *a2 = v5;
        a2[1] = v16;
      }
    }
  }
  return v5;
}
