/*
 * XREFs of MiDriverPageIsDangling @ 0x1401E5EEC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_140326840;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_140326840 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
