/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180063BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

struct _PEB *__fastcall TpReleaseCleanupGroupMembers(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
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
  __int64 v26; // r9
  _QWORD **v27; // r14
  _QWORD *v28; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v30; // rdi
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rdi
  __int64 v34; // r9
  signed __int32 *v35; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v36; // [rsp+20h] [rbp-38h]
  _QWORD *v37; // [rsp+28h] [rbp-30h]
  _QWORD *v38; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (int)a2;
  if ( !a1 )
    return (struct _PEB *)TppRaiseInvalidParameter(0LL, a2, a3, a4);
  result = NtCurrentPeb();
  Ldr = (__int64)result->Ldr;
  if ( !*(_BYTE *)(Ldr + 72) )
  {
    RtlAcquireSRWLockExclusive(a1 + 56, a2, a3, Ldr);
    RtlAcquireSRWLockExclusive(a1 + 8, v8, v9, v10);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v37 )
    {
      v12 = (volatile signed __int32 *)(i - 5);
      v35 = (signed __int32 *)(i - 5);
      v37 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v13 = *((_DWORD *)i + 32);
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v12 + 42, v13 | 0x20000, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x30000) != 0 )
      {
        v19 = v35 + 10;
        v20 = *((_QWORD *)v35 + 5);
        v21 = (_QWORD *)*((_QWORD *)v35 + 6);
        if ( *(signed __int32 **)(v20 + 8) != v35 + 10 || (_QWORD *)*v21 != v19 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        _m_prefetchw(v35);
        v22 = *v35;
        do
        {
          if ( !v22 )
          {
            *((_QWORD *)v35 + 6) = v35 + 10;
            *v19 = v19;
            goto LABEL_12;
          }
          v24 = _InterlockedCompareExchange(v35, v22 + 1, v22);
          v23 = v22 == v24;
          v22 = v24;
        }
        while ( !v23 );
        v25 = *(_QWORD **)(a1 + 72);
        if ( *v25 != a1 + 64 )
          __fastfail(3u);
        *v19 = a1 + 64;
        *((_QWORD *)v35 + 6) = v25;
        *v25 = v19;
        *(_QWORD *)(a1 + 72) = v19;
      }
      else
      {
        *((_QWORD *)v35 + 23) = retaddr;
        v15 = v35 + 10;
        v16 = *((_QWORD *)v35 + 5);
        v17 = (signed __int32 **)*((_QWORD *)v35 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
          __fastfail(3u);
        *v17 = (signed __int32 *)v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(signed __int32 ***)(a1 + 72);
        if ( *v18 != (signed __int32 *)(a1 + 64) )
          __fastfail(3u);
        *(_QWORD *)v15 = a1 + 64;
        *((_QWORD *)v35 + 6) = v18;
        *v18 = v15;
        *(_QWORD *)(a1 + 72) = v15;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v27 = (_QWORD **)(a1 + 64);
    v28 = *(_QWORD **)(a1 + 64);
    while ( v28 != v27 )
    {
      v33 = v28 - 5;
      v28 = (_QWORD *)*v28;
      if ( *(_QWORD *)(v33[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( v4 && *(_QWORD *)(v33[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v27; j != v27; j = v38 )
    {
      v30 = (volatile signed __int32 *)(j - 5);
      v36 = (volatile signed __int32 *)(j - 5);
      v38 = (_QWORD *)*j;
      v31 = (_QWORD *)*j;
      v32 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v32 != j )
        __fastfail(3u);
      *v32 = v31;
      v31[1] = v32;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v30 + 14, 0LL, 1LL, v26);
      if ( *((_QWORD *)v30 + 3) )
      {
        if ( (v30[42] & 0x10000) != 0 )
        {
          v30 = v36;
        }
        else
        {
          v30 = v36;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v30, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    return (struct _PEB *)TppBarrierAdjust(a1 + 32, 0LL, 1LL, v34);
  }
  return result;
}
