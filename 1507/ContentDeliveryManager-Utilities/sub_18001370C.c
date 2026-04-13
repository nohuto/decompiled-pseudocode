/*
 * XREFs of sub_18001370C @ 0x18001370C
 * Callers:
 *     sub_18000C954 @ 0x18000C954 (sub_18000C954.c)
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000D4D4 @ 0x18000D4D4 (sub_18000D4D4.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 */

void __fastcall sub_18001370C(_QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rbx
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[39] )
    goto LABEL_12;
  sub_180014A2C(a1, SRWLock);
  v3 = (volatile signed __int32 *)a1[39];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)a1[39];
        if ( v4 )
        {
          sub_18000D4D4((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      a1[39] = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)a1[6];
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[20];
      if ( (int)v5[23] < 0 )
        v6 = v5[23];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[21] >= 0 )
        v5[21] = v6;
      v5[20] = v7 - 1;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
