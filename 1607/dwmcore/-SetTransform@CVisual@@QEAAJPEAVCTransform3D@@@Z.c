/*
 * XREFs of ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180050728
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x18004EFC0 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180126020 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( a2 != this[36] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8E5u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[36]);
      this[36] = a2;
      CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v2;
}
