/*
 * XREFs of SepRmDestroyCapTable @ 0x140696798
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140144EF0 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140219C7C (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14007CF48 (RtlInitEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140092020 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14009211C (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140092170 (RtlEndEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1400B5290 (RtlDeleteHashTable.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
