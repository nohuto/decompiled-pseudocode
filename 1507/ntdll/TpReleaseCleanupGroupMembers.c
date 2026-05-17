/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x18007DA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

struct _PEB *__fastcall TpReleaseCleanupGroupMembers(__int64 a1, char *a2, __int64 a3)
{
  unsigned int v4; // r12d
  struct _PEB *result; // rax
  __int64 Ldr; // r9
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *i; // rax
  volatile signed __int32 *v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  signed __int32 *v15; // rcx
  __int64 v16; // rdx
  signed __int32 **v17; // rax
  signed __int32 **v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  signed __int32 v22; // r8d
  bool v23; // zf
  signed __int32 v24; // eax
  _QWORD *v25; // rcx
  _QWORD **v26; // r14
  _QWORD *v27; // rdi
  _QWORD *j; // rax
  volatile signed __int32 *v29; // rdi
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  void (__fastcall *v32)(_QWORD, __int64); // rbx
  void (__fastcall *v33)(volatile signed __int32 *); // rbx
  _QWORD *v34; // rbx
  void (__fastcall *v35)(_QWORD *, _QWORD); // r15
  void (__fastcall *v36)(_QWORD *); // r15
  signed __int32 *v37; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v38; // [rsp+20h] [rbp-38h]
  _QWORD *v39; // [rsp+28h] [rbp-30h]
  _QWORD *v40; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (unsigned int)a2;
  if ( !a1 )
    return (struct _PEB *)TppRaiseInvalidParameter(0LL, a2, a3);
  result = NtCurrentPeb();
  Ldr = (__int64)result->Ldr;
  if ( !*(_BYTE *)(Ldr + 72) )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 56), a2, a3, Ldr);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v8, v9, v10);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v39 )
    {
      v12 = (volatile signed __int32 *)(i - 5);
      v37 = (signed __int32 *)(i - 5);
      v39 = (_QWORD *)*i;
      _m_prefetchw(i + 15);
      v13 = *((_DWORD *)i + 30);
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v12 + 40, v13 | 0x20000, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x30000) != 0 )
      {
        v19 = v37 + 10;
        v20 = *((_QWORD *)v37 + 5);
        v21 = (_QWORD *)*((_QWORD *)v37 + 6);
        if ( *(signed __int32 **)(v20 + 8) != v37 + 10 || (_QWORD *)*v21 != v19 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        _m_prefetchw(v37);
        v22 = *v37;
        do
        {
          if ( !v22 )
          {
            *((_QWORD *)v37 + 6) = v37 + 10;
            *v19 = v19;
            goto LABEL_12;
          }
          v24 = _InterlockedCompareExchange(v37, v22 + 1, v22);
          v23 = v22 == v24;
          v22 = v24;
        }
        while ( !v23 );
        v25 = *(_QWORD **)(a1 + 72);
        *v19 = a1 + 64;
        *((_QWORD *)v37 + 6) = v25;
        if ( *v25 != a1 + 64 )
          __fastfail(3u);
        *v25 = v19;
        *(_QWORD *)(a1 + 72) = v19;
      }
      else
      {
        *((_QWORD *)v37 + 22) = retaddr;
        v15 = v37 + 10;
        v16 = *((_QWORD *)v37 + 5);
        v17 = (signed __int32 **)*((_QWORD *)v37 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
          __fastfail(3u);
        *v17 = (signed __int32 *)v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(signed __int32 ***)(a1 + 72);
        *(_QWORD *)v15 = a1 + 64;
        *((_QWORD *)v37 + 6) = v18;
        if ( *v18 != (signed __int32 *)(a1 + 64) )
          __fastfail(3u);
        *v18 = v15;
        *(_QWORD *)(a1 + 72) = v15;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v26 = (_QWORD **)(a1 + 64);
    v27 = *(_QWORD **)(a1 + 64);
    while ( v27 != v26 )
    {
      v34 = v27 - 5;
      v27 = (_QWORD *)*v27;
      v35 = *(void (__fastcall **)(_QWORD *, _QWORD))(v34[1] + 16LL);
      if ( v35 )
      {
        _guard_check_icall_fptr();
        v35(v34, v4);
      }
      if ( v4 )
      {
        v36 = *(void (__fastcall **)(_QWORD *))(v34[1] + 24LL);
        if ( v36 )
        {
          _guard_check_icall_fptr();
          v36(v34);
        }
      }
    }
    for ( j = *v26; j != v26; j = v40 )
    {
      v29 = (volatile signed __int32 *)(j - 5);
      v38 = (volatile signed __int32 *)(j - 5);
      v40 = (_QWORD *)*j;
      v30 = (_QWORD *)*j;
      v31 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v31 != j )
        __fastfail(3u);
      *v31 = v30;
      v30[1] = v31;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v29 + 14, 0LL);
      if ( *((_QWORD *)v29 + 3) )
      {
        if ( (v29[40] & 0x10000) != 0 )
        {
          v29 = v38;
        }
        else
        {
          v32 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v29 + 3);
          _guard_check_icall_fptr();
          v29 = v38;
          v32(*((_QWORD *)v38 + 11), a3);
        }
      }
      if ( _InterlockedExchangeAdd(v29, 0xFFFFFFFF) == 1 )
      {
        v33 = (void (__fastcall *)(volatile signed __int32 *))**((_QWORD **)v38 + 1);
        _guard_check_icall_fptr();
        v33(v38);
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    return (struct _PEB *)TppBarrierAdjust(a1 + 32, 0LL);
  }
  return result;
}
