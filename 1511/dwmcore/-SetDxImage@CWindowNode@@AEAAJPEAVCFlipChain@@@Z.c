/*
 * XREFs of ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180062E54
 * Callers:
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18005E254 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x18005F010 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x180085C1C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AE0F4 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetDxImage(CWindowNode *this, struct CFlipChain *a2)
{
  __int64 *v2; // rsi
  CFlipChain *v4; // rcx
  unsigned int v5; // ebx
  __int64 v8; // rax
  struct CResource *v9; // rdx
  int v10; // eax

  v2 = (__int64 *)((char *)this + 1128);
  v4 = (CFlipChain *)*((_QWORD *)this + 141);
  v5 = 0;
  if ( a2 != v4 )
  {
    if ( v4 && CFlipChain::DisplayBufferReady(v4) )
    {
      CResource::UnRegisterNotifier<CFlipChain>(this, (char *)this + 1136);
      v8 = *v2;
      *v2 = 0LL;
      *((_QWORD *)this + 142) = v8;
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
      *v2 = (__int64)a2;
      *((_BYTE *)this + 1224) = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
      CWindowNode::CleanUpPendingUpdates(this, 0);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x841u);
    }
  }
  return v5;
}
