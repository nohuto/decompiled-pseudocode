/*
 * XREFs of ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180026874 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800666F0 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180066B30 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180068638 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1800688CC (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B2A38 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1800F3274 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1800F33BC (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18012FC2C (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::RegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  struct CResource **i; // rsi
  int v9; // eax

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = a2; ; ++i )
    {
      v9 = CResource::RegisterNotifier(this, *i);
      v3 = v9;
      if ( v9 < 0 )
        break;
      if ( ++v4 >= a3 )
        return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x99u);
    CResource::UnRegisterNNotifiersInternal(this, a2, v4);
  }
  return v3;
}
