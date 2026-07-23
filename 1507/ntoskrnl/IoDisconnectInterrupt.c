/*
 * XREFs of IoDisconnectInterrupt @ 0x1405682D8
 * Callers:
 *     IoDisconnectInterruptEx @ 0x140568260 (IoDisconnectInterruptEx.c)
 *     IopConnectLineBasedInterrupt @ 0x14057C66C (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x14057CB44 (IopConnectMessageBasedInterrupt.c)
 *     VerifierIoDisconnectInterrupt @ 0x140739AF0 (VerifierIoDisconnectInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeRemoveQueueDpc @ 0x14010C998 (KeRemoveQueueDpc.c)
 *     KeFreeInterrupt @ 0x14014AF7C (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x14057D290 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14057D3B0 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14057D3C4 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14057D3D8 (IopInitializeActiveConnectBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14067DC64 (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  _KTHREAD *volatile *p_ServiceThread; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  _SLIST_ENTRY **v4; // r14
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  unsigned __int64 v9; // rbx
  struct _KTHREAD *v10; // r10
  char v11; // dl
  __int64 *v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  _BYTE v15[80]; // [rsp+30h] [rbp-58h] BYREF

  p_ServiceThread = &InterruptObject[-1].ServiceThread;
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(p_ServiceThread + 2, v15);
  v2 = *((_QWORD *)p_ServiceThread + 1) - ((*((_QWORD *)p_ServiceThread + 1) >> 1) & 0x5555555555555555LL);
  v3 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  IopAcquireActiveConnectLock(v15);
  v4 = (_SLIST_ENTRY **)(p_ServiceThread + 57);
  LOBYTE(v5) = v3;
  KeDisconnectInterrupt((__int64 *)p_ServiceThread + 57, v5, (__int64)(p_ServiceThread + 2));
  IopReleaseActiveConnectLock(v15);
  if ( *((_BYTE *)p_ServiceThread + 360) )
    IopDestroyPassiveInterruptBlock(*((unsigned int *)p_ServiceThread + 7));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *((_BYTE *)p_ServiceThread + 360) )
  {
    v10 = KeGetCurrentThread();
    v11 = 0;
    if ( (char)v3 <= 0 )
      goto LABEL_15;
    v12 = (__int64 *)(p_ServiceThread + 57);
    v13 = v3;
    do
    {
      v14 = *v12++;
      if ( *(struct _KTHREAD **)(v14 + 152) == v10 )
        v11 = 1;
      --v13;
    }
    while ( v13 );
    if ( !v11 )
LABEL_15:
      KeWaitForSingleObject((PVOID)(p_ServiceThread + 46), Executive, 0, 0, 0LL);
  }
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (char)v3 > 0 )
  {
    v9 = v3;
    do
    {
      KeFreeInterrupt(*v4++);
      --v9;
    }
    while ( v9 );
  }
  IopDestroyActiveConnectBlock(v15);
  ExFreePoolWithTag((PVOID)p_ServiceThread, 0);
}
