/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x180065AD0
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180065AB0 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662E8 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663B8 (RtlpDecRefWnfNameSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1800A98F0 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800D9CB8 (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(char *BaseAddress, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // r8
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  int v9; // eax
  ULONG v10; // edx
  unsigned int i; // ecx
  unsigned __int32 v12; // edi
  NTSTATUS v13; // eax
  unsigned __int64 SubscriptionId; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801530A0 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( *((_DWORD *)a2 + 24) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801530A0 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( MEMORY[0x7FFE038E] )
      RtlpWnfETWEventUnsubscribe(
        *((_QWORD *)BaseAddress + 2),
        (_DWORD)a2,
        (_DWORD)BaseAddress,
        *((_DWORD *)BaseAddress + 27),
        a2[4],
        *((_DWORD *)a2 + 16));
    v6 = BaseAddress + 88;
    v7 = 0;
    *((_DWORD *)a2 + 24) = 1;
    *a3 = 1;
    v8 = BaseAddress + 88;
    do
    {
      v9 = *((_DWORD *)a2 + 16);
      if ( _bittest(&v9, v7) )
        --*v8;
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
    --*((_DWORD *)BaseAddress + 20);
    if ( (*((_BYTE *)a2 + 60) & 4) != 0 )
      --*((_DWORD *)BaseAddress + 21);
    v12 = 0;
    if ( *((_QWORD *)BaseAddress + 1) )
    {
      v13 = NtSubscribeWnfStateChange(
              (PCWNF_STATE_NAME)BaseAddress + 2,
              *((_DWORD *)BaseAddress + 6),
              v10,
              &SubscriptionId);
      v12 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 || v13 == -1073741431 )
          v12 = 0;
      }
      else
      {
        *((_QWORD *)BaseAddress + 1) = SubscriptionId;
      }
    }
    RtlpDecRefWnfUserSubscription(a2);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801530A0 + 8));
    RtlpDecRefWnfNameSubscription(BaseAddress);
    return v12;
  }
}
