/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x18015D5A0
 * Callers:
 *     ??_ECScrollPositionAnimation@@UEAAPEAXI@Z @ 0x18015D610 (--_ECScrollPositionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Stop@CScrollAnimation@@UEAAJXZ @ 0x18015E860 (-Stop@CScrollAnimation@@UEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  struct CResource **v2; // rdx

  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  v2 = (struct CResource **)*((_QWORD *)this + 54);
  if ( v2 )
  {
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v2);
    *((_QWORD *)this + 54) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 512);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 61);
  *((_QWORD *)this + 38) = &CMILRefCountBase::`vftable';
  CBaseExpression::~CBaseExpression(this);
}
