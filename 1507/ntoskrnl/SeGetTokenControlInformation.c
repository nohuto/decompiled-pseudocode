/*
 * XREFs of SeGetTokenControlInformation @ 0x1406D5738
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14069F504 (AlpcpQueryTokenModifiedIdMessage.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406D5084 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall SeGetTokenControlInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
