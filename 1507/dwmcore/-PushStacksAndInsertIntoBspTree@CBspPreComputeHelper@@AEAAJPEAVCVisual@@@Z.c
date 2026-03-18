/*
 * XREFs of ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8
 * Callers:
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x18014CA14 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BF08 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18005BD54 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800E0700 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18014C760 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18014CC60 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksAndInsertIntoBspTree(CBspPreComputeHelper *this, struct CVisual *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  int PolygonAndPushToBspTree; // eax
  int v11; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v12[12]; // [rsp+34h] [rbp-15h] BYREF
  _BYTE v13[64]; // [rsp+40h] [rbp-9h] BYREF

  v4 = 0;
  if ( a2 == *(struct CVisual **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this) )
  {
    CBaseMatrixStack::Push((CBaseMatrixStack *)(v5 + 64), (const struct CMILMatrix *)&IdentityMatrix, 0);
    v11 = -1;
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 24, &v11);
    v11 = -1;
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 32, &v11);
    v11 = -1;
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v11);
    v11 = 5;
    CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v11);
    v11 = LODWORD(FLOAT_1_0);
    CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 56, &v11);
    v12[0] = 0;
LABEL_18:
    CWatermarkStack<bool,64,2,10>::Push((const void **)this + 32, v12);
    goto LABEL_19;
  }
  CVisual::CalcEffectiveTransform((__int64)a2, 4, 0LL, v12, (struct D2DMatrix *)v13, 0LL);
  CBaseMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v13, 1);
  if ( *((_DWORD *)a2 + 54) != -1 )
  {
    v11 = *((_DWORD *)a2 + 54);
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 24, &v11);
  }
  if ( (int)(*((_DWORD *)a2 + 23) << 13) >> 28 != -1 )
  {
    v11 = (int)(*((_DWORD *)a2 + 23) << 13) >> 28;
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 32, &v11);
  }
  if ( *((_DWORD *)a2 + 51) != -1 )
  {
    v11 = *((_DWORD *)a2 + 51);
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v11);
  }
  if ( *((_DWORD *)a2 + 52) != 5 )
  {
    v11 = *((_DWORD *)a2 + 52);
    CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v11);
  }
  v6 = *((float *)a2 + 100);
  v7 = FLOAT_1_0;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - 1.0)) & _xmm);
  if ( v8 >= 0.0000011920929 )
  {
    if ( v6 <= 1.0 )
    {
      v7 = 0.0;
      if ( v6 >= 0.0 )
        v7 = *((float *)a2 + 100);
    }
    v11 = LODWORD(v7);
    CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 56, &v11);
  }
  if ( (*((_BYTE *)a2 + 90) & 4) != 0 )
  {
    v12[0] = 1;
    goto LABEL_18;
  }
LABEL_19:
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 176LL))(a2) )
  {
    PolygonAndPushToBspTree = CBspPreComputeHelper::CreatePolygonAndPushToBspTree(this, a2);
    v4 = PolygonAndPushToBspTree;
    if ( PolygonAndPushToBspTree < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PolygonAndPushToBspTree, 0xA0u);
  }
  return v4;
}
