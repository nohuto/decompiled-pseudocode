/*
 * XREFs of PiDqActionDataFree @ 0x14045E9AC
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x14045E804 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14045F3C8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(void *a1)
{
  void *v2; // rcx
  char *v3; // rdx

  if ( *(_DWORD *)a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (char *)*((_QWORD *)a1 + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)a1 + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(a1, 0x58706E50u);
}
