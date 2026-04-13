/*
 * XREFs of sub_18000C34C @ 0x18000C34C
 * Callers:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_180003F8C @ 0x180003F8C (sub_180003F8C.c)
 *     sub_1800087D0 @ 0x1800087D0 (sub_1800087D0.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000C34C(__int64 a1, void *a2, void *a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // r9
  RTL_SRWLOCK *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  void *v12; // rcx
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // r8
  const GUID *v16; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  void *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  void *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int *v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+100h] [rbp+7Fh] BYREF

  v30 = a4;
  sub_180014A2C(a1, SRWLock);
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v7 + 40);
  if ( *(_DWORD *)v8 > 5u
    && (*(_QWORD *)(v8 + 16) & 0x800000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x800000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  }
  else
  {
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  v9 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = *(_QWORD **)(a1 + 48);
  v11 = v10[5];
  if ( *(_DWORD *)v11 > 5u && (*(_QWORD *)(v11 + 16) & 0x800000000000LL) != 0 )
  {
    v10 = (_QWORD *)(*(_QWORD *)(v11 + 24) & 0x800000000000LL);
    if ( v10 == *(_QWORD **)(v11 + 24) )
    {
      LODWORD(v13) = GetCurrentThreadId();
      v21 = 4LL;
      LODWORD(SRWLock[0]) = v13;
      v20 = SRWLock;
      v12 = &unk_18002B65C;
      LODWORD(v13) = 0;
      v14 = &unk_18002B65C;
      if ( a2 )
      {
        v14 = a2;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_WORD *)a2 + v13) );
      }
      v22 = v14;
      v23 = 2 * v13 + 2;
      LODWORD(v13) = 0;
      v24 = 0;
      if ( a3 )
      {
        v12 = a3;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_WORD *)a3 + v13) );
      }
      v25 = v12;
      v26 = 2 * v13 + 2;
      v28 = &v30;
      v27 = 0;
      v29 = 4LL;
      v15 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v15 + 4)
        || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
        && !*(_DWORD *)(v15 + 28)
        && !*(_DWORD *)(v15 + 32)
        && !*(_DWORD *)(v15 + 36) )
      {
        v16 = 0LL;
      }
      LODWORD(v10) = sub_1800011FC(v11, byte_180033874, (const GUID *)(v15 + 8), v16, 6u, &v19);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v10 = sub_180003F8C((__int64)v9, 1);
    *(_QWORD *)(a1 + 8) = v10;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 24) = *v10;
      *v10 = a1 + 8;
      LODWORD(v10) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)v10;
    }
  }
  return (int)v10;
}
