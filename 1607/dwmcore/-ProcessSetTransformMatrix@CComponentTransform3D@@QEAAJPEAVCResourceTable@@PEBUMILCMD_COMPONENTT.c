/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x180023E00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180023584 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetTransformMatrix(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // eax
  unsigned int v7; // ebx
  _OWORD v9[4]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_OWORD *)((char *)a3 + 24);
  v9[0] = *(_OWORD *)((char *)a3 + 8);
  v4 = *(_OWORD *)((char *)a3 + 40);
  v9[1] = v3;
  v5 = *(_OWORD *)((char *)a3 + 56);
  v9[2] = v4;
  v9[3] = v5;
  v6 = CComponentTransform3D::SetTransformMatrix(this, (const struct D2DMatrix *)v9);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6Fu);
  return v7;
}
