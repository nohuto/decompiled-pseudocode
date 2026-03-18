/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180029194 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800291D4 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002FC98 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18005053C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180140BF0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18015D360 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18015D418 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  struct CResourceTable *v8; // rdx
  __int64 v9; // rdi
  CRgnGeometry *v10; // rcx
  int v11; // eax
  __int64 v12; // rbp
  struct CFlipChain *v13; // rdx
  struct CFlipChain *v14; // rdx
  struct CCompositionSurfaceBitmap *v15; // rdx
  __int64 v16; // rbp
  struct CEffect *EffectInternal; // rax
  char v18; // al
  __int64 v20; // r9
  unsigned int v21; // eax
  const void *v22; // r9
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-28h]
  int v25; // [rsp+30h] [rbp-18h] BYREF
  __int64 v26; // [rsp+34h] [rbp-14h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    return v4;
  Resource = CResourceTable::GetResource(a2, v5, 34LL);
  v9 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v24 = 2423;
LABEL_24:
    v23 = v4;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
    return v4;
  }
  *((_BYTE *)this + 1033) = 1;
  v10 = *(CRgnGeometry **)(Resource + 840);
  if ( !v10 )
    goto LABEL_4;
  v20 = *((_QWORD *)this + 105);
  if ( !v20 )
  {
    v4 = -2147418113;
    v24 = 2439;
    goto LABEL_24;
  }
  v25 = 347;
  v26 = 0LL;
  v21 = *(_DWORD *)(v20 + 176);
  v22 = *(const void **)(v20 + 184);
  HIDWORD(v26) = v21;
  v11 = CRgnGeometry::ProcessUpdate(v10, v8, (const struct MILCMD_RGNGEOMETRY *)&v25, v22, v21);
  v4 = v11;
  if ( v11 < 0 )
  {
    v24 = 2450;
    goto LABEL_43;
  }
LABEL_4:
  if ( *(_QWORD *)(v9 + 1008) )
  {
    if ( *((_QWORD *)this + 126)
      || (v11 = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 126), v4 = v11, v11 >= 0) )
    {
      v11 = CDxAccumulationContext::CopyDxClipShape(
              *((CDxAccumulationContext **)this + 126),
              *(struct CDxAccumulationContext **)(v9 + 1008));
      v4 = v11;
      if ( v11 >= 0 )
        goto LABEL_5;
      v24 = 2469;
    }
    else
    {
      v24 = 2463;
    }
LABEL_43:
    v23 = v11;
    goto LABEL_44;
  }
LABEL_5:
  v11 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(v9 + 800));
  v4 = v11;
  if ( v11 < 0 )
  {
    v24 = 2477;
    goto LABEL_43;
  }
  v12 = 0LL;
  if ( *(_DWORD *)(v9 + 832) )
  {
    while ( 1 )
    {
      v11 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 808) + 8 * v12));
      v4 = v11;
      if ( v11 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 832) )
        goto LABEL_7;
    }
    v24 = 2481;
    goto LABEL_43;
  }
LABEL_7:
  v13 = *(struct CFlipChain **)(v9 + 944);
  if ( v13 )
  {
    v11 = CWindowNode::SetDxImage(this, v13);
    v4 = v11;
    if ( v11 < 0 )
    {
      v24 = 2486;
      goto LABEL_43;
    }
  }
  v14 = *(struct CFlipChain **)(v9 + 936);
  if ( v14 )
  {
    v11 = CWindowNode::SetDxImage(this, v14);
    v4 = v11;
    if ( v11 < 0 )
    {
      v24 = 2491;
      goto LABEL_43;
    }
  }
  v15 = *(struct CCompositionSurfaceBitmap **)(v9 + 960);
  if ( v15 )
  {
    v11 = CWindowNode::SetFlipExBitmap(this, v15);
    v4 = v11;
    if ( v11 < 0 )
    {
      v24 = 2496;
      goto LABEL_43;
    }
  }
  v16 = 0LL;
  if ( *(_DWORD *)(v9 + 992) )
  {
    while ( 1 )
    {
      v11 = CWindowNode::SetFlipExBitmap(this, *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 968) + 8 * v16));
      v4 = v11;
      if ( v11 < 0 )
        break;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(v9 + 992) )
        goto LABEL_11;
    }
    v24 = 2501;
    goto LABEL_43;
  }
LABEL_11:
  EffectInternal = CVisual::GetEffectInternal((CVisual *)v9);
  v11 = CVisual::SetEffect(this, EffectInternal);
  v4 = v11;
  if ( v11 < 0 )
  {
    v24 = 2504;
    goto LABEL_43;
  }
  *((_BYTE *)this + 1016) = *(_BYTE *)(v9 + 1016);
  v18 = *(_BYTE *)(v9 + 1007);
  *((_BYTE *)this + 1007) = v18;
  if ( v18 )
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v4;
}
