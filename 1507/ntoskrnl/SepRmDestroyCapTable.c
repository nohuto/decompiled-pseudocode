/*
 * XREFs of SepRmDestroyCapTable @ 0x1406D92E0
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x14024F694 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14002CF80 (RtlInitEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140103D60 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1401258A0 (RtlEndEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140131B40 (RtlDeleteHashTable.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
