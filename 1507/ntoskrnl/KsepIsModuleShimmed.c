/*
 * XREFs of KsepIsModuleShimmed @ 0x1404535A8
 * Callers:
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140578AD0 (KsepGetShimCallbacksForDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  _QWORD *v13; // rax
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  _QWORD *v17; // rdx

  v7 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v9, (ULONG_PTR)&qword_140353CC0, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *(_QWORD **)(a1 + 32);
  while ( v13 != (_QWORD *)(a1 + 32) )
  {
    v17 = v13;
    v13 = (_QWORD *)*v13;
    if ( v17[2] == a2 )
    {
      *a3 = v17;
      v7 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
  KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
