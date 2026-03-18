/*
 * XREFs of FreeOperandValue @ 0x14068820C
 * Callers:
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 * Callees:
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 */

void __fastcall FreeOperandValue(_QWORD *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)a1 )
        SddlpFree(v2);
    }
    SddlpFree(a1);
  }
}
