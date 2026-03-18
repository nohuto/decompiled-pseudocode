/*
 * XREFs of SeSecurityAttributePresent @ 0x14050D910
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140482DB0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 *     PsQueryProcessAttributesByToken @ 0x14050BC64 (PsQueryProcessAttributesByToken.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     EtwpQueryTokenPackageInfo @ 0x14050D82C (EtwpQueryTokenPackageInfo.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1406E24E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     AuthzBasepSecurityAttributePresent @ 0x14004E5A0 (AuthzBasepSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

bool __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // bl
  struct _KTHREAD *v6; // rdx
  __int16 v7; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a2);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
