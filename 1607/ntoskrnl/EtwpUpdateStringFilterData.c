/*
 * XREFs of EtwpUpdateStringFilterData @ 0x1406A9514
 * Callers:
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUpdateStringFilterData(void **a1, void **a2, char a3)
{
  bool v3; // zf
  void *v4; // r8

  v3 = a3 == 0;
  v4 = *a1;
  if ( v3 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
