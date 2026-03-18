/*
 * XREFs of MiDriverPageIsDangling @ 0x14020E314
 * Callers:
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_14034EA30;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_14034EA30 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
