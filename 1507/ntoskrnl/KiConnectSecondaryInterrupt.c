/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x140203414
 * Callers:
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiInsertInterruptObjectOrdered @ 0x140207714 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  int v3; // edx
  char v4; // si
  unsigned __int8 v5; // cl
  char v6; // bp
  unsigned __int8 v7; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // r10
  __int64 v12; // r10
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( !KiSecondaryInterruptServicesEnabled )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0;
  v5 = *(_BYTE *)(a1 + 92);
  v6 = 0;
  if ( (unsigned int)(v3 - 256) > 0xFF )
    return 3221225711LL;
  if ( v5 > 0xCu )
    return 3221225711LL;
  if ( *(_DWORD *)(a1 + 96) >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v5 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(v3 - 256);
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(v9 + 8), Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)v9);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v9);
  }
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v11 = *(_QWORD *)(v9 + 40);
    if ( v11 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_21;
      if ( !*(_BYTE *)(v11 + 100) )
        goto LABEL_21;
      if ( *(_DWORD *)(v11 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_21;
      v6 = 1;
      v4 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v9 + 40), a1);
      if ( *(_BYTE *)(v12 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_21;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v9 + 32) = 0;
    }
    *(_QWORD *)(v9 + 40) = a1;
LABEL_21:
    *(_BYTE *)(a1 + 95) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v9, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  __writecr8(CurrentIrql);
  KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    return v4 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
