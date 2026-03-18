/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004D2FC
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x180047F64 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x18010F990 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180048E08 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180048F10 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(struct CResource **this, struct CEffect *a2)
{
  unsigned int v4; // esi
  bool v5; // bp
  int v6; // eax
  char v7; // bl

  v4 = 0;
  if ( a2 != this[49] )
  {
    v5 = CVisual::GetTransform3DEffectNoRef((CVisual *)this) != 0LL;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x787u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[49]);
      this[49] = a2;
      v7 = v5;
      if ( CVisual::GetTransform3DEffectNoRef((CVisual *)this) )
        v7 = 1;
      CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
      if ( v7 )
        CVisual::OnInnerTransformChanged((CVisual *)this);
    }
  }
  return v4;
}
