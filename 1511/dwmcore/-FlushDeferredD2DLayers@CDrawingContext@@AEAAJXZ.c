/*
 * XREFs of ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003C9E0
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000E0BC (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180025130 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushDeferredD2DLayers(CDrawingContext *this)
{
  unsigned int v1; // r14d
  __int64 v2; // rbx
  __int64 v3; // rbp
  char *v5; // rsi
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edi

  v1 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 152) )
  {
    v5 = (char *)this + 584;
    while ( 1 )
    {
      v7 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v5 + 8 * v3), this);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 152) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x187Au);
  }
  else
  {
LABEL_2:
    v5 = (char *)this + 584;
    *((_DWORD *)this + 152) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 584, 8LL);
  }
  if ( (unsigned int)v2 < *((_DWORD *)this + 152) && (_DWORD)v2 )
  {
    v8 = *((_DWORD *)v5 + 6);
    if ( (unsigned int)v2 > v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
    }
    else
    {
      v9 = v8 - v2;
      if ( v9 )
        memmove(*(void **)v5, (const void *)(*(_QWORD *)v5 + 8 * v2), 8LL * v9);
      *((_DWORD *)v5 + 6) = v9;
    }
  }
  return v1;
}
