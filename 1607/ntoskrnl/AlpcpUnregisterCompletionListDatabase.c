/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x1404D217C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (ULONG_PTR)&AlpcpCompletionListDatabase);
  if ( v4 )
    v4[26] |= 1u;
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --dword_140307348;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
