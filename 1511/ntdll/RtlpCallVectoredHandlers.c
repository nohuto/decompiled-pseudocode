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

char __fastcall RtlpCallVectoredHandlers(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int64 *v7; // rbp
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _DWORD *v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // r13
  __int64 (__fastcall *v16)(_QWORD *); // r14
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  bool v21; // zf
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // r8
  unsigned int v26; // [rsp+30h] [rbp-68h]
  struct _PEB *v27; // [rsp+38h] [rbp-60h]
  _QWORD v28[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  v5 = a3 + 2;
  v26 = v5;
  v6 = 3 * v3;
  v7 = (volatile signed __int64 *)((char *)&LdrpVectorHandlerList + 24 * v3);
  v27 = NtCurrentPeb();
  v8 = v7 + 1;
  LODWORD(v3) = v27->CrossProcessFlags;
  if ( _bittest((const int *)&v3, v5) )
  {
    v28[0] = a1;
    v9 = 0LL;
    v28[1] = a2;
    RtlAcquireSRWLockExclusive((unsigned __int64)v7, a2, v5, v6);
    v10 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      while ( 1 )
      {
        v11 = v10 + 2;
        ++*((_DWORD *)v10 + 4);
        v12 = v10;
        RtlReleaseSRWLockExclusive(v7);
        v13 = v10[3];
        v14 = NtQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PROCESSINFOCLASS)36,
                &ProcessInformation,
                4u,
                0LL);
        if ( v14 < 0 )
          RtlRaiseStatus((unsigned int)v14);
        v15 = 0LL;
        v16 = (__int64 (__fastcall *)(_QWORD *))(ProcessInformation ^ __ROR8__(v13, 64 - (ProcessInformation & 0x3F)));
        if ( (v27->NtGlobalFlag & 0x800000) != 0 )
          v15 = RtlpLogExceptionHandler(a1, a2, 0LL, v16);
        v20 = v16(v28);
        if ( v15 )
          *(_DWORD *)(v15 + 1396) = v20 != -1;
        RtlAcquireSRWLockExclusive((unsigned __int64)v7, v17, v18, v19);
        v21 = (*v11)-- == 1;
        v10 = (_QWORD *)*v10;
        if ( v21 )
        {
          v23 = (_QWORD *)*v12;
          v24 = (_QWORD *)v12[1];
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v24 != v12 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          if ( v24 == v23 )
            _interlockedbittestandreset((volatile signed __int32 *)&v27->80, v26);
          *v12 = v9;
          v9 = v12;
        }
        if ( v20 == -1 )
          break;
        if ( v10 == v8 )
        {
          v4 = 0;
          goto LABEL_12;
        }
      }
      v4 = 1;
    }
LABEL_12:
    RtlReleaseSRWLockExclusive(v7);
    while ( v9 )
    {
      v25 = (unsigned __int64)v9;
      v9 = (_QWORD *)*v9;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
    }
  }
  return v4;
}
