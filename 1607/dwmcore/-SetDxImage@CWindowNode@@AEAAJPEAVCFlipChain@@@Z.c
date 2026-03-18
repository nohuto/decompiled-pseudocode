/*
 * XREFs of ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180029194
 * Callers:
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x180025DD8 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AA424 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetDxImage(CWindowNode *this, struct CFlipChain *a2)
{
  unsigned int v3; // edi
  struct CFlipChain *v4; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct CResource *v9; // rdx
  struct CResource *v10; // rdx
  struct CResource *v11; // rdx
  int v12; // eax

  v3 = 0;
  v4 = (struct CFlipChain *)*((_QWORD *)this + 117);
  if ( a2 == v4 )
    return v3;
  if ( !v4 )
    goto LABEL_11;
  if ( CFlipChain::DisplayBufferReady(v4) )
  {
    v8 = *((_QWORD *)this + 118);
    if ( v8 )
      v9 = (struct CResource *)(v8 + 16);
    else
      v9 = 0LL;
    CResource::UnRegisterNotifierInternal(this, v9);
    *((_QWORD *)this + 118) = 0LL;
    *((_QWORD *)this + 118) = *((_QWORD *)this + 117);
    goto LABEL_13;
  }
  if ( v7 )
    v10 = (struct CResource *)(v7 + 16);
  else
LABEL_11:
    v10 = 0LL;
  CResource::UnRegisterNotifierInternal(this, v10);
LABEL_13:
  *((_QWORD *)this + 117) = 0LL;
  if ( a2 )
    v11 = (struct CFlipChain *)((char *)a2 + 16);
  else
    v11 = 0LL;
  v12 = CResource::RegisterNotifier(this, v11);
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x841u);
  }
  else
  {
    *((_QWORD *)this + 117) = a2;
    *((_BYTE *)this + 1032) = 1;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CWindowNode::CleanUpPendingUpdates(this, 0);
  }
  return v3;
}
