/*
 * XREFs of MiResidentPagesForSpan @ 0x1404E730C
 * Callers:
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r11

  MiGetPteAddress(a1);
  MiGetPteAddress(v1);
  do
  {
    MiGetPteAddress(v2);
    MiGetPteAddress(v3);
  }
  while ( v5 != 1 );
  return v4;
}
