/*
 * XREFs of sub_180014A2C @ 0x180014A2C
 * Callers:
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000C258 @ 0x18000C258 (sub_18000C258.c)
 *     sub_18000C34C @ 0x18000C34C (sub_18000C34C.c)
 *     sub_18000C560 @ 0x18000C560 (sub_18000C560.c)
 *     sub_18000C980 @ 0x18000C980 (sub_18000C980.c)
 *     sub_18000CB50 @ 0x18000CB50 (sub_18000CB50.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_1800127A8 @ 0x1800127A8 (sub_1800127A8.c)
 *     sub_180012910 @ 0x180012910 (sub_180012910.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_1800130C0 @ 0x1800130C0 (sub_1800130C0.c)
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 * Callees:
 *     sub_180015FA4 @ 0x180015FA4 (sub_180015FA4.c)
 */

PSRWLOCK *__fastcall sub_180014A2C(__int64 a1, PSRWLOCK *a2)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rcx
  PSRWLOCK *p_SRWLock; // rcx
  PSRWLOCK v7; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v10; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v3 = *(_QWORD *)(a1 + 312);
    v4 = 1;
    if ( v3 )
      v5 = v3 + 8;
    else
      v5 = 0LL;
    p_SRWLock = (PSRWLOCK *)sub_180015FA4(v5, &v10);
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  v7 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v7;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v10 )
    ReleaseSRWLockExclusive(v10);
  return a2;
}
