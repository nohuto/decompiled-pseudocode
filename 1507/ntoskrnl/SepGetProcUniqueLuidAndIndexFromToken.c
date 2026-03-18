/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromToken @ 0x1406D6F58
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14024FCD0 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140015BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromToken(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rdx
  __int16 v9; // cx

  ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                *(_QWORD *)(a1 + 776),
                                                a2,
                                                a3);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
