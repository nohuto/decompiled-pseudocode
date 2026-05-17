/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18005F7F4
 * Callers:
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     RtlpLogExceptionHandler @ 0x1800E44E4 (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r8
  char v6; // bp
  __int64 v7; // r9
  volatile signed __int64 *v8; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  _DWORD *v12; // r12
  _QWORD *v13; // r14
  signed __int64 v14; // rax
  __int64 v15; // rbp
  NTSTATUS v16; // eax
  __int64 (__fastcall *v17)(_QWORD *); // rbp
  char *v18; // rdx
  int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  signed __int64 v23; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  signed __int64 v27; // rtt
  __int64 v28; // r8
  __int64 v29; // rdx
  signed __int64 v30; // rtt
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 v33; // r8
  unsigned int v34; // [rsp+30h] [rbp-68h]
  struct _PEB *v35; // [rsp+38h] [rbp-60h]
  _QWORD v36[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0LL;
  v5 = a3 + 2;
  v6 = 0;
  v34 = v5;
  v7 = 3 * v3;
  v8 = (volatile signed __int64 *)((char *)&LdrpVectorHandlerList + 24 * v3);
  v35 = NtCurrentPeb();
  v9 = v8 + 1;
  LODWORD(v3) = v35->CrossProcessFlags;
  if ( _bittest((const int *)&v3, v5) )
  {
    v36[0] = a1;
    v10 = 0LL;
    v36[1] = a2;
    RtlAcquireSRWLockExclusive(v8, a2, v5, v7);
    v11 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      while ( 1 )
      {
        v12 = v11 + 2;
        v13 = v11;
        ++*((_DWORD *)v11 + 4);
        v14 = _InterlockedCompareExchange64(v8, 0LL, 1LL);
        if ( v14 != 1 )
        {
          do
          {
            v25 = -1LL;
            if ( (v14 & 6) == 2 )
              v25 = 3LL;
            v26 = v25 + v14;
            v27 = v14;
            v14 = _InterlockedCompareExchange64(v8, v25 + v14, v14);
          }
          while ( v27 != v14 );
          if ( v25 == 3 )
            RtlpWakeSRWLock(v8, v26, 0LL);
        }
        v15 = v11[3];
        v16 = NtQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PROCESSINFOCLASS)36,
                &ProcessInformation,
                4u,
                0LL);
        if ( v16 < 0 )
          RtlRaiseStatus((unsigned int)v16);
        v17 = (__int64 (__fastcall *)(_QWORD *))(ProcessInformation ^ __ROR8__(v15, 64 - (ProcessInformation & 0x3F)));
        if ( (v35->NtGlobalFlag & 0x800000) != 0 )
          v4 = RtlpLogExceptionHandler(a1, a2, 0LL, v17);
        v19 = v17(v36);
        if ( v4 )
          *(_DWORD *)(v4 + 1396) = v19 != -1;
        RtlAcquireSRWLockExclusive(v8, v18, v20, v21);
        v22 = (*v12)-- == 1;
        v11 = (_QWORD *)*v11;
        if ( v22 )
        {
          v31 = (_QWORD *)*v13;
          v32 = (_QWORD *)v13[1];
          if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v32 != v13 )
            __fastfail(3u);
          *v32 = v31;
          v31[1] = v32;
          if ( v32 == v31 )
            _interlockedbittestandreset((volatile signed __int32 *)&v35->80, v34);
          *v13 = v10;
          v10 = v13;
        }
        v4 = 0LL;
        if ( v19 == -1 )
          break;
        if ( v11 == v9 )
        {
          v6 = 0;
          goto LABEL_13;
        }
      }
      v6 = 1;
    }
LABEL_13:
    v23 = _InterlockedCompareExchange64(v8, 0LL, 1LL);
    if ( v23 != 1 )
    {
      do
      {
        v28 = -1LL;
        if ( (v23 & 6) == 2 )
          v28 = 3LL;
        v29 = v28 + v23;
        v30 = v23;
        v23 = _InterlockedCompareExchange64(v8, v28 + v23, v23);
      }
      while ( v30 != v23 );
      if ( v28 == 3 )
        RtlpWakeSRWLock(v8, v29, 0LL);
    }
    while ( v10 )
    {
      v33 = (unsigned __int64)v10;
      v10 = (_QWORD *)*v10;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v33);
    }
  }
  return v6;
}
