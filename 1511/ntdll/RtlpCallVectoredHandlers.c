/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18006E65C
 * Callers:
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     RtlpLogExceptionHandler @ 0x1800E9044 (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // si
  _RTL_SRWLOCK *v4; // rbp
  unsigned __int64 *v5; // r12
  unsigned int CrossProcessFlags; // eax
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // rdi
  _DWORD *v9; // r15
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // eax
  __int64 v13; // r13
  __int64 (__fastcall *v14)(_QWORD *); // r14
  int v15; // r14d
  bool v16; // zf
  unsigned __int64 **v18; // rcx
  unsigned __int64 **v19; // rax
  unsigned __int64 *v20; // r8
  unsigned int v21; // [rsp+30h] [rbp-68h]
  struct _PEB *v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v21 = a3 + 2;
  v4 = (_RTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + 24 * a3);
  v22 = NtCurrentPeb();
  v5 = (unsigned __int64 *)&v4[1];
  CrossProcessFlags = v22->CrossProcessFlags;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v23[0] = a1;
    v7 = 0LL;
    v23[1] = a2;
    RtlAcquireSRWLockExclusive(v4);
    v8 = (unsigned __int64 *)*v5;
    if ( (unsigned __int64 *)*v5 != v5 )
    {
      while ( 1 )
      {
        v9 = v8 + 2;
        ++*((_DWORD *)v8 + 4);
        v10 = v8;
        RtlReleaseSRWLockExclusive(v4);
        v11 = v8[3];
        v12 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
        if ( v12 < 0 )
          RtlRaiseStatus(v12);
        v13 = 0LL;
        v14 = (__int64 (__fastcall *)(_QWORD *))(ProcessInformation ^ __ROR8__(v11, 64 - (ProcessInformation & 0x3F)));
        if ( (v22->NtGlobalFlag & 0x800000) != 0 )
          v13 = RtlpLogExceptionHandler(a1, a2, 0LL, v14);
        v15 = v14(v23);
        if ( v13 )
          *(_DWORD *)(v13 + 1396) = v15 != -1;
        RtlAcquireSRWLockExclusive(v4);
        v16 = (*v9)-- == 1;
        v8 = (unsigned __int64 *)*v8;
        if ( v16 )
        {
          v18 = (unsigned __int64 **)*v10;
          v19 = (unsigned __int64 **)v10[1];
          if ( *(unsigned __int64 **)(*v10 + 8) != v10 || *v19 != v10 )
            __fastfail(3u);
          *v19 = (unsigned __int64 *)v18;
          v18[1] = (unsigned __int64 *)v19;
          if ( v19 == v18 )
            _interlockedbittestandreset((volatile signed __int32 *)&v22->80, v21);
          *v10 = (unsigned __int64)v7;
          v7 = v10;
        }
        if ( v15 == -1 )
          break;
        if ( v8 == v5 )
        {
          v3 = 0;
          goto LABEL_12;
        }
      }
      v3 = 1;
    }
LABEL_12:
    RtlReleaseSRWLockExclusive(v4);
    while ( v7 )
    {
      v20 = v7;
      v7 = (unsigned __int64 *)*v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
    }
  }
  return v3;
}
