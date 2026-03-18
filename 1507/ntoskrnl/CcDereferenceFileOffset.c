/*
 * XREFs of CcDereferenceFileOffset @ 0x1401DDF48
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SetVacb @ 0x140078644 (SetVacb.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  unsigned __int8 v18; // di
  signed __int32 v19; // eax

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = a1 + 280;
    v6 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, a4);
    v8 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
      ExpAcquireFastMutexContended(v5, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = (signed __int64 *)(a1 + 104);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 48) = CurrentIrql;
    v11 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v7);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v11, a1 + 104, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL);
    _m_prefetchw(v10);
    v15 = *v10;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    else
      v16 = v15 - 16;
    if ( (v15 & 2) != 0 || (v17 = *v10, v17 != _InterlockedCompareExchange64(v10, v16, v15)) )
      ExfReleasePushLock((_QWORD *)(a1 + 104), v14);
    KeAbPostRelease(a1 + 104);
    *(_QWORD *)(v5 + 8) = 0LL;
    v18 = *(_BYTE *)(v5 + 48);
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v5, v19);
    __writecr8(v18);
    KeAbPostRelease(v5);
  }
}
