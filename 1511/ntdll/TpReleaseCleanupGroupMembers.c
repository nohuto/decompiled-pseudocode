/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180003FB0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

struct _PEB *__fastcall TpReleaseCleanupGroupMembers(_QWORD *a1, unsigned int a2, __int64 a3)
{
  struct _PEB *result; // rax
  _QWORD *i; // rax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  signed __int32 *v11; // rcx
  __int64 v12; // rdx
  signed __int32 **v13; // rax
  signed __int32 **v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  signed __int32 v18; // r8d
  bool v19; // zf
  signed __int32 v20; // eax
  _QWORD *v21; // rcx
  _QWORD **v22; // r14
  _QWORD *v23; // rdi
  _QWORD *j; // rax
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  void (__fastcall *v28)(_QWORD, __int64); // rbx
  void (__fastcall *v29)(volatile signed __int32 *); // rbx
  _QWORD *v30; // rbx
  void (__fastcall *v31)(_QWORD *, _QWORD); // r15
  void (__fastcall *v32)(_QWORD *); // r15
  signed __int32 *v33; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v34; // [rsp+20h] [rbp-38h]
  _QWORD *v35; // [rsp+28h] [rbp-30h]
  _QWORD *v36; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a1 )
    return (struct _PEB *)TppRaiseInvalidParameter();
  result = NtCurrentPeb();
  if ( !result->Ldr->ShutdownInProgress )
  {
    RtlAcquireSRWLockExclusive(a1 + 7);
    RtlAcquireSRWLockExclusive(a1 + 1);
    for ( i = (_QWORD *)a1[2]; i != a1 + 2; i = v35 )
    {
      v8 = (volatile signed __int32 *)(i - 5);
      v33 = (signed __int32 *)(i - 5);
      v35 = (_QWORD *)*i;
      _m_prefetchw(i + 15);
      v9 = *((_DWORD *)i + 30);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v8 + 40, v9 | 0x20000, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x30000) != 0 )
      {
        v15 = v33 + 10;
        v16 = *((_QWORD *)v33 + 5);
        v17 = (_QWORD *)*((_QWORD *)v33 + 6);
        if ( *(signed __int32 **)(v16 + 8) != v33 + 10 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        _m_prefetchw(v33);
        v18 = *v33;
        do
        {
          if ( !v18 )
          {
            *((_QWORD *)v33 + 6) = v33 + 10;
            *v15 = v15;
            goto LABEL_12;
          }
          v20 = _InterlockedCompareExchange(v33, v18 + 1, v18);
          v19 = v18 == v20;
          v18 = v20;
        }
        while ( !v19 );
        v21 = (_QWORD *)a1[9];
        *v15 = a1 + 8;
        *((_QWORD *)v33 + 6) = v21;
        if ( (_QWORD *)*v21 != a1 + 8 )
          __fastfail(3u);
        *v21 = v15;
        a1[9] = v15;
      }
      else
      {
        *((_QWORD *)v33 + 22) = retaddr;
        v11 = v33 + 10;
        v12 = *((_QWORD *)v33 + 5);
        v13 = (signed __int32 **)*((_QWORD *)v33 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
          __fastfail(3u);
        *v13 = (signed __int32 *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = (signed __int32 **)a1[9];
        *(_QWORD *)v11 = a1 + 8;
        *((_QWORD *)v33 + 6) = v14;
        if ( *v14 != (signed __int32 *)(a1 + 8) )
          __fastfail(3u);
        *v14 = v11;
        a1[9] = v11;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive(a1 + 1);
    v22 = (_QWORD **)(a1 + 8);
    v23 = (_QWORD *)a1[8];
    while ( v23 != v22 )
    {
      v30 = v23 - 5;
      v23 = (_QWORD *)*v23;
      v31 = *(void (__fastcall **)(_QWORD *, _QWORD))(v30[1] + 16LL);
      if ( v31 )
      {
        _guard_check_icall_fptr();
        v31(v30, a2);
      }
      if ( a2 )
      {
        v32 = *(void (__fastcall **)(_QWORD *))(v30[1] + 24LL);
        if ( v32 )
        {
          _guard_check_icall_fptr();
          v32(v30);
        }
      }
    }
    for ( j = *v22; j != v22; j = v36 )
    {
      v25 = (volatile signed __int32 *)(j - 5);
      v34 = (volatile signed __int32 *)(j - 5);
      v36 = (_QWORD *)*j;
      v26 = (_QWORD *)*j;
      v27 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v27 != j )
        __fastfail(3u);
      *v27 = v26;
      v26[1] = v27;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v25 + 14, 0LL, 1LL);
      if ( *((_QWORD *)v25 + 3) )
      {
        if ( (v25[40] & 0x10000) != 0 )
        {
          v25 = v34;
        }
        else
        {
          v28 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v25 + 3);
          _guard_check_icall_fptr();
          v25 = v34;
          v28(*((_QWORD *)v34 + 11), a3);
        }
      }
      if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
      {
        v29 = (void (__fastcall *)(volatile signed __int32 *))**((_QWORD **)v34 + 1);
        _guard_check_icall_fptr();
        v29(v34);
      }
    }
    RtlReleaseSRWLockExclusive(a1 + 7);
    return (struct _PEB *)TppBarrierAdjust(a1 + 4, 0LL, 1LL);
  }
  return result;
}
