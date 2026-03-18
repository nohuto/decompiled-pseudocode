/*
 * XREFs of AlpcpInsertMessageLargeMessageQueue @ 0x1404DBAD4
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DB9C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpInsertMessageLargeMessageQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  int v7; // eax

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = (_BYTE *)KeAbPreAcquire(a1 + 136, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    v6[26] |= 1u;
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v7 & 0xFFFFFF82 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 2;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 168);
  *(_QWORD *)a2 = a1 + 160;
  **(_QWORD **)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 168) = a2;
  ++*(_DWORD *)(a1 + 452);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
