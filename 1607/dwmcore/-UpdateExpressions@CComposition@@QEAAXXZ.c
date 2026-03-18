/*
 * XREFs of ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x18003B674
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 */

void __fastcall CComposition::UpdateExpressions(CComposition *this)
{
  __int64 v2; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_PROCESS_EXPRESSIONS_Start);
  CExpressionManager::UpdateExpressions(
    *((CExpressionManager **)this + 21),
    *((_QWORD *)this + 59),
    *((_QWORD *)this + 44));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v2, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
}
