/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004D2FC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180062E54 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180062EA0 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180064B20 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180124324 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x180137328 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x1801373DC (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
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
  char v17; // al
  __int64 v19; // r9
  unsigned int v20; // eax
  const void *v21; // r9
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-28h]
  int v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+34h] [rbp-14h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    return v4;
  Resource = CResourceTable::GetResource(a2, v5, 33LL);
  v9 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v23 = 2423;
LABEL_24:
    v22 = v4;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
    return v4;
  }
  *((_BYTE *)this + 1225) = 1;
  v10 = *(CRgnGeometry **)(Resource + 1032);
  if ( !v10 )
    goto LABEL_4;
  v19 = *((_QWORD *)this + 129);
  if ( !v19 )
  {
    v4 = -2147418113;
    v23 = 2439;
    goto LABEL_24;
  }
  v24 = 254;
  v25 = 0LL;
  v20 = *(_DWORD *)(v19 + 112);
  v21 = *(const void **)(v19 + 120);
  HIDWORD(v25) = v20;
  v11 = CRgnGeometry::ProcessUpdate(v10, v8, (const struct MILCMD_RGNGEOMETRY *)&v24, v21, v20);
  v4 = v11;
  if ( v11 < 0 )
  {
    v23 = 2450;
LABEL_43:
    v22 = v11;
    goto LABEL_44;
  }
LABEL_4:
  if ( !*(_QWORD *)(v9 + 1200) )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 150) )
  {
    v11 = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 150);
    v4 = v11;
    if ( v11 < 0 )
    {
      v23 = 2463;
      goto LABEL_43;
    }
  }
  v11 = CDxAccumulationContext::CopyDxClipShape(
          *((CDxAccumulationContext **)this + 150),
          *(struct CDxAccumulationContext **)(v9 + 1200));
  v4 = v11;
  if ( v11 < 0 )
  {
    v23 = 2469;
    goto LABEL_43;
  }
LABEL_5:
  v11 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(v9 + 992));
  v4 = v11;
  if ( v11 < 0 )
  {
    v23 = 2477;
    goto LABEL_43;
  }
  v12 = 0LL;
  if ( *(_DWORD *)(v9 + 1024) )
  {
    while ( 1 )
    {
      v11 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 1000) + 8 * v12));
      v4 = v11;
      if ( v11 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 1024) )
        goto LABEL_7;
    }
    v23 = 2481;
    goto LABEL_43;
  }
LABEL_7:
  v13 = *(struct CFlipChain **)(v9 + 1136);
  if ( v13 )
  {
    v11 = CWindowNode::SetDxImage(this, v13);
    v4 = v11;
    if ( v11 < 0 )
    {
      v23 = 2486;
      goto LABEL_43;
    }
  }
  v14 = *(struct CFlipChain **)(v9 + 1128);
  if ( v14 )
  {
    v11 = CWindowNode::SetDxImage(this, v14);
    v4 = v11;
    if ( v11 < 0 )
    {
      v23 = 2491;
      goto LABEL_43;
    }
  }
  v15 = *(struct CCompositionSurfaceBitmap **)(v9 + 1152);
  if ( v15 )
  {
    v11 = CWindowNode::SetFlipExBitmap(this, v15);
    v4 = v11;
    if ( v11 < 0 )
    {
      v23 = 2496;
      goto LABEL_43;
    }
  }
  v16 = 0LL;
  if ( *(_DWORD *)(v9 + 1184) )
  {
    while ( 1 )
    {
      v11 = CWindowNode::SetFlipExBitmap(this, *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 1160) + 8 * v16));
      v4 = v11;
      if ( v11 < 0 )
        break;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(v9 + 1184) )
        goto LABEL_11;
    }
    v23 = 2501;
    goto LABEL_43;
  }
LABEL_11:
  v11 = CVisual::SetEffect((struct CResource **)this, *(struct CEffect **)(v9 + 392));
  v4 = v11;
  if ( v11 < 0 )
  {
    v23 = 2504;
    goto LABEL_43;
  }
  *((_BYTE *)this + 1208) = *(_BYTE *)(v9 + 1208);
  v17 = *(_BYTE *)(v9 + 1199);
  *((_BYTE *)this + 1199) = v17;
  if ( v17 )
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v4;
}
