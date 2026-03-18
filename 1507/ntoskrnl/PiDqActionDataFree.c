/*
 * XREFs of PiDqActionDataFree @ 0x14044266C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x1404424C4 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
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
