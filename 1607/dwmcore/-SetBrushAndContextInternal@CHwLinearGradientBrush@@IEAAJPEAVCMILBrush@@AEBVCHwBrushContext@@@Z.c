/*
 * XREFs of ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018848
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018AE0 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1800186D8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x1800833F0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContextInternal(
        CHwLinearGradientBrush *this,
        struct CMILBrush *a2,
        const struct CMILMatrix **a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  char v6; // bp
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 v13; // rax

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
      v13 = *((_QWORD *)this + 12);
      *((_DWORD *)this + 22) = v7;
      *(_BYTE *)(v13 + 224) = 1;
    }
  }
  else
  {
    v8 = *((_QWORD *)this + 12);
    v6 = 1;
    *((_DWORD *)this + 22) = v7;
    *(_BYTE *)(v8 + 224) = 1;
  }
  v9 = CHwLinearGradientColorSource::SetBrushAndContext(
         *((CHwLinearGradientColorSource **)this + 12),
         (struct CMILBrushGradient *)v4,
         a3[1],
         *a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x141u);
  }
  else if ( v6 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)this + 5) + 432LL);
    if ( v11 != -1 )
      CMILResourceCache::SetResource((CMILResourceCache *)(v4 + 14), v11, this);
  }
  return v10;
}
