/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x14055A838
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  PVOID *v1; // rbx
  void *v2; // rcx
  PACCESS_TOKEN v3; // rdi
  unsigned int InformationToken; // ebx

  v1 = (PVOID *)(a1 + 792);
  v2 = *(void **)(a1 + 792);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *v1 = 0LL;
  }
  v3 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  InformationToken = SeQueryInformationToken(v3, TokenAccessInformation, v1);
  ObfDereferenceObject(v3);
  return InformationToken;
}
