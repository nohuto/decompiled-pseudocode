/*
 * XREFs of ??4?$unique_ptr@U_MemoryPolicyManifest@@U?$default_delete@U_MemoryPolicyManifest@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004D8B8
 * Callers:
 *     ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54 (-CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimi.c)
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

void **__fastcall utl::unique_ptr<_MemoryPolicyManifest,utl::default_delete<_MemoryPolicyManifest>>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4);
  return a1;
}
