/*
 * XREFs of ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180072350
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 48);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_ffff(
      v7,
      (unsigned int)&EVTDESC_ETWGUID_CLEAREVENT_Start,
      v8,
      v9,
      *(_DWORD *)(v6 + 68),
      *(_DWORD *)(v6 + 72));
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 40LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 40LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &EVTDESC_ETWGUID_CLEAREVENT_Stop);
}
