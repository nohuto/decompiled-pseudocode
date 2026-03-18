/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0075FF8
 * Callers:
 *     RIMReadInput @ 0x1C00785F0 (RIMReadInput.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     ApiSetEnterEditionCrit @ 0x1C0076018 (ApiSetEnterEditionCrit.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
    *((_DWORD *)this + 1) = ApiSetEnterEditionCrit();
  return this;
}
