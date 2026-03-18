/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x14004E880
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 */

__int64 __fastcall FsRtlAcquireHeaderMutex(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v2 = KeAbPreAcquire(v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v1, 0) )
    ExpAcquireFastMutexContended(v1);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
  result = CurrentIrql;
  *(_DWORD *)(v1 + 48) = CurrentIrql;
  return result;
}
