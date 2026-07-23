/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140501E64
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // esi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  unsigned __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v7 = (int)StateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 0LL;
  if ( SubscriptionId )
  {
    ProbeForWrite(SubscriptionId, 8uLL, 1u);
    *SubscriptionId = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange(
         (unsigned __int64)&v13 & -(__int64)(SubscriptionId != 0LL),
         0,
         v7,
         ChangeStamp,
         0LL,
         0LL,
         EventMask,
         1);
  if ( v9 >= 0 && SubscriptionId )
    *SubscriptionId = v13;
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
