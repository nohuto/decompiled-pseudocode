/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x180065AE0
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180065AC0 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662F8 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1800A98F0 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800D9BF8 (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r8
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int i; // ecx
  unsigned int v16; // edi
  int v17; // eax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  RtlAcquireSRWLockExclusive(qword_1801530A0 + 8, (char *)a2, (__int64)a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v7, v8, v9);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801530A0 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( MEMORY[0x7FFE038E] )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 108),
        *(_QWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 64));
    v10 = (_DWORD *)(a1 + 88);
    v11 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v12 = (_DWORD *)(a1 + 88);
    do
    {
      v13 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v13, v11) )
        --*v12;
      ++v11;
      ++v12;
    }
    while ( v11 < 5 );
    v14 = 0LL;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v10 )
        v14 = (1 << i) | (unsigned int)v14;
      ++v10;
    }
    --*(_DWORD *)(a1 + 80);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 84);
    v16 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v17 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), (unsigned int)v14, &v19);
      v16 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741772 || v17 == -1073741431 )
          v16 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v19;
      }
    }
    RtlpDecRefWnfUserSubscription(a2, v14, v10);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801530A0 + 8));
    RtlpDecRefWnfNameSubscription(a1);
    return v16;
  }
}
