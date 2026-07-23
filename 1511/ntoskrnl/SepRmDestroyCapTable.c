/*
 * XREFs of SepRmDestroyCapTable @ 0x140656E28
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140200794 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x140006B94 (RtlInitEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x1400CFC90 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400CFD90 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1400CFDE0 (RtlEndEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1400F4564 (RtlDeleteHashTable.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
