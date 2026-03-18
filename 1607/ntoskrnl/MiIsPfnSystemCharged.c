/*
 * XREFs of MiIsPfnSystemCharged @ 0x14012E0DC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  else
    return 0LL;
}
