/*
 * XREFs of ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?ForceSamplerModeTypeToNearestNeighbor@@YA?AW4Enum@SamplerMode@@W412@@Z @ 0x18000E5EC (-ForceSamplerModeTypeToNearestNeighbor@@YA-AW4Enum@SamplerMode@@W412@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z @ 0x1800DDC90 (-IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z.c)
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDEAC (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDF38 (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ @ 0x1800DE414 (-EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ.c)
 *     ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x1800FEFA4 (-MilCompositingModeToBlendMode@@YA-AW4Enum@BlendMode@@W41MilCompositingMode@@@Z.c)
 */

__int64 __fastcall CHWDrawListCache::AppendHWDrawListEntries(
        __int64 a1,
        __int64 a2,
        const struct CMILMatrix *a3,
        float a4,
        unsigned int a5,
        char a6)
{
  unsigned int v6; // ebp
  bool v9; // r14
  __int64 i; // r12
  __int64 v11; // rsi
  const struct D2D_RECT_F *v12; // rdi
  CD2DContext *v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rbp
  unsigned int v20; // eax
  __int64 v21; // r8
  __int128 v22; // xmm1
  CD2DContext *v23; // rax
  int appended; // eax
  CHWCallbackRenderer **v25; // rax
  int v26; // eax
  _DWORD v28[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  if ( a4 > 0.0 )
  {
    v9 = 0;
    CHWDrawListCache::EnsureColorAnimationsProcessed((CHWDrawListCache *)a1);
    if ( a4 == 1.0 )
      v9 = a5 == 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(a1 + 16) + 48 * i;
      v12 = *(const struct D2D_RECT_F **)(*(_QWORD *)v11 + 16LL);
      v13 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
      if ( CD2DContext::IsPrimitiveVisibleWithinClip(v13, v12 + 1, a3) )
      {
        v14 = a5;
        if ( *(_BYTE *)(v11 + 40) && v9 )
          v14 = 1;
        if ( a6 )
        {
          v15 = ForceSamplerModeTypeToNearestNeighbor(*(_DWORD *)(v11 + 8));
          v16 = *(_DWORD *)(v11 + 12);
          v28[0] = v15;
          v17 = ForceSamplerModeTypeToNearestNeighbor(v16);
        }
        else
        {
          v28[0] = *(_DWORD *)(v11 + 8);
          v17 = *(_DWORD *)(v11 + 12);
        }
        v18 = *(_QWORD *)v11;
        v28[1] = v17;
        v19 = v18 + 28;
        if ( !*(_DWORD *)(v18 + 144) )
        {
          v20 = MilCompositingModeToBlendMode(v14);
          *(_OWORD *)(v21 + 76) = *(_OWORD *)a3;
          *(_OWORD *)(v21 + 92) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v21 + 108) = *((_OWORD *)a3 + 2);
          v22 = *((_OWORD *)a3 + 3);
          *(_DWORD *)(v21 + 24) = v20;
          *(float *)(v21 + 140) = a4;
          *(_OWORD *)(v21 + 124) = v22;
          (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v19 + 8LL))(v19, v28, v20);
        }
        if ( *(_BYTE *)(v11 + 41) && v9 )
        {
          v23 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
          appended = CD2DContext::AppendHWMegaRectEntry(v23, *(struct CHWDrawListEntry **)v11);
          v6 = appended;
          if ( appended < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x102u);
            return v6;
          }
        }
        else
        {
          v25 = (CHWCallbackRenderer **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
          v26 = CD2DContext::AppendHWDrawListEntry(v25, *(struct CHWDrawListEntry **)v11);
          v6 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x108u);
            return v6;
          }
        }
      }
    }
  }
  return v6;
}
