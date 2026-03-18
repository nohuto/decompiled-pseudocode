/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x18007B9D0 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180114244 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180114734 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18001CAB4 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     PubSebUnregisterRpc @ 0x180069E10 (PubSebUnregisterRpc.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18007BED8 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18007E150 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     Template_zqq @ 0x18010679C (Template_zqq.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  CMILRefCountBase *v2; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v3; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v4; // rcx
  char updated; // al
  int v6; // edx
  int v7; // ecx
  char v8; // al
  int v9; // edx
  int v10; // ecx

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 73);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 565) )
    {
      updated = PubSebiUpdateLevelEventRpc(v3, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_zqq(v7, v6, (unsigned int)L"FSVP", 0, updated);
      *((_BYTE *)this + 565) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 73));
    *((_QWORD *)this + 73) = 0LL;
  }
  v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 72);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 566) )
    {
      v8 = PubSebiUpdateLevelEventRpc(v4, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_zqq(v10, v9, (unsigned int)L"P2PRenderer", 0, v8);
      *((_BYTE *)this + 566) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 72));
    *((_QWORD *)this + 72) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 59);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 50);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  CRenderTarget::~CRenderTarget(this);
}
