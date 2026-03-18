/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14014026C
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401402C0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(__int64 a1)
{
  __int64 result; // rax

  result = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
