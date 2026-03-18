/*
 * XREFs of AlpcpInsertMessageMainQueue @ 0x140482904
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpInsertMessageMainQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = KeAbPreAcquire(a1 + 136, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v7 & 0xFFFFFF81 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 152);
  *(_QWORD *)a2 = a1 + 144;
  **(_QWORD **)(a1 + 152) = a2;
  *(_QWORD *)(a1 + 152) = a2;
  ++*(_DWORD *)(a1 + 448);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
