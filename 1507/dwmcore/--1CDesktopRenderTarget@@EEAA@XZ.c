/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x1800EB000 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x1800EAFA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  struct CVisualTree *v2; // rdx
  CComposeTop *v3; // rcx
  CDisplaySet *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  v2 = (struct CVisualTree *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 10) = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v2);
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v3 = (CComposeTop *)*((_QWORD *)this + 31);
  if ( v3 )
  {
    CComposeTop::`scalar deleting destructor'(v3, 1u);
    *((_QWORD *)this + 31) = 0LL;
  }
  v4 = (CDisplaySet *)*((_QWORD *)this + 24);
  if ( v4 )
    CDisplaySet::Release(v4);
  v5 = (void *)*((_QWORD *)this + 33);
  if ( v5 )
    CloseHandle(v5);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    *(_BYTE *)(v6 + 32) = 0;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 34));
  *((_QWORD *)this + 34) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  CRenderTarget::~CRenderTarget(this);
}
