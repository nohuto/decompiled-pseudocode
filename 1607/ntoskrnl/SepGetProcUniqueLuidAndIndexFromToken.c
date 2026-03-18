/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromToken @ 0x14021AA7C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14021A87C (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14021A9CC (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromToken(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  char v3; // si
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v3 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    }
    ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                *(_QWORD *)(a1 + 776),
                                                a2,
                                                a3);
    if ( v3 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
    }
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
