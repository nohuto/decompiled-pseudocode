/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180083E88
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180084F44 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB04 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(CResource *__hidden); // rbp

  if ( (*((_BYTE *)this + 96) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 18); ++i )
    {
      v4 = *(unsigned int (__fastcall **)(CResource *__hidden))(**(_QWORD **)(*((_QWORD *)this + 6) + 16LL * i) + 16LL);
      if ( v4 == CResource::Release )
        CResource::Release(*(CResource **)(*((_QWORD *)this + 6) + 16LL * i));
      else
        v4(*(CResource **)(*((_QWORD *)this + 6) + 16LL * i));
    }
    *((_DWORD *)this + 18) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 6, 0x10u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    CBaseAnimation::UnregisterAnimateResource(this);
    *((_BYTE *)this + 96) |= 2u;
  }
}
