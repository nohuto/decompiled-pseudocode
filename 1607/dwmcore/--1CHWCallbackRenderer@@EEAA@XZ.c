/*
 * XREFs of ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18005752C
 * Callers:
 *     ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x1800575DC (--_GCHWCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::~CHWCallbackRenderer(CHWCallbackRenderer *this, __int64 a2, __int64 a3)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx
  __int64 v6; // rcx
  CMILPoolResource *v7; // rcx
  __int64 i; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  CMILRefCountBase *v13; // rcx

  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 14);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 13);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (CMILPoolResource *)*((_QWORD *)this + 9);
  if ( v7 )
    CMILPoolResource::Release(v7);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i);
    --*(_DWORD *)(v12 + 16);
    v13 = *(CMILRefCountBase **)(*((_QWORD *)this + 4) + 8 * i);
    if ( v13 )
      CMILRefCountBase::Release(v13);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 160, a2, a3);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 32, v9, v10);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
