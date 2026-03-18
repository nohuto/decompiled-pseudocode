/*
 * XREFs of MiDriverPageIsDangling @ 0x1401CEE4C
 * Callers:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_1402FE570;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_1402FE570 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
