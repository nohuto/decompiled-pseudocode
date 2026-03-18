/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0075FE4
 * Callers:
 *     RIMReadInput @ 0x1C00785F0 (RIMReadInput.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
      ApiSetLeaveEditionCrit();
  }
}
