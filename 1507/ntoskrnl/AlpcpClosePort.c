/*
 * XREFs of AlpcpClosePort @ 0x1404A3434
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 *     AlpcpSendCloseMessage @ 0x1404A46BC (AlpcpSendCloseMessage.c)
 */

void __fastcall AlpcpClosePort(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 256) & 0x100000) != 0 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a2 + 24);
    if ( (v6 & 1) != 0 )
      v6 = 0LL;
    if ( v6 == a1 )
    {
LABEL_6:
      AlpcpDoPortCleanup(a2, a1);
      if ( (*(_DWORD *)(a2 + 256) & 0x1000) == 0 )
        AlpcpSendCloseMessage(a2);
    }
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
}
