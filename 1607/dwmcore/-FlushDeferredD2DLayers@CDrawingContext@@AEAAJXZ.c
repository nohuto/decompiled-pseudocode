/*
 * XREFs of ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180003900
 * Callers:
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180003978 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
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
  if ( *((_DWORD *)this + 172) )
  {
    v5 = (char *)this + 664;
    while ( 1 )
    {
      v7 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v5 + 8 * v3), this);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 172) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18D2u);
  }
  else
  {
LABEL_2:
    v5 = (char *)this + 664;
    *((_DWORD *)this + 172) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 664, 8LL);
  }
  if ( (unsigned int)v2 < *((_DWORD *)this + 172) && (_DWORD)v2 )
  {
    v8 = *((_DWORD *)v5 + 6);
    if ( (unsigned int)v2 > v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
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
