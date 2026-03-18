/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800B8AB0 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x18012D784 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18012DC5C (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800B8C20 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     PubSebUnregisterRpc @ 0x1800B9878 (PubSebUnregisterRpc.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_zqq @ 0x18011CC4C (Template_zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18018B078 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  __int64 v2; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v3; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v4; // rcx
  char updated; // al
  int v6; // edx
  int v7; // ecx
  char v8; // al
  int v9; // edx
  int v10; // ecx

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 97);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 758) )
    {
      updated = PubSebiUpdateLevelEventRpc(v3, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_zqq(v7, v6, (unsigned int)L"FSVP", 0, updated);
      *((_BYTE *)this + 758) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 97));
    *((_QWORD *)this + 97) = 0LL;
  }
  v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 96);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 759) )
    {
      v8 = PubSebiUpdateLevelEventRpc(v4, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_zqq(v10, v9, (unsigned int)L"P2PRenderer", 0, v8);
      *((_BYTE *)this + 759) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 664);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 592);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 432);
  CRenderTarget::~CRenderTarget(this);
}
