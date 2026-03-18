/*
 * XREFs of ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18007C618
 * Callers:
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18007943C (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x18004868C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180079DA4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180109168 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetDxImage(CWindowNode *this, struct CFlipChain *a2)
{
  struct CResource **v2; // rsi
  CFlipChain *v4; // rcx
  unsigned int v5; // ebx
  struct CResource *v8; // rax
  struct CResource *v9; // rdx
  int v10; // eax

  v2 = (struct CResource **)((char *)this + 1176);
  v4 = (CFlipChain *)*((_QWORD *)this + 147);
  v5 = 0;
  if ( a2 != v4 )
  {
    if ( v4 && CFlipChain::DisplayBufferReady(v4) )
    {
      CResource::UnRegisterNotifier<CFlipChain>(this, (struct CResource **)this + 148);
      v8 = *v2;
      *v2 = 0LL;
      *((_QWORD *)this + 148) = v8;
    }
    else
    {
      CResource::UnRegisterNotifier<CFlipChain>(this, v2);
    }
    if ( a2 )
      v9 = (struct CFlipChain *)((char *)a2 + 16);
    else
      v9 = 0LL;
    v10 = CResource::RegisterNotifier(this, v9);
    v5 = v10;
    if ( v10 >= 0 )
    {
      *v2 = a2;
      *((_BYTE *)this + 1272) = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
      CWindowNode::CleanUpPendingUpdates(this, 0);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x840u);
    }
  }
  return v5;
}
