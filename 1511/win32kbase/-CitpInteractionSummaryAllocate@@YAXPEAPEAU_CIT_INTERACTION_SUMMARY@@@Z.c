/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C007749C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00773F8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0077504 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1)
{
  unsigned __int16 v1; // bx
  struct _CIT_INTERACTION_SUMMARY *v3; // rax
  struct _CIT_INTERACTION_SUMMARY *v4; // rdx
  __int16 v5; // ax

  v1 = dword_1C0107178;
  v3 = (struct _CIT_INTERACTION_SUMMARY *)CitAllocZero((unsigned __int16)dword_1C0107178);
  v4 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    v5 = (*((_WORD *)v3 + 32) ^ (4 * v1)) & 0x7FFC;
    *a1 = v4;
    *((_WORD *)v4 + 32) ^= v5;
    *((_QWORD *)v4 + 13) = (char *)v4 + 120;
    *((_QWORD *)v4 + 14) = v1 - 120;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0xE2Du);
  }
}
