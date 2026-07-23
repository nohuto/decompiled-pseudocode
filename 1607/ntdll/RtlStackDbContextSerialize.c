/*
 * XREFs of RtlStackDbContextSerialize @ 0x180101458
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, __int64),
        __int64 a3)
{
  int v5; // esi
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  _QWORD **v8; // rdi
  _QWORD *v9; // rbx
  _BYTE *i; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD **v13; // rdi
  _QWORD *v14; // rbx
  _QWORD **j; // rdx
  _BYTE *k; // rcx
  _QWORD *v17; // rax
  _QWORD **m; // rdx
  _DWORD v20[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  _QWORD *v23; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive(&stru_1801506C0);
  RtlAcquireSRWLockExclusive(&stru_1801506C8);
  v25[0] = RtlpHpStackDbContext;
  v25[1] = dword_1801506B0;
  v25[2] = 524289;
  v5 = a2(v25, 12LL, a3);
  if ( v5 >= 0 )
  {
    v6 = qword_1801506A8;
    v7 = 0x8000000000000002uLL;
    v22 = qword_1801506A8;
    v8 = (_QWORD **)qword_1801506A8;
    v21 = qword_1801506A8;
    v9 = (_QWORD *)qword_1801506A8;
    if ( !qword_1801506A8 )
      goto LABEL_7;
    if ( (*(_QWORD *)qword_1801506A8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v8 = (_QWORD **)v22;
      v9 = (_QWORD *)v21;
      v6 = qword_1801506A8;
    }
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
LABEL_7:
      for ( i = v8 + 1; ; i += 8 )
      {
        if ( (unsigned __int64)i >= v6 + 8 * ((unsigned __int64)(unsigned int)dword_1801506A4 >> 5) )
          goto LABEL_11;
        if ( (*i & 1) == 0 )
          break;
      }
      v9 = *(_QWORD **)i;
      v8 = (_QWORD **)i;
      v22 = (__int64)i;
    }
    else
    {
      v9 = *v8;
    }
LABEL_33:
    v21 = (__int64)v9;
    v11 = v9;
    while ( v11 )
    {
      v23 = v11;
      v20[0] = *((_DWORD *)v11 + 4);
      v5 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, unsigned __int64))a2)(
             v20,
             4LL,
             a3,
             0x8000000000000002uLL);
      if ( v5 < 0 )
        goto LABEL_41;
      v5 = a2(&v23, 8LL, a3);
      if ( v5 < 0 )
        goto LABEL_41;
      v5 = a2((_DWORD *)v23 + 6, 8 * (unsigned int)*((unsigned __int8 *)v23 + 19), a3);
      if ( v5 < 0 )
        goto LABEL_41;
      v7 = 0x8000000000000002uLL;
      if ( !v9 )
        goto LABEL_27;
      if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v8 = (_QWORD **)v22;
        v9 = (_QWORD *)v21;
      }
      v11 = (_QWORD *)*v9;
      if ( (*v9 & 1) != 0 )
      {
LABEL_27:
        for ( j = v8 + 1;
              (unsigned __int64)j < qword_1801506A8 + 8 * ((unsigned __int64)(unsigned int)dword_1801506A4 >> 5);
              ++j )
        {
          if ( (*(_BYTE *)j & 1) == 0 )
          {
            v9 = *j;
            v8 = j;
            v22 = (__int64)j;
            goto LABEL_33;
          }
        }
LABEL_11:
        v11 = 0LL;
      }
      else
      {
        v9 = (_QWORD *)*v9;
        v21 = (__int64)v11;
      }
    }
    v12 = qword_1801506B8;
    v22 = qword_1801506B8;
    v13 = (_QWORD **)qword_1801506B8;
    v21 = qword_1801506B8;
    v14 = (_QWORD *)qword_1801506B8;
    if ( !qword_1801506B8 )
      goto LABEL_34;
    if ( (*(_QWORD *)qword_1801506B8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v13 = (_QWORD **)v22;
      v14 = (_QWORD *)v21;
      v12 = qword_1801506B8;
    }
    if ( (*(_BYTE *)v13 & 1) != 0 )
    {
LABEL_34:
      for ( k = v13 + 1; ; k += 8 )
      {
        if ( (unsigned __int64)k >= v12 + 8 * ((unsigned __int64)(unsigned int)dword_1801506B4 >> 5) )
          goto LABEL_38;
        if ( (*k & 1) == 0 )
          break;
      }
      v14 = *(_QWORD **)k;
      v13 = (_QWORD **)k;
      v22 = (__int64)k;
    }
    else
    {
      v14 = *v13;
    }
LABEL_57:
    v21 = (__int64)v14;
    v17 = v14;
    while ( v17 )
    {
      v24 = v17;
      v20[0] = *((_DWORD *)v17 + 4);
      v5 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, unsigned __int64))a2)(v20, 4LL, a3, v7);
      if ( v5 < 0 )
        goto LABEL_41;
      v5 = a2(&v24, 8LL, a3);
      if ( v5 < 0 )
        goto LABEL_41;
      v5 = a2((_DWORD *)v24 + 6, (HIBYTE(v20[0]) + 7) & 0xFFFFFFF8, a3);
      if ( v5 < 0 )
        goto LABEL_41;
      if ( !v14 )
        goto LABEL_51;
      if ( (*v14 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v13 = (_QWORD **)v22;
        v14 = (_QWORD *)v21;
      }
      v17 = (_QWORD *)*v14;
      if ( (*v14 & 1) != 0 )
      {
LABEL_51:
        for ( m = v13 + 1;
              (unsigned __int64)m < qword_1801506B8 + 8 * ((unsigned __int64)(unsigned int)dword_1801506B4 >> 5);
              ++m )
        {
          if ( (*(_BYTE *)m & 1) == 0 )
          {
            v14 = *m;
            v13 = m;
            v22 = (__int64)m;
            goto LABEL_57;
          }
        }
LABEL_38:
        v17 = 0LL;
      }
      else
      {
        v14 = (_QWORD *)*v14;
        v21 = (__int64)v17;
      }
    }
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v7);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive(&stru_1801506C0);
  RtlReleaseSRWLockExclusive(&stru_1801506C8);
  return (unsigned int)v5;
}
