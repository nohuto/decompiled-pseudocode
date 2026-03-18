/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180143960
 * Callers:
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x18010D9D4 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_S.c)
 *     ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801436E0 (-GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180143860 (-GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x1801439D0 (-GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  int v1; // r9d
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v1 = *((_DWORD *)this + 32);
  if ( (v1 & 4) != 0 )
  {
    v3 = *((_DWORD *)this + 46);
    v4 = *((_DWORD *)this + 42) / 0xCu;
    *((_DWORD *)this + 33) = v4;
    v5 = *((_DWORD *)this + 50) >> 2;
    if ( v4 < v5 )
      v5 = v4;
    v6 = v3 >> 4;
    if ( v5 < v6 )
      v6 = v5;
    *((_DWORD *)this + 32) = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 33) = v6;
  }
  return *((unsigned int *)this + 33);
}
