/*
 * XREFs of AlpcpFlushCancelQueue @ 0x14047F26C
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14047EE8C (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD **v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  ULONG_PTR v9; // rcx

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  v6 = KeAbPreAcquire(a1 + 136, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (ULONG_PTR)v2);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *v5;
  while ( v8 != v5 )
  {
    v9 = (ULONG_PTR)(v8 - 10);
    v8 = (_QWORD *)*v8;
    if ( !a2 || *(_QWORD *)(v9 + 56) == a2 )
    {
      **(_QWORD **)(v9 + 88) = *(_QWORD *)(v9 + 80);
      *(_QWORD *)(*(_QWORD *)(v9 + 80) + 8LL) = *(_QWORD *)(v9 + 88);
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_QWORD *)(v9 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v9, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
