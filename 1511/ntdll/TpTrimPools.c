/*
 * XREFs of TpTrimPools @ 0x180067D30
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A5C10 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r13
  unsigned int v1; // ebp
  __int64 v2; // rsi
  ULONG v3; // ecx
  PVOID *v4; // rsi
  __int64 v5; // rdi
  char v6; // bp
  _RTL_SRWLOCK *v7; // r14
  bool v8; // zf
  signed __int32 *v9; // rbx
  signed __int32 v10; // ecx
  signed __int32 v11; // eax
  char v12; // si
  _RTL_SRWLOCK *v13; // rcx
  NTSTATUS v14; // r8d
  unsigned __int64 v15; // r8
  char *Heap; // r12
  PVOID *v17; // r15
  signed __int32 *v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _RTL_SRWLOCK *v22; // rdx
  const void **v23; // rcx
  HANDLE **v24; // rsi
  HANDLE *v25; // rdi
  HANDLE **v26; // rcx
  HANDLE **v27; // rax
  HANDLE **v28; // rsi
  HANDLE *v29; // rdi
  HANDLE **v30; // rcx
  HANDLE **v31; // rax
  char v32; // [rsp+80h] [rbp+8h]
  int WorkerFactoryInformation; // [rsp+90h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp+20h] BYREF

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v9 = (signed __int32 *)(v0 - 48);
    v0 = (_UNKNOWN **)*v0;
    _m_prefetchw(v9);
    v10 = *v9;
    while ( v10 )
    {
      v11 = _InterlockedCompareExchange(v9, v10 + 1, v10);
      v8 = v10 == v11;
      v10 = v11;
      if ( v8 )
      {
        v12 = 1;
        goto LABEL_25;
      }
    }
    v12 = 0;
LABEL_25:
    v32 = v12;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v9 + 46);
    v13 = (_RTL_SRWLOCK *)(v9 + 92);
    if ( *((_BYTE *)v9 + 377) )
    {
      RtlReleaseSRWLockShared(v13);
      v8 = v12 == 0;
      goto LABEL_14;
    }
    RtlReleaseSRWLockShared(v13);
    v7 = (_RTL_SRWLOCK *)(v9 + 18);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9 + 9);
    WorkerFactoryInformation = 0;
    v6 = 1;
    if ( NtSetInformationWorkerFactory(*((HANDLE *)v9 + 7), WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v14 = 0;
      for ( v9[109] ^= (v9[109] ^ (2 * WorkerFactoryInformation)) & 0xFFE;
            (((unsigned int)v9[109] >> 11) & 0xFFE) < (v9[109] & 0xFFEu);
            v14 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v9 + 55, (PRTL_SRWLOCK)v9 + 9, &Timeout, 0) )
      {
        if ( v14 == 258 )
          break;
      }
      v15 = (unsigned int)v9[109];
      if ( (v15 & 0x7FF000) != 0 )
      {
        Heap = (char *)RtlAllocateHeap(
                         NtCurrentPeb()->ProcessHeap,
                         (TppHeapTag + 786432) | 8,
                         8 * ((v15 >> 12) & 0x7FF));
        if ( Heap )
        {
          v17 = (PVOID *)RtlAllocateHeap(
                           NtCurrentPeb()->ProcessHeap,
                           (TppHeapTag + 786432) | 8,
                           8LL * (((unsigned int)v9[109] >> 12) & 0x7FF));
          if ( v17 )
          {
            v5 = 0LL;
            v18 = v9 + 112;
            while ( *(signed __int32 **)v18 != v18 )
            {
              v19 = *(_QWORD **)v18;
              *(_QWORD *)&Heap[8 * v5] = *(_QWORD *)(*(_QWORD *)v18 + 16LL);
              v17[v5] = v19;
              v20 = *v19;
              v21 = (_QWORD *)v19[1];
              if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
                __fastfail(3u);
              *v21 = v20;
              v5 = (unsigned int)(v5 + 1);
              *(_QWORD *)(v20 + 8) = v21;
            }
            v9[109] &= 0xFF800001;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9 + 9);
            v1 = 0;
            v2 = 0LL;
            do
            {
              if ( (unsigned int)v2 >= (unsigned int)v5 )
                break;
              v3 = (int)v2 + 64 <= (unsigned int)v5 ? 64 : v5 & 0x3F;
              if ( NtWaitForMultipleObjects(v3, (HANDLE *)&Heap[8 * v2], WaitAll, 0, &Timeout) == 258 )
                break;
              ++v1;
              v2 = (unsigned int)(v2 + 64);
            }
            while ( v1 <= (unsigned int)v5 >> 6 );
            if ( (_DWORD)v5 )
            {
              v4 = v17;
              do
              {
                NtClose(*(PVOID *)((char *)v4 + Heap - (char *)v17));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v4++);
                --v5;
              }
              while ( v5 );
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v17);
            v6 = 0;
            v7 = (_RTL_SRWLOCK *)(v9 + 18);
          }
          else
          {
            v28 = (HANDLE **)(v9 + 112);
            while ( *v28 != (HANDLE *)v28 )
            {
              v29 = *v28;
              v30 = (HANDLE **)**v28;
              v31 = (HANDLE **)(*v28)[1];
              if ( v30[1] != *v28 || *v31 != v29 )
                __fastfail(3u);
              *v31 = (HANDLE *)v30;
              v30[1] = (HANDLE *)v31;
              NtClose(v29[2]);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
            }
            v9[109] &= 0xFF800001;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
          if ( !v6 )
            goto LABEL_13;
        }
        else
        {
          v24 = (HANDLE **)(v9 + 112);
          while ( *v24 != (HANDLE *)v24 )
          {
            v25 = *v24;
            v26 = (HANDLE **)**v24;
            v27 = (HANDLE **)(*v24)[1];
            if ( v26[1] != *v24 || *v27 != v25 )
              __fastfail(3u);
            *v27 = (HANDLE *)v26;
            v26[1] = (HANDLE *)v27;
            NtClose(v25[2]);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v25);
          }
          v9[109] &= 0xFF800001;
        }
      }
      else
      {
        v9[109] = v15 & 0xFFFFF001;
      }
    }
    RtlReleaseSRWLockExclusive(v7);
LABEL_13:
    v8 = v32 == 0;
LABEL_14:
    if ( !v8 )
    {
      if ( v9 == TppPoolpGlobalPool )
      {
        v22 = &TppPoolpGlobalPoolLock;
        v23 = (const void **)&TppPoolpGlobalPool;
        goto LABEL_42;
      }
      if ( v9 == (signed __int32 *)TppPoolpSerializedPool )
      {
        v22 = &TppPoolpSerializedPoolLock;
        v23 = (const void **)&TppPoolpSerializedPool;
LABEL_42:
        TppPoolpDereferenceGlobalPool(v23, v22);
      }
      else if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      {
        TppPoolpFree(v9);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
