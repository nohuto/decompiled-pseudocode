/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x1800F3158
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x1800F3094 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F3158 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800F30E4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F3158 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // r9
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // [rsp+38h] [rbp+10h]

  v4 = (unsigned int)a2;
  v5 = (unsigned __int8)a2 & 1;
  v14 = v5;
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), a2, a3, a4);
  RtlpHpLfhOwnerListLockUnlock(a1, (char *)(a1 + 24), v4, a4);
  RtlpHpLfhOwnerListLockUnlock(v7, (char *)(a1 + 40), v4, v8);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v12 = *(unsigned __int8 *)(a1 + 2);
    if ( v5 )
    {
      if ( (v4 & 2) != 0 )
        *(_QWORD *)(a1 + 80) = 1LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 80));
    }
    else
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 80), v9, v10, v11);
    }
    if ( (_DWORD)v12 )
    {
      v13 = 0LL;
      do
      {
        RtlpHpLfhOwnerLockUnlock(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 104)), v4);
        v13 += 8LL;
        --v12;
      }
      while ( v12 );
      v5 = v14;
    }
  }
  if ( v5 )
  {
    if ( (v4 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  }
}
