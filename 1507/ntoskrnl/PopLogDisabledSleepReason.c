/*
 * XREFs of PopLogDisabledSleepReason @ 0x1404E0DAC
 * Callers:
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E1074 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 */

void __fastcall PopLogDisabledSleepReason(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  SIZE_T v12; // rsi
  PVOID PoolWithTag; // rax
  void *v14; // rbx
  __int64 v15; // r8
  _DWORD *v16; // r10

  v4 = 0;
  LODWORD(v5) = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopDisableSleepMutex, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopDisableSleepMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopDisableSleepMutex, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14032F768 = (__int64)KeGetCurrentThread();
  dword_14032F790 = CurrentIrql;
  PopRemoveReasonRecordByReasonCode(13LL);
  v9 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v4 |= *(_DWORD *)(v9 + 20);
      v5 = (unsigned int)(v5 + 1);
      v9 = *(_QWORD *)v9;
    }
    while ( (__int64 *)v9 != &PopDisableSleepList );
    if ( v4 )
    {
      v12 = 8 * v5;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x66756263u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        v15 = PopDisableSleepList;
        v16 = PoolWithTag;
        while ( (__int64 *)v15 != &PopDisableSleepList )
        {
          *v16 = *(_DWORD *)(v15 + 16);
          v16 += 2;
          *(v16 - 1) = *(_DWORD *)(v15 + 20);
          v15 = *(_QWORD *)v15;
        }
        PopLogSleepDisabled(13LL, v4, PoolWithTag, v12);
        ExFreePoolWithTag(v14, 0x66756263u);
      }
    }
  }
  qword_14032F768 = 0LL;
  v10 = dword_14032F790;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopDisableSleepMutex, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopDisableSleepMutex, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PopDisableSleepMutex);
}
