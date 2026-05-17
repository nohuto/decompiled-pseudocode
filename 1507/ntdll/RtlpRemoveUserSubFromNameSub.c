/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x18000B100
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18000B0E0 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlpDecRefWnfUserSubscription @ 0x18000BB10 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     NtSubscribeWnfStateChange @ 0x1800952E0 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800C8E30 (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int i; // ecx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  RtlAcquireSRWLockExclusive(qword_180146F28 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_180146F28 + 8);
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
    v6 = (_DWORD *)(a1 + 88);
    v7 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v8 = (_DWORD *)(a1 + 88);
    do
    {
      v9 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v9, v7) )
        --*v8;
      ++v7;
      ++v8;
    }
    while ( v7 < 5 );
    v10 = 0LL;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v6 )
        v10 = (1 << i) | (unsigned int)v10;
      ++v6;
    }
    --*(_DWORD *)(a1 + 80);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 84);
    v12 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v13 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), (unsigned int)v10, &v15);
      v12 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 || v13 == -1073741431 )
          v12 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v15;
      }
    }
    RtlpDecRefWnfUserSubscription(a2, v10, v6);
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_180146F28 + 8);
    RtlpDecRefWnfNameSubscription(a1);
    return v12;
  }
}
