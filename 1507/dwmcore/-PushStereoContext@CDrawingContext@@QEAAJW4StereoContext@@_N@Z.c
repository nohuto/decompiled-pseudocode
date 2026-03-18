/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F42BC
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA5C8 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECLayer@@UEAAPEAXI@Z @ 0x1800F1290 (--_ECLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FAE10 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CStereoContextLayer@@SAJW4StereoContext@@_NPEAPEAV1@@Z @ 0x1800FAF2C (-Create@CStereoContextLayer@@SAJW4StereoContext@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // r9d
  char v5; // r14
  int v6; // eax
  int v7; // ebx
  CLayer *v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  CLayer *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = a2;
  LOBYTE(a2) = a3;
  v5 = 0;
  v6 = CStereoContextLayer::Create(v3, a2, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x114Au);
    v8 = v15;
    goto LABEL_15;
  }
  v8 = v15;
  v9 = *(_DWORD *)(a1 + 544);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x114Fu);
    goto LABEL_15;
  }
  if ( v10 > *(_DWORD *)(a1 + 540) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 520, 8u, 1, &v15);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_13;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL * *(unsigned int *)(a1 + 544)) = v15;
    *(_DWORD *)(a1 + 544) = v10;
  }
  v5 = 1;
  v12 = CStereoContextLayer::ApplyState(v8, (struct CDrawingContext *)a1);
  v7 = v12;
  if ( v12 >= 0 )
    v8 = 0LL;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1152u);
LABEL_15:
  if ( v7 < 0 && v5 )
    --*(_DWORD *)(a1 + 544);
  if ( v8 )
    CLayer::`vector deleting destructor'(v8, 1);
  return (unsigned int)v7;
}
