/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180039BB8
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x18003A788 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B041C (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*((_BYTE *)this + 176) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 36); ++i )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 15) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_DWORD *)this + 36) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 176) |= 2u;
  }
  if ( *((_BYTE *)this + 152) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
