/*
 * XREFs of RtlStackDbContextSerialize @ 0x180101518
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  _BYTE *i; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD **v17; // rdi
  _QWORD *v18; // rbx
  _QWORD **j; // rdx
  _BYTE *k; // rcx
  _QWORD *v21; // rax
  _QWORD **m; // rdx
  _DWORD v24[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  _QWORD *v27; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v29[4]; // [rsp+50h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_1801506C0, a2, a3, a4);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_1801506C8, v6, v7, v8);
  v29[0] = RtlpHpStackDbContext;
  v29[1] = dword_1801506B0;
  v29[2] = 524289;
  v9 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))a2)(v29, 12LL, a3);
  if ( v9 >= 0 )
  {
    v10 = qword_1801506A8;
    v11 = 0x8000000000000002uLL;
    v26 = qword_1801506A8;
    v12 = (_QWORD **)qword_1801506A8;
    v25 = qword_1801506A8;
    v13 = (_QWORD *)qword_1801506A8;
    if ( !qword_1801506A8 )
      goto LABEL_7;
    if ( (*(_QWORD *)qword_1801506A8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v12 = (_QWORD **)v26;
      v13 = (_QWORD *)v25;
      v10 = qword_1801506A8;
    }
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
LABEL_7:
      for ( i = v12 + 1; ; i += 8 )
      {
        if ( (unsigned __int64)i >= v10 + 8 * ((unsigned __int64)(unsigned int)dword_1801506A4 >> 5) )
          goto LABEL_11;
        if ( (*i & 1) == 0 )
          break;
      }
      v13 = *(_QWORD **)i;
      v12 = (_QWORD **)i;
      v26 = (__int64)i;
    }
    else
    {
      v13 = *v12;
    }
LABEL_33:
    v25 = (__int64)v13;
    v15 = v13;
    while ( v15 )
    {
      v27 = v15;
      v24[0] = *((_DWORD *)v15 + 4);
      v9 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, unsigned __int64))a2)(
             v24,
             4LL,
             a3,
             0x8000000000000002uLL);
      if ( v9 < 0 )
        goto LABEL_41;
      v9 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))a2)(&v27, 8LL, a3);
      if ( v9 < 0 )
        goto LABEL_41;
      v9 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a2)(
             v27 + 3,
             8 * (unsigned int)*((unsigned __int8 *)v27 + 19),
             a3);
      if ( v9 < 0 )
        goto LABEL_41;
      v11 = 0x8000000000000002uLL;
      if ( !v13 )
        goto LABEL_27;
      if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v12 = (_QWORD **)v26;
        v13 = (_QWORD *)v25;
      }
      v15 = (_QWORD *)*v13;
      if ( (*v13 & 1) != 0 )
      {
LABEL_27:
        for ( j = v12 + 1;
              (unsigned __int64)j < qword_1801506A8 + 8 * ((unsigned __int64)(unsigned int)dword_1801506A4 >> 5);
              ++j )
        {
          if ( (*(_BYTE *)j & 1) == 0 )
          {
            v13 = *j;
            v12 = j;
            v26 = (__int64)j;
            goto LABEL_33;
          }
        }
LABEL_11:
        v15 = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v13;
        v25 = (__int64)v15;
      }
    }
    v16 = qword_1801506B8;
    v26 = qword_1801506B8;
    v17 = (_QWORD **)qword_1801506B8;
    v25 = qword_1801506B8;
    v18 = (_QWORD *)qword_1801506B8;
    if ( !qword_1801506B8 )
      goto LABEL_34;
    if ( (*(_QWORD *)qword_1801506B8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v17 = (_QWORD **)v26;
      v18 = (_QWORD *)v25;
      v16 = qword_1801506B8;
    }
    if ( (*(_BYTE *)v17 & 1) != 0 )
    {
LABEL_34:
      for ( k = v17 + 1; ; k += 8 )
      {
        if ( (unsigned __int64)k >= v16 + 8 * ((unsigned __int64)(unsigned int)dword_1801506B4 >> 5) )
          goto LABEL_38;
        if ( (*k & 1) == 0 )
          break;
      }
      v18 = *(_QWORD **)k;
      v17 = (_QWORD **)k;
      v26 = (__int64)k;
    }
    else
    {
      v18 = *v17;
    }
LABEL_57:
    v25 = (__int64)v18;
    v21 = v18;
    while ( v21 )
    {
      v28 = v21;
      v24[0] = *((_DWORD *)v21 + 4);
      v9 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, unsigned __int64))a2)(v24, 4LL, a3, v11);
      if ( v9 < 0 )
        goto LABEL_41;
      v9 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))a2)(&v28, 8LL, a3);
      if ( v9 < 0 )
        goto LABEL_41;
      v9 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a2)(v28 + 3, (HIBYTE(v24[0]) + 7) & 0xFFFFFFF8, a3);
      if ( v9 < 0 )
        goto LABEL_41;
      if ( !v18 )
        goto LABEL_51;
      if ( (*v18 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v17 = (_QWORD **)v26;
        v18 = (_QWORD *)v25;
      }
      v21 = (_QWORD *)*v18;
      if ( (*v18 & 1) != 0 )
      {
LABEL_51:
        for ( m = v17 + 1;
              (unsigned __int64)m < qword_1801506B8 + 8 * ((unsigned __int64)(unsigned int)dword_1801506B4 >> 5);
              ++m )
        {
          if ( (*(_BYTE *)m & 1) == 0 )
          {
            v18 = *m;
            v17 = m;
            v26 = (__int64)m;
            goto LABEL_57;
          }
        }
LABEL_38:
        v21 = 0LL;
      }
      else
      {
        v18 = (_QWORD *)*v18;
        v25 = (__int64)v21;
      }
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v11);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive(&qword_1801506C0);
  RtlReleaseSRWLockExclusive(&qword_1801506C8);
  return (unsigned int)v9;
}
