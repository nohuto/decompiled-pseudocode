/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800FCCA4
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800FCD18 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char v5; // bp
  int v7; // edi

  v4 = *(char **)a2;
  v5 = a3;
  if ( *(char **)a2 != a2 )
  {
    v7 = a3 & 1;
    do
    {
      if ( v7 )
      {
        if ( (v5 & 2) != 0 )
          *((_QWORD *)v4 + 3) = 1LL;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)(v4 + 24), a2, a3, a4);
      }
      v4 = *(char **)v4;
    }
    while ( v4 != a2 );
  }
}
