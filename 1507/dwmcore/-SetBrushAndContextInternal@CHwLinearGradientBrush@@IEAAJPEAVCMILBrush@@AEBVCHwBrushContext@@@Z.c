/*
 * XREFs of ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142EFC
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142E70 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x180056EE0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x1801434F8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@P.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContextInternal(
        CHwLinearGradientBrush *this,
        struct CMILBrush *a2,
        const struct CBaseMatrix **a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  char v6; // bp
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rax

  if ( a2 )
    v4 = (_DWORD *)((char *)a2 - 24);
  else
    v4 = 0LL;
  v5 = *((_DWORD *)this + 4);
  v6 = 0;
  v7 = v4[32];
  if ( v5 )
  {
    if ( *((_DWORD *)this + 22) != v7 )
    {
      v8 = *((_QWORD *)this + 12);
      *((_DWORD *)this + 22) = v7;
      *(_BYTE *)(v8 + 224) = 1;
    }
  }
  else
  {
    v9 = *((_QWORD *)this + 12);
    v6 = 1;
    *((_DWORD *)this + 22) = v7;
    *(_BYTE *)(v9 + 224) = 1;
  }
  v10 = CHwLinearGradientColorSource::SetBrushAndContext(
          *((CHwLinearGradientColorSource **)this + 12),
          (struct CMILBrushGradient *)v4,
          a3[1],
          *a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v6 )
    {
      v12 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v12 + 416) != -1 )
        CMILResourceCache::SetResource((CMILResourceCache *)(v4 + 14), *(_DWORD *)(v12 + 416), this);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x141u);
  }
  return v11;
}
