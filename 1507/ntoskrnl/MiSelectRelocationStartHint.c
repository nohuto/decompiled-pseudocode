/*
 * XREFs of MiSelectRelocationStartHint @ 0x14046BBA8
 * Callers:
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14046BA68 (MiObtainRelocationBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlFindClearBits @ 0x140089F70 (RtlFindClearBits.c)
 *     RtlCopyBitMap @ 0x1400EF940 (RtlCopyBitMap.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlMergeBitMaps @ 0x140117218 (RtlMergeBitMaps.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  ULONG ClearBits; // esi
  __int16 v14; // ax

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_14034E910, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E910, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_14034E910, v9, (ULONG_PTR)&qword_14034E910, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps((__int64)&Destination, *(_QWORD *)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E910, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E910);
  KeAbPostRelease((ULONG_PTR)&qword_14034E910);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return ClearBits;
}
