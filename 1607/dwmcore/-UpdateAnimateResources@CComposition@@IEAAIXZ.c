/*
 * XREFs of ?UpdateAnimateResources@CComposition@@IEAAIXZ @ 0x18003B5CC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UpdateAnimateResources(CComposition *this)
{
  CComposition *v1; // rsi
  __int64 v2; // rbx
  unsigned int v3; // edi
  struct FRAME_TIME_INFO *v5; // rdx
  CAnimation *v6; // rcx
  char (__fastcall *v7)(CAnimation *, struct FRAME_TIME_INFO *); // rax
  char updated; // al

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
  LODWORD(v2) = *((_DWORD *)v1 + 154);
  v3 = 0;
  if ( (_DWORD)v2 )
  {
    do
    {
      v5 = (struct FRAME_TIME_INFO *)*((_QWORD *)v1 + 43);
      v2 = (unsigned int)(v2 - 1);
      v6 = *(CAnimation **)(*((_QWORD *)v1 + 74) + 8 * v2);
      v7 = **(char (__fastcall ***)(CAnimation *, struct FRAME_TIME_INFO *))v6;
      if ( v7 == CAnimation::UpdateAnimateValues )
        updated = CAnimation::UpdateAnimateValues(v6, v5);
      else
        updated = v7(v6, v5);
      if ( updated )
        ++v3;
    }
    while ( (_DWORD)v2 );
    if ( v3 )
    {
      this = (CComposition *)*((_QWORD *)v1 + 21);
      *((_BYTE *)this + 384) |= 2u;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
  return v3;
}
