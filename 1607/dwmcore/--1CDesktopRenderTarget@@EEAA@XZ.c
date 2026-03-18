/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18011CD64
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x18011CEF0 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B6578 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x18011CEA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  struct CVisualTree *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  CComposeTop *v5; // rcx
  CDisplaySet *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  COcclusionContext *v12; // rcx

  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  v2 = (struct CVisualTree *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 19) = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v2);
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v5 = (CComposeTop *)*((_QWORD *)this + 52);
  if ( v5 )
  {
    CComposeTop::`scalar deleting destructor'(v5, 1u);
    *((_QWORD *)this + 52) = 0LL;
  }
  v6 = (CDisplaySet *)*((_QWORD *)this + 45);
  if ( v6 )
    CDisplaySet::Release(v6, v3, v4);
  v7 = (void *)*((_QWORD *)this + 54);
  if ( v7 )
    CloseHandle(v7);
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
    *(_BYTE *)(v8 + 32) = 0;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 55));
  *((_QWORD *)this + 55) = 0LL;
  v11 = *((_QWORD *)this + 56);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 56) = 0LL;
  }
  v12 = (COcclusionContext *)*((_QWORD *)this + 57);
  if ( v12 )
  {
    COcclusionContext::`scalar deleting destructor'(v12, v9, v10);
    *((_QWORD *)this + 57) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 304);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 256);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 208);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 160);
  CRenderTarget::~CRenderTarget(this);
}
