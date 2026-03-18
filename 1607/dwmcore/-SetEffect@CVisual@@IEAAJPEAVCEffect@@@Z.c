/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18005053C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x18004F240 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180125E90 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180051050 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180051324 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v3; // esi
  struct CResource *EffectInternal; // rbp
  bool v6; // r14
  int v7; // eax
  char v8; // bl
  struct CEffect *v10; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    v6 = CVisual::GetTransform3DEffectNoRef(this) != 0LL;
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x885u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      v10 = a2;
      if ( a2 == (struct CEffect *)`CVisual::SetEffectInternal'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x8000000u;
      else
        CSparseStorage::SetData((CVisual *)((char *)this + 272), 5u, 8u, &v10);
      v8 = v6;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v8 = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
      if ( v8 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v3;
}
