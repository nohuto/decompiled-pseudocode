/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x180067FC8
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x180068100 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180068D34 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180069FFC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(void **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  _DWORD *v10; // rcx
  char v11; // al
  CBaseObject *v12; // rcx

  *this = &CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this);
  v2 = (CBaseObject *)this[59];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)this[60];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)this[57];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)this[58];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)this[61];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)this[62];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)this[63];
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)this[64];
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = this[56];
  if ( v10 )
  {
    v11 = CDesktopManager::s_fTimelineDirty;
    if ( !--v10[2] )
      v11 = 1;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  v12 = (CBaseObject *)this[67];
  if ( v12 )
    CBaseObject::Release(v12);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 52);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 48);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 44);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 36);
  CVisual::~CVisual((CVisual *)this);
}
