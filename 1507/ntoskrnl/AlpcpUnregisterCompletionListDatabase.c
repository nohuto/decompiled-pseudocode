/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x14052D33C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax

  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v5, (ULONG_PTR)&AlpcpCompletionListDatabase, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = *a1;
  v10 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v10 != a1 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  --dword_140332288;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
