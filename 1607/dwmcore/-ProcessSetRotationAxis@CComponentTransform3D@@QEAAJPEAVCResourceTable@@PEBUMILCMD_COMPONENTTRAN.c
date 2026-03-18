/*
 * XREFs of ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180023D90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x1800239E4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetRotationAxis(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetRotationAxis(this, *((float *)a3 + 2), *((float *)a3 + 3), *((float *)a3 + 4));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x51u);
  return v4;
}
