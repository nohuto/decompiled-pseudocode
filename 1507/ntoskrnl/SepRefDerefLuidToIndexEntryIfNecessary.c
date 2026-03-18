/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0
 * Callers:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140015BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     SepReferenceLuidToIndexEntry @ 0x140015D60 (SepReferenceLuidToIndexEntry.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int ProcUniqueLuidAndIndexFromAttributeInfo; // ebx
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  int v8; // eax
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  if ( (SepTokenSingletonAttributesConfig & 3) != 3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                              *(_QWORD *)(a1 + 776),
                                              &v10,
                                              &v11);
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
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    if ( a2 )
      v8 = SepDereferenceLuidToIndexEntry();
    else
      v8 = SepReferenceLuidToIndexEntry();
    ProcUniqueLuidAndIndexFromAttributeInfo = v8;
  }
  if ( ProcUniqueLuidAndIndexFromAttributeInfo == -1073741275 )
    return 0;
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
