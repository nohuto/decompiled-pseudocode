/*
 * XREFs of sub_18000CF70 @ 0x18000CF70
 * Callers:
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_180003F8C @ 0x180003F8C (sub_180003F8C.c)
 *     sub_1800087D0 @ 0x1800087D0 (sub_1800087D0.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000CF70(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-19h] BYREF
  DWORD v15; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-9h] BYREF
  DWORD *v17; // [rsp+60h] [rbp+17h]
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  sub_180014A2C(a1, &SRWLock);
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
  v6 = SRWLock;
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
      CurrentThreadId = GetCurrentThreadId();
      v19 = 0;
      v22 = 0;
      v15 = CurrentThreadId;
      v17 = &v15;
      p_SRWLock = &SRWLock;
      v18 = 4;
      LODWORD(SRWLock) = a2;
      v21 = 4;
      v10 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v10 + 4)
        || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
        && !*(_DWORD *)(v10 + 28)
        && !*(_DWORD *)(v10 + 32)
        && !*(_DWORD *)(v10 + 36) )
      {
        v11 = 0LL;
      }
      LODWORD(v7) = sub_1800011FC(v8, byte_180033227, (const GUID *)(v10 + 8), v11, 4u, &v16);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v12 = a1 + 8;
    if ( *(_DWORD *)(v12 + 24) )
    {
      sub_1800087D0(retaddr);
      JUMPOUT(0x18000D0FFLL);
    }
    v7 = sub_180003F8C((__int64)v6, 1);
    *(_QWORD *)v12 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v12 + 16) = *v7;
      *v7 = v12;
      LODWORD(v7) = GetCurrentThreadId();
      *(_DWORD *)(v12 + 24) = (_DWORD)v7;
    }
  }
  return (int)v7;
}
