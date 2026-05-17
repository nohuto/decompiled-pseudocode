/*
 * XREFs of TpTrimPools @ 0x180062620
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180062960 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A6F70 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TpTrimPools(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _UNKNOWN **v7; // r14
  _UNKNOWN **v8; // rbx
  volatile signed __int64 *v9; // r13
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rdi
  char v14; // bp
  int v15; // r8d
  unsigned __int64 v16; // r8
  unsigned __int64 Heap; // r12
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  _UNKNOWN **v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 *v27; // rbx
  __int64 **v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // rcx
  __int64 **v32; // rax
  __int64 **v33; // rsi
  __int64 *v34; // rdi
  __int64 v35; // rcx
  __int64 **v36; // rax
  int v37; // [rsp+88h] [rbp+10h] BYREF
  __int64 v38; // [rsp+90h] [rbp+18h] BYREF
  volatile signed __int64 *v39; // [rsp+98h] [rbp+20h]

  v38 = -1000000LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, a2, a3, a4);
  v7 = (_UNKNOWN **)TppPoolpList;
  while ( v7 != &TppPoolpList )
  {
    v8 = v7 - 48;
    v7 = (_UNKNOWN **)*v7;
    v9 = (volatile signed __int64 *)(v8 + 46);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v8 + 46, v4, v5, v6);
    if ( *((_BYTE *)v8 + 377) )
      goto LABEL_31;
    v13 = (volatile signed __int64 *)(v8 + 9);
    v39 = (volatile signed __int64 *)(v8 + 9);
    RtlAcquireSRWLockExclusive((unsigned __int64)(v8 + 9), v10, v11, v12);
    v37 = 0;
    v14 = 1;
    if ( (int)NtSetInformationWorkerFactory(v8[7], 12LL, &v37) >= 0 && v37 )
    {
      v15 = 0;
      for ( *((_DWORD *)v8 + 109) ^= (*((_DWORD *)v8 + 109) ^ (2 * v37)) & 0xFFE;
            ((*((_DWORD *)v8 + 109) >> 11) & 0xFFEu) < (*((_DWORD *)v8 + 109) & 0xFFEu);
            v15 = RtlSleepConditionVariableSRW(v8 + 55, v8 + 9, &v38, 0LL) )
      {
        if ( v15 == 258 )
          break;
      }
      v16 = *((unsigned int *)v8 + 109);
      if ( (v16 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v8 + 109) = v16 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * ((v16 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v29 = (__int64 **)(v8 + 56);
        while ( *v29 != (__int64 *)v29 )
        {
          v30 = *v29;
          v31 = **v29;
          v32 = (__int64 **)(*v29)[1];
          if ( *(__int64 **)(v31 + 8) != *v29 || *v32 != v30 )
            __fastfail(3u);
          *v32 = (__int64 *)v31;
          *(_QWORD *)(v31 + 8) = v32;
          NtClose((HANDLE)v30[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)v30);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
LABEL_28:
        v13 = v39;
        goto LABEL_30;
      }
      v18 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8LL * ((*((_DWORD *)v8 + 109) >> 12) & 0x7FF));
      if ( v18 )
      {
        v19 = 0LL;
        v20 = v8 + 56;
        while ( *v20 != (_UNKNOWN *)v20 )
        {
          v21 = *v20;
          *(_QWORD *)(Heap + 8 * v19) = *((_QWORD *)*v20 + 2);
          *(_QWORD *)(v18 + 8 * v19) = v21;
          v22 = *v21;
          v23 = (_QWORD *)v21[1];
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
            __fastfail(3u);
          *v23 = v22;
          v19 = (unsigned int)(v19 + 1);
          *(_QWORD *)(v22 + 8) = v23;
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v8 + 9);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v8 + 46);
        v24 = 0;
        v25 = 0LL;
        do
        {
          if ( (unsigned int)v25 >= (unsigned int)v19 )
            break;
          v26 = (int)v25 + 64 <= (unsigned int)v19 ? 64LL : v19 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v26, Heap + 8 * v25, 0LL, 0LL, &v38) == 258 )
            break;
          ++v24;
          v25 = (unsigned int)(v25 + 64);
        }
        while ( v24 <= (unsigned int)v19 >> 6 );
        if ( (_DWORD)v19 )
        {
          v27 = (unsigned __int64 *)v18;
          do
          {
            NtClose(*(HANDLE *)((char *)v27 + Heap - v18));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v27++);
            --v19;
          }
          while ( v19 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v18);
        v14 = 0;
      }
      else
      {
        v33 = (__int64 **)(v8 + 56);
        while ( *v33 != (__int64 *)v33 )
        {
          v34 = *v33;
          v35 = **v33;
          v36 = (__int64 **)(*v33)[1];
          if ( *(__int64 **)(v35 + 8) != *v33 || *v36 != v34 )
            __fastfail(3u);
          *v36 = (__int64 *)v35;
          *(_QWORD *)(v35 + 8) = v36;
          NtClose((HANDLE)v34[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)v34);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v14 )
        goto LABEL_28;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v13);
LABEL_31:
      RtlReleaseSRWLockShared(v9);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
