/*
 * XREFs of FreeOperandValue @ 0x1406CCBC4
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 * Callees:
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
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
