/*
 * XREFs of sub_18000C980 @ 0x18000C980
 * Callers:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_180003F8C @ 0x180003F8C (sub_180003F8C.c)
 *     sub_1800087D0 @ 0x1800087D0 (sub_1800087D0.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000C980(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  const GUID *v12; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  void *v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  sub_180014A2C(a1, SRWLock);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)v5 > 5u
    && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = *(_QWORD **)(a1 + 48);
  v8 = v7[5];
  if ( *(_DWORD *)v8 > 5u && (*(_QWORD *)(v8 + 16) & 0x200000000000LL) != 0 )
  {
    v7 = (_QWORD *)(*(_QWORD *)(v8 + 24) & 0x200000000000LL);
    if ( v7 == *(_QWORD **)(v8 + 24) )
    {
      LODWORD(SRWLock[0]) = GetCurrentThreadId();
      v9 = &unk_18002B65C;
      v16 = SRWLock;
      LODWORD(v10) = 0;
      v17 = 4LL;
      if ( a2 )
      {
        v9 = a2;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)a2 + v10) );
      }
      v18 = v9;
      v19 = 2 * v10 + 2;
      v20 = 0;
      v11 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v11 + 4)
        || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
        && !*(_DWORD *)(v11 + 28)
        && !*(_DWORD *)(v11 + 32)
        && !*(_DWORD *)(v11 + 36) )
      {
        v12 = 0LL;
      }
      LODWORD(v7) = sub_1800011FC(v8, byte_1800339E2, (const GUID *)(v11 + 8), v12, 4u, &v15);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v7 = sub_180003F8C((__int64)v6, 1);
    *(_QWORD *)(a1 + 8) = v7;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 24) = *v7;
      *v7 = a1 + 8;
      LODWORD(v7) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)v7;
    }
  }
  return (int)v7;
}
