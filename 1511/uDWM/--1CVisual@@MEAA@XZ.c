/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180022130
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18000DEA8 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x1800155B8 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x1800160A8 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x18001A254 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CText@@EEAA@XZ @ 0x18001B918 (--1CText@@EEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180020E14 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180023CC0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18002A65C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180036278 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x18003C92C (--1CImage@@EEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x18003D250 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003D86C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180046F68 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180071048 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800795D0 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18007EED0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x18007EF70 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180083D78 (--1CRippleEffect@@MEAA@XZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180087FD8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800887F8 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x180089A08 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18008A238 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008AF78 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18008B548 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008BC7C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x18008C100 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x18008CA00 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800913FC (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180092A18 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009985C (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009BBAC (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x18009CD38 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  volatile signed __int32 *v2; // rdi
  CResource *(__fastcall *v3)(CResource *, char); // rbp
  volatile signed __int32 *v4; // rdi
  CResource *(__fastcall *v5)(CResource *, char); // rsi
  CBaseObject *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  CBaseObject *v9; // rcx
  void (__fastcall *v10)(CVisual *__hidden, unsigned int); // rdi

  *(_QWORD *)this = &CVisual::`vftable';
  if ( *((int *)this + 64) > 0 )
  {
    v7 = 0LL;
    v8 = *((unsigned int *)this + 64);
    do
    {
      v9 = *(CBaseObject **)(v7 + *((_QWORD *)this + 29));
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *(_QWORD *)(v7 + *((_QWORD *)this + 29)) = 0LL;
      }
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 232, 8LL);
    v10 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v10 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4u);
    else
      v10(this, 4u);
  }
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = **(CResource *(__fastcall ***)(CResource *, char))v2;
      if ( v3 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1);
      else
        v3((CResource *)v2, 1);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = **(CResource *(__fastcall ***)(CResource *, char))v4;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1);
      else
        v5((CResource *)v4, 1);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 29) != *((_QWORD *)this + 30) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
