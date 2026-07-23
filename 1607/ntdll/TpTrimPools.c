/*
 * XREFs of TpTrimPools @ 0x180062610
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A6F70 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // r13
  _RTL_SRWLOCK *v3; // rdi
  char v4; // bp
  NTSTATUS v5; // r8d
  unsigned __int64 v6; // r8
  char *Heap; // r12
  PVOID *v8; // r15
  __int64 v9; // rdi
  _UNKNOWN **v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rbx
  ULONG v16; // ecx
  PVOID *v17; // rbx
  HANDLE **v18; // rsi
  HANDLE *v19; // rdi
  HANDLE **v20; // rcx
  HANDLE **v21; // rax
  HANDLE **v22; // rsi
  HANDLE *v23; // rdi
  HANDLE **v24; // rcx
  HANDLE **v25; // rax
  int WorkerFactoryInformation; // [rsp+88h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF
  _RTL_SRWLOCK *v28; // [rsp+98h] [rbp+20h]

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0 - 48;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 + 46);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 + 46);
    if ( *((_BYTE *)v1 + 377) )
      goto LABEL_31;
    v3 = (_RTL_SRWLOCK *)(v1 + 9);
    v28 = (_RTL_SRWLOCK *)(v1 + 9);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( NtSetInformationWorkerFactory(v1[7], WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = 0;
      for ( *((_DWORD *)v1 + 109) ^= (*((_DWORD *)v1 + 109) ^ (2 * WorkerFactoryInformation)) & 0xFFE;
            ((*((_DWORD *)v1 + 109) >> 11) & 0xFFEu) < (*((_DWORD *)v1 + 109) & 0xFFEu);
            v5 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 55, (PRTL_SRWLOCK)v1 + 9, &Timeout, 0) )
      {
        if ( v5 == 258 )
          break;
      }
      v6 = *((unsigned int *)v1 + 109);
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 109) = v6 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 8 * ((v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v18 = (HANDLE **)(v1 + 56);
        while ( *v18 != (HANDLE *)v18 )
        {
          v19 = *v18;
          v20 = (HANDLE **)**v18;
          v21 = (HANDLE **)(*v18)[1];
          if ( v20[1] != *v18 || *v21 != v19 )
            __fastfail(3u);
          *v21 = (HANDLE *)v20;
          v20[1] = (HANDLE *)v21;
          NtClose(v19[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v19);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
LABEL_28:
        v3 = v28;
        goto LABEL_30;
      }
      v8 = (PVOID *)RtlAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      (TppHeapTag + 786432) | 8,
                      8LL * ((*((_DWORD *)v1 + 109) >> 12) & 0x7FF));
      if ( v8 )
      {
        v9 = 0LL;
        v10 = v1 + 56;
        while ( *v10 != (_UNKNOWN *)v10 )
        {
          v11 = *v10;
          *(_QWORD *)&Heap[8 * v9] = *((_QWORD *)*v10 + 2);
          v8[v9] = v11;
          v12 = *v11;
          v13 = (_QWORD *)v11[1];
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v13 != v11 )
            __fastfail(3u);
          *v13 = v12;
          v9 = (unsigned int)(v9 + 1);
          *(_QWORD *)(v12 + 8) = v13;
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 + 46);
        v14 = 0;
        v15 = 0LL;
        do
        {
          if ( (unsigned int)v15 >= (unsigned int)v9 )
            break;
          v16 = (int)v15 + 64 <= (unsigned int)v9 ? 64 : v9 & 0x3F;
          if ( NtWaitForMultipleObjects(v16, (HANDLE *)&Heap[8 * v15], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v14;
          v15 = (unsigned int)(v15 + 64);
        }
        while ( v14 <= (unsigned int)v9 >> 6 );
        if ( (_DWORD)v9 )
        {
          v17 = v8;
          do
          {
            NtClose(*(PVOID *)((char *)v17 + Heap - (char *)v8));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v17++);
            --v9;
          }
          while ( v9 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v8);
        v4 = 0;
      }
      else
      {
        v22 = (HANDLE **)(v1 + 56);
        while ( *v22 != (HANDLE *)v22 )
        {
          v23 = *v22;
          v24 = (HANDLE **)**v22;
          v25 = (HANDLE **)(*v22)[1];
          if ( v24[1] != *v22 || *v25 != v23 )
            __fastfail(3u);
          *v25 = (HANDLE *)v24;
          v24[1] = (HANDLE *)v25;
          NtClose(v23[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v23);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v4 )
        goto LABEL_28;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_31:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
