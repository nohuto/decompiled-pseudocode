/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromToken @ 0x1406550E0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140200DEC (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140200F3C (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromToken(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // ebx
  struct _KTHREAD *CurrentThread; // rax

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
    KeLeaveCriticalRegion();
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
