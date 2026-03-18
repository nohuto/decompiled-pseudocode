/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18018CCF8
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18018CBE4 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800A5C6C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18013846C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18018CF48 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18018CF64 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18018D10C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180199750 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        char a5)
{
  const struct CMILMatrix *TopByReference; // rax
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
  __int64 v20; // rcx
  CBspNode *v21; // rbx
  __int64 v22; // rax
  struct CPolygon *v23; // rsi
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-51h]
  CBspNode *v27; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v28[4]; // [rsp+60h] [rbp-11h] BYREF
  int v29; // [rsp+A0h] [rbp+2Fh]
  struct CPolygon *v30; // [rsp+D0h] [rbp+5Fh] BYREF

  TopByReference = CBaseMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v30 = 0LL;
  v10 = *((_OWORD *)TopByReference + 1);
  v28[0] = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 2);
  v28[1] = v10;
  v12 = *((_OWORD *)TopByReference + 3);
  v29 = *((_DWORD *)TopByReference + 16);
  v28[2] = v11;
  v28[3] = v12;
  v13 = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, (int)v28, *v13, *v14, *v17, *v16, a4, *v15, a5, &v30);
  v19 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v26 = 416;
    goto LABEL_13;
  }
  v21 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  v27 = v21;
  if ( !v21 )
  {
    CWatermarkStack<CBspNode *,64,2,10>::Pop(v20, 0LL);
    v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v21 = (CBspNode *)v22;
    if ( v22 )
    {
      *(_QWORD *)v22 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v22 = &CBspNode::`vftable';
      *(_DWORD *)(v22 + 8) = 0;
      *(_DWORD *)(v22 + 56) = 0;
      *(_QWORD *)(v22 + 32) = v22 + 64;
      *(_QWORD *)(v22 + 40) = v22 + 64;
      *(_DWORD *)(v22 + 48) = 4;
      *(_DWORD *)(v22 + 52) = 4;
      *(_BYTE *)(v22 + 96) = a3;
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    }
    else
    {
      v21 = 0LL;
    }
    v27 = v21;
    if ( !v21 )
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1ABu);
LABEL_14:
      v23 = v30;
      goto LABEL_15;
    }
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v27);
    v19 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v26 = 429;
LABEL_13:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PolygonNoRef, v26);
      goto LABEL_14;
    }
  }
  v23 = v30;
  v24 = CBspNode::PushPolygon(v21, v30, a3);
  v19 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1B0u);
LABEL_15:
  if ( v23 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v23 + 8LL))(v23);
  return v19;
}
