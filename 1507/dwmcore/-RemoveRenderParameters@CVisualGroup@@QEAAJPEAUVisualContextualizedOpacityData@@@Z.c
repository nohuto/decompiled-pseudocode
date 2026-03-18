/*
 * XREFs of ?RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x1801071D8
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 *     ?RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x18010493C (-RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 */

__int64 __fastcall CVisualGroup::RemoveRenderParameters(CVisualGroup *this, struct VisualContextualizedOpacityData *a2)
{
  unsigned int v2; // edi
  __int64 i; // rbp
  __int64 v6; // r14
  CVisual *v7; // rcx
  __int64 RenderParameter; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r8
  __int64 j; // rsi
  __int64 v13; // r14
  CVisual *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx

  v2 = 0;
  for ( i = 0LL;
        (unsigned int)i < *((_DWORD *)this + 16);
        *(_BYTE *)(v11 + 88) ^= (*(_BYTE *)(v11 + 88) ^ (32 * *(_BYTE *)(*((_QWORD *)this + 10) + v6))) & 0x40 )
  {
    v6 = 56LL * (unsigned int)i;
    v7 = *(CVisual **)(*((_QWORD *)this + 9) + 8 * i);
    if ( (*(_BYTE *)(v6 + *((_QWORD *)this + 10)) & 1) != 0 )
    {
      RenderParameter = CVisual::FindRenderParameter((__int64)v7, *((_DWORD *)a2 + 2), 0LL);
      v9 = *((_QWORD *)this + 10);
      *(_OWORD *)RenderParameter = *(_OWORD *)(v9 + v6 + 32);
      *(_QWORD *)(RenderParameter + 16) = *(_QWORD *)(v9 + v6 + 48);
      *(_BYTE *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)i) &= ~1u;
    }
    else
    {
      v10 = CVisual::RemoveRenderParameter(v7, (struct VisualContextualizedOpacityData *)((char *)a2 + 8));
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x201u);
        return v2;
      }
    }
    v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * i);
    i = (unsigned int)(i + 1);
  }
  for ( j = 0LL;
        (unsigned int)j < *((_DWORD *)this + 10);
        *(_BYTE *)(v18 + 88) ^= (*(_BYTE *)(v18 + 88) ^ (32 * *(_BYTE *)(v13 + *((_QWORD *)this + 7)))) & 0x40 )
  {
    v13 = 56LL * (unsigned int)j;
    v14 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * j);
    if ( (*(_BYTE *)(v13 + *((_QWORD *)this + 7)) & 1) != 0 )
    {
      v15 = CVisual::FindRenderParameter((__int64)v14, *((_DWORD *)a2 + 2), 0LL);
      v16 = *((_QWORD *)this + 7);
      *(_OWORD *)v15 = *(_OWORD *)(v13 + v16 + 32);
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(v13 + v16 + 48);
      *(_BYTE *)(v13 + *((_QWORD *)this + 7)) &= ~1u;
    }
    else
    {
      v17 = CVisual::RemoveRenderParameter(v14, (struct VisualContextualizedOpacityData *)((char *)a2 + 8));
      v2 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x218u);
        return v2;
      }
    }
    v18 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * j);
    j = (unsigned int)(j + 1);
  }
  return v2;
}
