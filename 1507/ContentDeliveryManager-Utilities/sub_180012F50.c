/*
 * XREFs of sub_180012F50 @ 0x180012F50
 * Callers:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_18000874C @ 0x18000874C (sub_18000874C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_180012F50(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // bl
  __int64 *i; // rax
  _DWORD *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v16; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp+7h] BYREF
  int *v18; // [rsp+60h] [rbp+27h]
  int v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]
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
    LODWORD(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    i = *(__int64 **)(a1 + 48);
    v8 = (_DWORD *)i[5];
    if ( *v8 > 5u )
    {
      v16 = 0;
      v20 = 0;
      v18 = &v16;
      v19 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v22 = 4;
      LODWORD(i) = sub_1800011FC((__int64)v8, byte_180032EDA, (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &v17);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = (__int64 **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      sub_18000874C(retaddr, v11, v12, 0x8007029C);
    *(_DWORD *)(a1 + 32) = 0;
    for ( i = *v10; *i; *v10 = i )
    {
      v13 = **v10;
      if ( (__int64 **)v13 == v10 )
      {
        i = *(__int64 **)(a1 + 24);
        **v10 = (__int64)i;
        break;
      }
      i = (__int64 *)(v13 + 16);
    }
    *v10 = 0LL;
  }
  return (int)i;
}
