/*
 * XREFs of ?Reset@CScrollAnimation@@AEAAXM@Z @ 0x18015E310
 * Callers:
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x18015E3E4 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultFriction@CScrollAnimation@@AEBAMXZ @ 0x18015DE80 (-GetDefaultFriction@CScrollAnimation@@AEBAMXZ.c)
 */

void __fastcall CScrollAnimation::Reset(CScrollAnimation *this, float a2)
{
  (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 216LL))(this);
  *((_BYTE *)this + 468) &= 0xF4u;
  *(_QWORD *)((char *)this + 420) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 97) = 0;
  *(_QWORD *)((char *)this + 452) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 95) = 2139095039;
  *((float *)this + 93) = CScrollAnimation::GetDefaultFriction(this);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 61);
  *((_DWORD *)this + 124) = 0;
}
