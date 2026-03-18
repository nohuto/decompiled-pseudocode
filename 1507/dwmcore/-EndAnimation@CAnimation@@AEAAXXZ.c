/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180046FB8
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180047C94 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CCD0 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // ebp
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 96) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 18); ++i )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 16LL * i) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL * i));
    *((_DWORD *)this + 18) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 6, 0x10u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    CBaseAnimation::UnregisterAnimateResource(this);
    *((_BYTE *)this + 96) |= 2u;
  }
}
