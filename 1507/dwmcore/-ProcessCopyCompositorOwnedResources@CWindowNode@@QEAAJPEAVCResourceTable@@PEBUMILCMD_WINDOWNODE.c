/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18006F900 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18007C618 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18007C664 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801067A4 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x1801219E0 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180121A94 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  struct CResourceTable *v8; // rdx
  __int64 v9; // rdi
  void **v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // eax
  const void *v13; // r9
  int v14; // eax
  __int64 v15; // rbp
  struct CFlipChain *v16; // rdx
  struct CFlipChain *v17; // rdx
  struct CCompositionSurfaceBitmap *v18; // rdx
  __int64 v19; // rbp
  char v20; // al
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-28h]
  int v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+34h] [rbp-14h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    return v4;
  Resource = CResourceTable::GetResource((__int64)a2, v5, 32LL);
  v9 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v23 = 2422;
LABEL_23:
    v22 = v4;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
    return v4;
  }
  *((_BYTE *)this + 1273) = 1;
  v10 = *(void ***)(Resource + 1080);
  if ( !v10 )
    goto LABEL_6;
  v11 = *((_QWORD *)this + 135);
  if ( !v11 )
  {
    v4 = -2147418113;
    v23 = 2438;
    goto LABEL_23;
  }
  v24 = 247;
  v25 = 0LL;
  v12 = *(_DWORD *)(v11 + 96);
  v13 = *(const void **)(v11 + 104);
  HIDWORD(v25) = v12;
  v14 = CRgnGeometry::ProcessUpdate(v10, v8, (const struct MILCMD_RGNGEOMETRY *)&v24, v13, v12);
  v4 = v14;
  if ( v14 < 0 )
  {
    v23 = 2449;
LABEL_43:
    v22 = v14;
    goto LABEL_44;
  }
LABEL_6:
  if ( !*(_QWORD *)(v9 + 1248) )
    goto LABEL_7;
  if ( !*((_QWORD *)this + 156) )
  {
    v14 = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 156);
    v4 = v14;
    if ( v14 < 0 )
    {
      v23 = 2462;
      goto LABEL_43;
    }
  }
  v14 = CDxAccumulationContext::CopyDxClipShape(
          *((CDxAccumulationContext **)this + 156),
          *(struct CDxAccumulationContext **)(v9 + 1248));
  v4 = v14;
  if ( v14 < 0 )
  {
    v23 = 2468;
    goto LABEL_43;
  }
LABEL_7:
  v14 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(v9 + 1040));
  v4 = v14;
  if ( v14 < 0 )
  {
    v23 = 2476;
    goto LABEL_43;
  }
  v15 = 0LL;
  if ( *(_DWORD *)(v9 + 1072) )
  {
    while ( 1 )
    {
      v14 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 1048) + 8 * v15));
      v4 = v14;
      if ( v14 < 0 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(v9 + 1072) )
        goto LABEL_9;
    }
    v23 = 2480;
    goto LABEL_43;
  }
LABEL_9:
  v16 = *(struct CFlipChain **)(v9 + 1184);
  if ( v16 )
  {
    v14 = CWindowNode::SetDxImage(this, v16);
    v4 = v14;
    if ( v14 < 0 )
    {
      v23 = 2485;
      goto LABEL_43;
    }
  }
  v17 = *(struct CFlipChain **)(v9 + 1176);
  if ( v17 )
  {
    v14 = CWindowNode::SetDxImage(this, v17);
    v4 = v14;
    if ( v14 < 0 )
    {
      v23 = 2490;
      goto LABEL_43;
    }
  }
  v18 = *(struct CCompositionSurfaceBitmap **)(v9 + 1200);
  if ( v18 )
  {
    v14 = CWindowNode::SetFlipExBitmap(this, v18);
    v4 = v14;
    if ( v14 < 0 )
    {
      v23 = 2495;
      goto LABEL_43;
    }
  }
  v19 = 0LL;
  if ( *(_DWORD *)(v9 + 1232) )
  {
    while ( 1 )
    {
      v14 = CWindowNode::SetFlipExBitmap(this, *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 1208) + 8 * v19));
      v4 = v14;
      if ( v14 < 0 )
        break;
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= *(_DWORD *)(v9 + 1232) )
        goto LABEL_13;
    }
    v23 = 2500;
    goto LABEL_43;
  }
LABEL_13:
  v14 = CVisual::SetEffect((struct CResource **)this, *(struct CEffect **)(v9 + 408));
  v4 = v14;
  if ( v14 < 0 )
  {
    v23 = 2503;
    goto LABEL_43;
  }
  *((_BYTE *)this + 1256) = *(_BYTE *)(v9 + 1256);
  v20 = *(_BYTE *)(v9 + 1247);
  *((_BYTE *)this + 1247) = v20;
  if ( v20 )
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v4;
}
