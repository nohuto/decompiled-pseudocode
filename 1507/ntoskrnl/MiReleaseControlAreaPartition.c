/*
 * XREFs of MiReleaseControlAreaPartition @ 0x14008B010
 * Callers:
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaPartition(__int64 *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int16 *v3; // r8
  __int64 v4; // rsi
  unsigned __int16 v5; // ax
  __int64 v6; // r9
  __int16 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = MiSystemPartition;
  v4 = *a1;
  v5 = *((_WORD *)a1 + 30) & 0x3FF;
  v6 = qword_14034F0E8;
  if ( v5 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(__int16 **)(qword_14034F0E8 + 8LL * v5);
  result = *(unsigned __int16 *)(a2 + 1452);
  if ( (_WORD)result != 1023 )
  {
    result = (unsigned __int16)result;
    v3 = *(__int16 **)(qword_14034F0E8 + 8LL * (unsigned __int16)result);
  }
  if ( v8 != v3 )
  {
    v10 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire(v4 + 40, 0LL, 0LL, v6);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(v4 + 40, v11, v4 + 40);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = *((_DWORD *)a1 + 15);
    if ( v13 >> 10 != 0x3FFFFF )
    {
      *((_DWORD *)a1 + 15) = v13 & 0x3FF | (((v13 >> 10) - 1) << 10);
      if ( !(((v13 >> 10) - 1) << 10) )
        v10 = *(unsigned int *)(v4 + 8);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 40);
    KeAbPostRelease(v4 + 40);
    result = (unsigned int)++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v14);
    }
    if ( v10 )
      return MiReturnSubsectionCharges(v10);
  }
  return result;
}
