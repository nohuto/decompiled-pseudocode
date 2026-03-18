/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180039240
 * Callers:
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180034390 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x18001AF30 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180035DBC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180059EC0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180059FF0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801048CC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 *     ?RemoveVisualInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@PEAIPEAV2@@Z @ 0x180107354 (-RemoveVisualInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@PEAIPEAV2@@Z.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  CVisualGroup *v2; // rcx
  __int64 i; // rbx
  struct CWeakReferenceBase *v4; // rdx
  struct CResource *v5; // rdx
  CVisual *v6; // rcx
  _QWORD *j; // rbx
  _QWORD *v8; // r14
  void *(__fastcall ***v9)(CVisualTreeData *__hidden, unsigned int); // rbx
  void *(__fastcall *v10)(CVisualTreeData *__hidden, unsigned int); // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  void (__fastcall *v13)(CVisualTreeData *__hidden); // rbx
  __int64 v14; // rdi
  int v15; // eax
  CVisualGroup *v16; // rcx
  int v17; // eax

  *(_QWORD *)this = &CVisual::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 7) = &CWindowNode::`vftable'{for `IExpressionSource'};
  *((_QWORD *)this + 8) = &CWindowNode::`vftable'{for `IGraphNode'};
  CVisual::ReleaseBspPolygonList(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 196); i = (unsigned int)(i + 1) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 95) + 8 * i);
    v15 = CVisualGroup::RemoveVisualInternal(v2, *(struct CVisual ***)(v14 + 48), (unsigned int *)(v14 + 40), this);
    if ( v15 >= 0 )
    {
      v17 = CVisualGroup::RemoveVisualInternal(v16, *(struct CVisual ***)(v14 + 72), (unsigned int *)(v14 + 64), this);
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x89u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x88u);
    }
  }
  CVisual::RemoveAllChildren(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 44));
  *((_QWORD *)this + 44) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 43));
  *((_QWORD *)this + 43) = 0LL;
  v4 = (struct CWeakReferenceBase *)*((_QWORD *)this + 45);
  if ( v4 )
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v4);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 51));
  *((_QWORD *)this + 51) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 46));
  *((_QWORD *)this + 46) = 0LL;
  v5 = (struct CResource *)*((_QWORD *)this + 52);
  if ( v5 )
    v5 = (struct CResource *)((char *)v5 + 8);
  CResource::UnRegisterNotifierInternal(this, v5);
  *((_QWORD *)this + 52) = 0LL;
  for ( j = (_QWORD *)((char *)this + 328);
        (_QWORD *)*j != j;
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v6,
          *(struct CDrawingContext **)(*j - 8LL),
          (struct CMoveRenderPassInfo *)(*j - 88LL)) )
  {
    ;
  }
  v8 = (_QWORD *)((char *)this + 432);
  while ( (_QWORD *)*v8 != v8 )
  {
    v11 = (_QWORD *)(*v8 - 264LL);
    v12 = v11[3];
    v13 = *(void (__fastcall **)(CVisualTreeData *__hidden))(*v11 + 16LL);
    if ( v13 == CVisualTreeData::Clear )
      CVisualTreeData::Clear((CVisualTreeData *)(*v8 - 264LL));
    else
      v13((CVisualTreeData *)(*v8 - 264LL));
    if ( *(_QWORD *)(v12 + 720) )
      (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
    else
      *(_QWORD *)(v12 + 720) = v11;
  }
  v9 = (void *(__fastcall ***)(CVisualTreeData *__hidden, unsigned int))*((_QWORD *)this + 90);
  if ( v9 )
  {
    v10 = **v9;
    if ( v10 == CVisualTreeData::`vector deleting destructor' )
      CVisualTreeData::`vector deleting destructor'(*((CVisualTreeData **)this + 90), 1u);
    else
      v10(*((CVisualTreeData **)this + 90), 1u);
  }
  CVisual::DestroyRenderTargetForRemoteApp(this);
  if ( *((char *)this + 89) < 0 )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1152LL);
  if ( *((_QWORD *)this + 95) != *((_QWORD *)this + 96) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 95));
    *((_QWORD *)this + 95) = 0LL;
  }
  if ( *((_QWORD *)this + 91) != *((_QWORD *)this + 92) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 91));
    *((_QWORD *)this + 91) = 0LL;
  }
  *((_BYTE *)this + 464) &= ~1u;
  *((_QWORD *)this + 56) = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((CVisual *)((char *)this + 448));
  CPtrArrayBase::Clear((CVisual *)((char *)this + 72));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
