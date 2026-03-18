/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8
 * Callers:
 *     ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8 (-PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18000BED0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@W43MilBackfaceVisibility@@_NPEAPEAVCPolygon@@@Z @ 0x180103CB4 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18014C760 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(CBspPreComputeHelper *this, struct CVisual *a2)
{
  const struct CBaseMatrix *TopByReference; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  int *v9; // rdi
  int *v10; // rax
  int *v11; // r9
  float *v12; // r10
  char *v13; // r8
  int *v14; // r11
  int PolygonNoRef; // eax
  struct CPolygon *v16; // rsi
  unsigned int v17; // edi
  CBspNode **v18; // rax
  int v19; // eax
  struct CPolygon *v21; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v22[4]; // [rsp+60h] [rbp-58h] BYREF

  TopByReference = CBaseMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 64));
  v21 = 0LL;
  v5 = *((_OWORD *)TopByReference + 1);
  v22[0] = *(_OWORD *)TopByReference;
  v6 = *((_OWORD *)TopByReference + 2);
  v22[1] = v5;
  v7 = *((_OWORD *)TopByReference + 3);
  v22[2] = v6;
  v22[3] = v7;
  v8 = *((_DWORD *)this + 32);
  v9 = 0LL;
  if ( v8 )
    v9 = (int *)(*((_QWORD *)this + 18) + 4LL * (unsigned int)(v8 - 1));
  v10 = (int *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 96);
  PolygonNoRef = CVisual::GetPolygonNoRef((__int64 *)a2, (int)v22, *v12, *v11, *v14, *v9, *v10, *v13, &v21);
  v16 = v21;
  v17 = PolygonNoRef;
  if ( PolygonNoRef >= 0 )
  {
    v18 = (CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)this + 32);
    v19 = CBspNode::PushPolygon(*v18, v16);
    v17 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x10Au);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PolygonNoRef, 0x106u);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v16 + 8LL))(v16);
  return v17;
}
