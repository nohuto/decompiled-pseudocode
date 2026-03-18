/*
 * XREFs of ?ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@@Z @ 0x1800208D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x1800205F0 (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetScale(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETSCALE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetScale(
         this,
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)),
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 3)));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x69u);
  return v4;
}
