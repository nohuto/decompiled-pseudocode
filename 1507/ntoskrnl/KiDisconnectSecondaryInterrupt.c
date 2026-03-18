/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x1402035F8
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiDisconnectInterruptCommon @ 0x14014B3DC (KiDisconnectInterruptCommon.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v4; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rax
  unsigned int v10; // eax
  struct _KEVENT *v11; // rcx
  unsigned int v12; // ebx
  struct _KTHREAD *v13; // rdx
  __int16 v14; // cx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(v6 + 8), Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)v6);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v6);
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    v9 = *(_QWORD *)(v6 + 40);
    if ( v9 == a1 )
      v4 = *(_QWORD *)(v9 + 8) == v9 + 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v6, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  __writecr8(CurrentIrql);
  if ( v4 )
    HalDisableInterrupt(a2);
  v10 = KiDisconnectInterruptCommon(1, a1, a2, v7);
  v11 = (struct _KEVENT *)(v6 + 8);
  v12 = v10;
  KeSetEvent(v11, 0, 0);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
