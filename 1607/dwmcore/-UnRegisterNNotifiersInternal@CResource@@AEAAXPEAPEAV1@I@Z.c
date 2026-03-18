/*
 * XREFs of ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008DCA4
 * Callers:
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180021B60 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180021C50 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180022C78 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x180023030 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x18009D6B0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800B6660 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180151690 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x180151AF0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180151B50 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned int a3)
{
  __int64 v4; // rdi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      CResource::UnRegisterNotifierInternal(this, *a2);
      *a2++ = 0LL;
      --v4;
    }
    while ( v4 );
  }
}
