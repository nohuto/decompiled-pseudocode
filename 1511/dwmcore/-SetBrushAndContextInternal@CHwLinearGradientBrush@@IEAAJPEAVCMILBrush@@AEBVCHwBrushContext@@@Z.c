/*
 * XREFs of ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012C44
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012F00 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x180013024 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@P.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18008A880 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
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
    v11 = *((_QWORD *)this + 5);
    if ( *(_DWORD *)(v11 + 408) != -1 )
      CMILResourceCache::SetResource((CMILResourceCache *)(v4 + 14), *(_DWORD *)(v11 + 408), this);
  }
  return v10;
}
