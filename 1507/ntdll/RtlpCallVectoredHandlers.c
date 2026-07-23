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

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  char v4; // bp
  _RTL_SRWLOCK *v5; // rbx
  unsigned __int64 *v6; // r13
  unsigned int CrossProcessFlags; // eax
  unsigned __int64 *v8; // rdi
  unsigned __int64 *v9; // rsi
  _DWORD *v10; // r12
  unsigned __int64 *v11; // r14
  signed __int64 v12; // rax
  unsigned __int64 v13; // rbp
  int v14; // eax
  __int64 (__fastcall *v15)(_QWORD *); // rbp
  int v16; // ebp
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  signed __int64 v22; // rtt
  __int64 v23; // r8
  __int64 v24; // rdx
  signed __int64 v25; // rtt
  unsigned __int64 **v26; // rcx
  unsigned __int64 **v27; // rax
  unsigned __int64 *v28; // r8
  unsigned int v29; // [rsp+30h] [rbp-68h]
  struct _PEB *v30; // [rsp+38h] [rbp-60h]
  _QWORD v31[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v29 = a3 + 2;
  v5 = (_RTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + 24 * a3);
  v30 = NtCurrentPeb();
  v6 = (unsigned __int64 *)&v5[1];
  CrossProcessFlags = v30->CrossProcessFlags;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v31[0] = a1;
    v8 = 0LL;
    v31[1] = a2;
    RtlAcquireSRWLockExclusive(v5);
    v9 = (unsigned __int64 *)*v6;
    if ( (unsigned __int64 *)*v6 != v6 )
    {
      while ( 1 )
      {
        v10 = v9 + 2;
        v11 = v9;
        ++*((_DWORD *)v9 + 4);
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
        if ( v12 != 1 )
        {
          do
          {
            v20 = -1LL;
            if ( (v12 & 6) == 2 )
              v20 = 3LL;
            v21 = v20 + v12;
            v22 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v20 + v12, v12);
          }
          while ( v22 != v12 );
          if ( v20 == 3 )
            RtlpWakeSRWLock(v5, v21, 0LL);
        }
        v13 = v9[3];
        v14 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
        if ( v14 < 0 )
          RtlRaiseStatus(v14);
        v15 = (__int64 (__fastcall *)(_QWORD *))(ProcessInformation ^ __ROR8__(v13, 64 - (ProcessInformation & 0x3F)));
        if ( (v30->NtGlobalFlag & 0x800000) != 0 )
          v3 = RtlpLogExceptionHandler(a1, a2, 0LL, v15);
        v16 = v15(v31);
        if ( v3 )
          *(_DWORD *)(v3 + 1396) = v16 != -1;
        RtlAcquireSRWLockExclusive(v5);
        v17 = (*v10)-- == 1;
        v9 = (unsigned __int64 *)*v9;
        if ( v17 )
        {
          v26 = (unsigned __int64 **)*v11;
          v27 = (unsigned __int64 **)v11[1];
          if ( *(unsigned __int64 **)(*v11 + 8) != v11 || *v27 != v11 )
            __fastfail(3u);
          *v27 = (unsigned __int64 *)v26;
          v26[1] = (unsigned __int64 *)v27;
          if ( v27 == v26 )
            _interlockedbittestandreset((volatile signed __int32 *)&v30->80, v29);
          *v11 = (unsigned __int64)v8;
          v8 = v11;
        }
        v3 = 0LL;
        if ( v16 == -1 )
          break;
        if ( v9 == v6 )
        {
          v4 = 0;
          goto LABEL_13;
        }
      }
      v4 = 1;
    }
LABEL_13:
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
    if ( v18 != 1 )
    {
      do
      {
        v23 = -1LL;
        if ( (v18 & 6) == 2 )
          v23 = 3LL;
        v24 = v23 + v18;
        v25 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v23 + v18, v18);
      }
      while ( v25 != v18 );
      if ( v23 == 3 )
        RtlpWakeSRWLock(v5, v24, 0LL);
    }
    while ( v8 )
    {
      v28 = v8;
      v8 = (unsigned __int64 *)*v8;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
    }
  }
  return v4;
}
