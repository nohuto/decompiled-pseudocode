/*
 * XREFs of ?ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@@Z @ 0x180023CE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180023A58 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetCenterPoint(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetCenter(this, *((float *)a3 + 2), *((float *)a3 + 3), *((float *)a3 + 4));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x15u);
  return v4;
}
