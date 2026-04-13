/*
 * XREFs of sub_1800127A8 @ 0x1800127A8
 * Callers:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_18000874C @ 0x18000874C (sub_18000874C.c)
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

void __fastcall sub_1800127A8(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // di
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 v13; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v15; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp+7h] BYREF
  int *v17; // [rsp+60h] [rbp+27h]
  int v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+7Ch] [rbp+43h]
  __int64 retaddr; // [rsp+98h] [rbp+5Fh]

  sub_180014A2C(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 80);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 84) >= 0 )
    *(_DWORD *)(v2 + 84) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 80) = v5;
  v6 = v5 == 0;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    sub_18000BE40(a1);
  }
  else
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
    if ( *v7 > 5u )
    {
      v15 = 0;
      v19 = 0;
      v17 = &v15;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v21 = 4;
      sub_1800011FC((__int64)v7, byte_180032EDA, (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &v16);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v9 = a1 + 8;
    if ( *(_DWORD *)(v9 + 24) != GetCurrentThreadId() )
      sub_18000874C(retaddr, v10, v11, 0x8007029C);
    *(_DWORD *)(v9 + 24) = 0;
    for ( i = *(__int64 **)v9; *i; *(_QWORD *)v9 = i )
    {
      v13 = **(_QWORD **)v9;
      if ( v13 == v9 )
      {
        **(_QWORD **)v9 = *(_QWORD *)(v9 + 16);
        break;
      }
      i = (__int64 *)(v13 + 16);
    }
    *(_QWORD *)v9 = 0LL;
  }
}
