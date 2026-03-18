/*
 * XREFs of PiUEventHandleUnregisterClient @ 0x140417B44
 * Callers:
 *     PiUEventHandleIoctl @ 0x140416618 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall PiUEventHandleUnregisterClient(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  ULONG_PTR v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v10; // rdi
  unsigned __int8 v11; // si
  signed __int32 v12; // eax

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v7 = KeAbPreAcquire(v6, 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
      ExpAcquireFastMutexContended(v6, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 48) = CurrentIrql;
    v10 = *(_QWORD *)(v4 + 16);
    *(_BYTE *)(v4 + 140) = 0;
    v11 = *(_BYTE *)(v10 + 48);
    *(_QWORD *)(v10 + 8) = 0LL;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v12);
    __writecr8(v11);
    KeAbPostRelease(v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
