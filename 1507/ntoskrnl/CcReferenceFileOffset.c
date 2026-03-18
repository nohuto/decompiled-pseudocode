/*
 * XREFs of CcReferenceFileOffset @ 0x1401DE144
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SetVacb @ 0x140078644 (SetVacb.c)
 *     CcFreeUnusedVacbLevels @ 0x140078A30 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x140078A84 (CcAllocateVacbLevels.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, unsigned int a2)
{
  int v3; // edx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  unsigned __int8 v17; // di
  signed __int32 v18; // eax
  _QWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-20h]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v3 = *(_DWORD *)(a1 + 152);
    v19[2] = 0LL;
    v19[1] = v19;
    v19[0] = v19;
    v20 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v3 & 0x200) != 0, (__int64)v19) )
      RtlRaiseStatus(-1073741670);
    v5 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, v4);
    v7 = v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
      ExpAcquireFastMutexContended(a1 + 280, v5);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v9 = (signed __int64 *)(a1 + 104);
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = CurrentIrql;
    v10 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v6);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v10, a1 + 104, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL);
    _m_prefetchw(v9);
    v14 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    else
      v15 = v14 - 16;
    if ( (v14 & 2) != 0 || (v16 = *v9, v16 != _InterlockedCompareExchange64(v9, v15, v14)) )
      ExfReleasePushLock((_QWORD *)(a1 + 104), v13);
    KeAbPostRelease(a1 + 104);
    *(_QWORD *)(a1 + 288) = 0LL;
    v17 = *(_BYTE *)(a1 + 328);
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
    if ( v18 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 280), v18);
    __writecr8(v17);
    KeAbPostRelease(a1 + 280);
    CcFreeUnusedVacbLevels((__int64)v19);
  }
}
