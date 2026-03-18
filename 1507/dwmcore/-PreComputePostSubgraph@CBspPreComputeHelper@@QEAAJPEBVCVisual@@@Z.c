/*
 * XREFs of ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z @ 0x18014C8EC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18014C760 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18014C7A8 (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePostSubgraph(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  unsigned int v3; // esi
  const struct CVisual *v5; // rcx
  struct CBspNode **TopByReference; // rax
  int v7; // eax
  void **v9; // [rsp+38h] [rbp-69h] BYREF
  int v10; // [rsp+44h] [rbp-5Dh]
  __int128 v11; // [rsp+48h] [rbp-59h]
  __int64 v12; // [rsp+5Ch] [rbp-45h]
  __int64 v13; // [rsp+64h] [rbp-3Dh]
  __int64 v14; // [rsp+70h] [rbp-31h]
  int v15; // [rsp+78h] [rbp-29h]
  const struct CVisual *v16; // [rsp+90h] [rbp-11h]

  v3 = 0;
  v5 = *(const struct CVisual **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
  if ( a2 != v5 )
    goto LABEL_5;
  v16 = v5;
  v9 = &CBspPolygonListBuilder::`vftable';
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v12 = 1LL;
  v10 = 0;
  TopByReference = (struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this + 32);
  v7 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v9, *TopByReference);
  v3 = v7;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v14);
LABEL_5:
    CBspPreComputeHelper::PopStacks(this, a2);
    return v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE9u);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v14);
  return v3;
}
