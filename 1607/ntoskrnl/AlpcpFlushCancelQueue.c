/*
 * XREFs of AlpcpFlushCancelQueue @ 0x14040985C
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404094A8 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 */

unsigned __int64 __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD **v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  _QWORD *v8; // rdi
  ULONG_PTR v10; // rcx

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  v6 = (_BYTE *)KeAbPreAcquire(a1 + 136, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (ULONG_PTR)v2);
  if ( v7 )
    v7[26] |= 1u;
  v8 = *v5;
  while ( v8 != v5 )
  {
    v10 = (ULONG_PTR)(v8 - 10);
    v8 = (_QWORD *)*v8;
    if ( !a2 || *(_QWORD *)(v10 + 56) == a2 )
    {
      **(_QWORD **)(v10 + 88) = *(_QWORD *)(v10 + 80);
      *(_QWORD *)(*(_QWORD *)(v10 + 80) + 8LL) = *(_QWORD *)(v10 + 88);
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_QWORD *)(v10 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v10);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
