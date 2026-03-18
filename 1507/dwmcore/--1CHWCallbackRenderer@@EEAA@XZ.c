/*
 * XREFs of ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008DC28
 * Callers:
 *     ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18008DCD8 (--_GCHWCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHWCallbackRenderer::~CHWCallbackRenderer(CHWCallbackRenderer *this)
{
  CMILRefCountBase *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 i; // rbx
  CMILRefCountBase *v6; // rcx

  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 11);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 10));
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    v6 = *(CMILRefCountBase **)(*((_QWORD *)this + 4) + 8 * i);
    if ( v6 )
      CMILRefCountBase::Release(v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
