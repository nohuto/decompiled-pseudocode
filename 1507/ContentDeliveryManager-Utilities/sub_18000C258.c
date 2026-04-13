/*
 * XREFs of sub_18000C258 @ 0x18000C258
 * Callers:
 *     sub_18002703B @ 0x18002703B (sub_18002703B.c)
 * Callees:
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000D450 @ 0x18000D450 (sub_18000D450.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 */

__int64 __fastcall sub_18000C258(_QWORD *a1)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rax
  char *v5; // rdi
  _DWORD *v6; // rdx
  int v7; // eax
  int v8; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[39] == 0LL;
  *a1 = off_18002DF30;
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  sub_180014A2C(a1, SRWLock);
  v4 = (volatile signed __int32 *)a1[39];
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)a1[39];
        if ( v5 )
        {
          sub_18000D450(v5 + 8);
          operator delete(v5);
        }
      }
      a1[39] = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)a1[6];
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      v8 = v6[20];
      if ( (int)v6[23] < 0 )
        v7 = v6[23];
      if ( v8 < 1 )
        __fastfail(7u);
      if ( (int)v6[21] >= 0 )
        v6[21] = v7;
      v6[20] = v8 - 1;
      sub_18000BE40((__int64)a1);
    }
  }
  return sub_18000D2D8(a1);
}
