/*
 * XREFs of TpTrimPools @ 0x180065B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x180093EB0 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TpTrimPools(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _UNKNOWN **v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdi
  char v13; // bp
  volatile signed __int64 *v14; // r14
  bool v15; // zf
  unsigned __int32 *v17; // rbx
  unsigned __int32 v18; // ecx
  signed __int32 v19; // eax
  char v20; // si
  volatile signed __int64 *v21; // rcx
  char *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r8d
  unsigned __int64 v26; // r8
  unsigned __int64 Heap; // r12
  unsigned __int64 v28; // r15
  unsigned __int32 *v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  char *v33; // rdx
  __int64 *v34; // rcx
  __int64 **v35; // rsi
  __int64 *v36; // rdi
  __int64 v37; // rcx
  __int64 **v38; // rax
  __int64 **v39; // rsi
  __int64 *v40; // rdi
  __int64 v41; // rcx
  __int64 **v42; // rax
  char v43; // [rsp+80h] [rbp+8h]
  int v44; // [rsp+90h] [rbp+18h] BYREF
  __int64 v45; // [rsp+98h] [rbp+20h] BYREF

  v45 = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock, a2, a3, a4);
  v7 = (_UNKNOWN **)TppPoolpList;
  while ( v7 != &TppPoolpList )
  {
    v17 = (unsigned __int32 *)(v7 - 48);
    v7 = (_UNKNOWN **)*v7;
    _m_prefetchw(v17);
    v18 = *v17;
    while ( v18 )
    {
      v4 = (char *)v18;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v18 + 1, v18);
      v15 = v18 == v19;
      v18 = v19;
      if ( v15 )
      {
        v20 = 1;
        goto LABEL_25;
      }
    }
    v20 = 0;
LABEL_25:
    v43 = v20;
    RtlAcquireSRWLockShared((volatile signed __int64 *)v17 + 46, v4, v5, v6);
    v21 = (volatile signed __int64 *)(v17 + 92);
    if ( *((_BYTE *)v17 + 377) )
    {
      RtlReleaseSRWLockShared(v21);
      v15 = v20 == 0;
      goto LABEL_14;
    }
    RtlReleaseSRWLockShared(v21);
    v14 = (volatile signed __int64 *)(v17 + 18);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v17 + 9, v22, v23, v24);
    v44 = 0;
    v13 = 1;
    if ( (int)NtSetInformationWorkerFactory(*((_QWORD *)v17 + 7), 12LL, &v44, 4LL) >= 0 && v44 )
    {
      v25 = 0;
      for ( v17[109] ^= (v17[109] ^ (2 * v44)) & 0xFFE;
            ((v17[109] >> 11) & 0xFFE) < (v17[109] & 0xFFE);
            v25 = RtlSleepConditionVariableSRW(v17 + 110, v17 + 18, &v45, 0LL) )
      {
        if ( v25 == 258 )
          break;
      }
      v26 = v17[109];
      if ( (v26 & 0x7FF000) != 0 )
      {
        Heap = RtlAllocateHeap(
                 (__int64)NtCurrentPeb()->ProcessHeap,
                 (TppHeapTag + 786432) | 8u,
                 8 * ((v26 >> 12) & 0x7FF));
        if ( Heap )
        {
          v28 = RtlAllocateHeap(
                  (__int64)NtCurrentPeb()->ProcessHeap,
                  (TppHeapTag + 786432) | 8u,
                  8LL * ((v17[109] >> 12) & 0x7FF));
          if ( v28 )
          {
            v12 = 0LL;
            v29 = v17 + 112;
            while ( *(unsigned __int32 **)v29 != v29 )
            {
              v30 = *(_QWORD **)v29;
              *(_QWORD *)(Heap + 8 * v12) = *(_QWORD *)(*(_QWORD *)v29 + 16LL);
              *(_QWORD *)(v28 + 8 * v12) = v30;
              v31 = *v30;
              v32 = (_QWORD *)v30[1];
              if ( *(_QWORD **)(*v30 + 8LL) != v30 || (_QWORD *)*v32 != v30 )
                __fastfail(3u);
              *v32 = v31;
              v12 = (unsigned int)(v12 + 1);
              *(_QWORD *)(v31 + 8) = v32;
            }
            v17[109] &= 0xFF800001;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)v17 + 9);
            v8 = 0;
            v9 = 0LL;
            do
            {
              if ( (unsigned int)v9 >= (unsigned int)v12 )
                break;
              v10 = (int)v9 + 64 <= (unsigned int)v12 ? 64LL : v12 & 0x3F;
              if ( (unsigned int)NtWaitForMultipleObjects(v10, Heap + 8 * v9, 0LL, 0LL, &v45) == 258 )
                break;
              ++v8;
              v9 = (unsigned int)(v9 + 64);
            }
            while ( v8 <= (unsigned int)v12 >> 6 );
            if ( (_DWORD)v12 )
            {
              v11 = (unsigned __int64 *)v28;
              do
              {
                NtClose(*(HANDLE *)((char *)v11 + Heap - v28));
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v11++);
                --v12;
              }
              while ( v12 );
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
            v13 = 0;
            v14 = (volatile signed __int64 *)(v17 + 18);
          }
          else
          {
            v39 = (__int64 **)(v17 + 112);
            while ( *v39 != (__int64 *)v39 )
            {
              v40 = *v39;
              v41 = **v39;
              v42 = (__int64 **)(*v39)[1];
              if ( *(__int64 **)(v41 + 8) != *v39 || *v42 != v40 )
                __fastfail(3u);
              *v42 = (__int64 *)v41;
              *(_QWORD *)(v41 + 8) = v42;
              NtClose((HANDLE)v40[2]);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)v40);
            }
            v17[109] &= 0xFF800001;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
          if ( !v13 )
            goto LABEL_13;
        }
        else
        {
          v35 = (__int64 **)(v17 + 112);
          while ( *v35 != (__int64 *)v35 )
          {
            v36 = *v35;
            v37 = **v35;
            v38 = (__int64 **)(*v35)[1];
            if ( *(__int64 **)(v37 + 8) != *v35 || *v38 != v36 )
              __fastfail(3u);
            *v38 = (__int64 *)v37;
            *(_QWORD *)(v37 + 8) = v38;
            NtClose((HANDLE)v36[2]);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)v36);
          }
          v17[109] &= 0xFF800001;
        }
      }
      else
      {
        v17[109] = v26 & 0xFFFFF001;
      }
    }
    RtlReleaseSRWLockExclusive(v14);
LABEL_13:
    v15 = v43 == 0;
LABEL_14:
    if ( !v15 )
    {
      if ( v17 == (unsigned __int32 *)TppPoolpGlobalPool )
      {
        v33 = (char *)&TppPoolpGlobalPoolLock;
        v34 = &TppPoolpGlobalPool;
        goto LABEL_40;
      }
      if ( v17 == (unsigned __int32 *)TppPoolpSerializedPool )
      {
        v33 = (char *)&TppPoolpSerializedPoolLock;
        v34 = &TppPoolpSerializedPool;
LABEL_40:
        TppPoolpDereferenceGlobalPool((const void **)v34, v33, v5, v6);
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17, 0xFFFFFFFF) == 1 )
      {
        TppPoolpFree(v17);
      }
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
