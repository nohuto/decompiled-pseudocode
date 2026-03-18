/*
 * XREFs of PiDqActionDataFree @ 0x14048BEE8
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14048B994 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x14048BD40 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14048CA74 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)a1 )
  {
    v2 = (void *)a1[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = a1[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)a1 + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(a1, 0x58706E50u);
}
