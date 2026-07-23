/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x180053924
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtSubscribeWnfStateChange @ 0x1800A84D0 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventSubscribe @ 0x1800D17C0 (RtlpWnfETWEventSubscribe.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  ULONG v10; // edx
  unsigned int i; // ecx
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  unsigned __int32 v14; // esi
  unsigned __int64 SubscriptionId; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180145FA8 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 56));
  v4 = *(_QWORD **)(a1 + 72);
  v5 = a2 + 8;
  *(_QWORD *)(a2 + 8) = a1 + 64;
  *(_QWORD *)(a2 + 16) = v4;
  if ( *v4 != a1 + 64 )
    __fastfail(3u);
  *v4 = v5;
  *(_QWORD *)(a1 + 72) = v5;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 128) == 1 && (*(_DWORD *)(a2 + 64) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 160) = 1;
  v6 = (_DWORD *)(a1 + 88);
  v7 = 0;
  v8 = (_DWORD *)(a1 + 88);
  do
  {
    v9 = *(_DWORD *)(a2 + 64);
    if ( _bittest(&v9, v7) )
      ++*v8;
    ++v7;
    ++v8;
  }
  while ( v7 < 5 );
  v10 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v6 )
      v10 |= 1 << i;
    ++v6;
  }
  ++*(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
    ++*(_DWORD *)(a1 + 84);
  v12 = *(_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a1 + 24) > v12 )
    *(_DWORD *)(a1 + 24) = v12;
  v13 = NtSubscribeWnfStateChange((PCWNF_STATE_NAME)(a1 + 16), *(_DWORD *)(a1 + 24), v10, &SubscriptionId);
  v14 = v13;
  if ( v13 >= 0 )
    *(_QWORD *)(a1 + 8) = SubscriptionId;
  if ( MEMORY[0x7FFE038E] && v13 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 108),
      *(_QWORD *)(a2 + 32),
      *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 56));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180145FA8 + 8));
  return v14;
}
