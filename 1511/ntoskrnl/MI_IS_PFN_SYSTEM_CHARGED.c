/*
 * XREFs of MI_IS_PFN_SYSTEM_CHARGED @ 0x1400EEC9C
 * Callers:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PFN_SYSTEM_CHARGED(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || v1 < 0xFFFFF68000000000uLL )
  {
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  }
  else
  {
    return 0LL;
  }
}
