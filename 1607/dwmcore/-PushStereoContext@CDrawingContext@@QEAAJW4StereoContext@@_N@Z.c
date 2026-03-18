/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180107730
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180073FD0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_ECLayer@@UEAAPEAXI@Z @ 0x1801215E0 (--_ECLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E760 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CStereoContextLayer@@SAJW4StereoContext@@_NPEAPEAV1@@Z @ 0x18012E86C (-Create@CStereoContextLayer@@SAJW4StereoContext@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // r9d
  char v5; // r14
  int v6; // eax
  int v7; // ebx
  CStereoContextLayer *v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  CStereoContextLayer *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = a2;
  LOBYTE(a2) = a3;
  v5 = 0;
  v6 = CStereoContextLayer::Create(v3, a2, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1119u);
    v8 = v14;
    goto LABEL_15;
  }
  v8 = v14;
  v9 = *(_DWORD *)(a1 + 624);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v10 > *(_DWORD *)(a1 + 620) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 600, 8u, 1, &v14);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
LABEL_8:
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x111Eu);
      goto LABEL_15;
    }
    goto LABEL_9;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * *(unsigned int *)(a1 + 624)) = v14;
  *(_DWORD *)(a1 + 624) = v10;
LABEL_9:
  v5 = 1;
  v12 = CStereoContextLayer::ApplyState(v8, (struct CDrawingContext *)a1);
  v7 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1121u);
  else
    v8 = 0LL;
LABEL_15:
  if ( v7 < 0 && v5 )
    --*(_DWORD *)(a1 + 624);
  if ( v8 )
    CLayer::`vector deleting destructor'(v8, 1u);
  return (unsigned int)v7;
}
