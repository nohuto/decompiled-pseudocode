/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x1404C58A0
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404C584C (AlpcpFreeCompletionList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (ULONG_PTR)&AlpcpCompletionListDatabase);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --dword_1402E1E28;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
