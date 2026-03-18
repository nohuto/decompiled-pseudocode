/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18015AC0C
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18015AAC8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18012044C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18015AE74 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18015AE90 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18015B000 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016681C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        char a5)
{
  const struct CBaseMatrix *TopByReference; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  float *v13; // rax
  int *v14; // r9
  char *v15; // r8
  int *v16; // r11
  int *v17; // r10
  int PolygonNoRef; // eax
  unsigned int v19; // edi
  struct CPolygon *v20; // rsi
  __int64 v21; // rcx
  CBspNode *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-61h]
  struct CPolygon *v27; // [rsp+50h] [rbp-31h] BYREF
  CBspNode *v28; // [rsp+58h] [rbp-29h] BYREF
  _OWORD v29[4]; // [rsp+60h] [rbp-21h] BYREF

  TopByReference = CBaseMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v27 = 0LL;
  v10 = *((_OWORD *)TopByReference + 1);
  v29[0] = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 2);
  v29[1] = v10;
  v12 = *((_OWORD *)TopByReference + 3);
  v29[2] = v11;
  v29[3] = v12;
  v13 = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef((__int64)a2, (int)v29, *v13, *v14, *v17, *v16, a4, *v15, a5, &v27);
  v19 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v26 = 393;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PolygonNoRef, v26);
LABEL_4:
    v20 = v27;
    goto LABEL_15;
  }
  v22 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  v28 = v22;
  if ( !v22 )
  {
    CWatermarkStack<CBspNode *,64,2,10>::Pop(v21, 0LL);
    v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v22 = (CBspNode *)v23;
    if ( v23 )
    {
      *(_QWORD *)v23 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v23 = &CBspNode::`vftable';
      *(_DWORD *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 56) = 0;
      *(_QWORD *)(v23 + 32) = v23 + 64;
      *(_QWORD *)(v23 + 40) = v23 + 64;
      *(_DWORD *)(v23 + 48) = 4;
      *(_DWORD *)(v23 + 52) = 4;
      *(_BYTE *)(v23 + 96) = a3;
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    }
    else
    {
      v22 = 0LL;
    }
    v28 = v22;
    if ( !v22 )
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x194u);
      goto LABEL_4;
    }
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v28);
    v19 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v26 = 406;
      goto LABEL_3;
    }
  }
  v20 = v27;
  v24 = CBspNode::PushPolygon(v22, v27, a3);
  v19 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x199u);
LABEL_15:
  if ( v20 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v20 + 8LL))(v20);
  return v19;
}
