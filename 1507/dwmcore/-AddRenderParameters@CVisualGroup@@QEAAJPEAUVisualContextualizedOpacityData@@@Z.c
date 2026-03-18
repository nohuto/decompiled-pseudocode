/*
 * XREFs of ?AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x180106DA8
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x180103548 (-AddRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 *     ?RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x18010493C (-RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 */

__int64 __fastcall CVisualGroup::AddRenderParameters(CVisualGroup *this, struct VisualContextualizedOpacityData *a2)
{
  unsigned int v2; // edi
  __int64 i; // rsi
  __int64 v6; // rdi
  __int64 RenderParameter; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  int *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); *(_BYTE *)(v10 + 88) |= 0x40u )
  {
    v6 = 56LL * (unsigned int)i;
    *(_BYTE *)(*((_QWORD *)this + 7) + v6) ^= (*(_BYTE *)(*((_QWORD *)this + 7) + v6) ^ (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * i)
                                                                                                  + 88LL) >> 5)) & 2;
    RenderParameter = CVisual::FindRenderParameter(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * i), *((_DWORD *)a2 + 2), 0LL);
    v8 = *((_QWORD *)this + 7);
    if ( RenderParameter )
    {
      *(_OWORD *)(v8 + v6 + 32) = *(_OWORD *)RenderParameter;
      *(_QWORD *)(v8 + v6 + 48) = *(_QWORD *)(RenderParameter + 16);
      *(_BYTE *)(*((_QWORD *)this + 7) + 56LL * (unsigned int)i) |= 1u;
    }
    else
    {
      *(_BYTE *)(v8 + 56LL * (unsigned int)i) &= ~1u;
    }
    v9 = CVisual::AddRenderParameter(
           *(CVisual **)(*((_QWORD *)this + 6) + 8 * i),
           (struct VisualContextualizedOpacityData *)((char *)a2 + 8));
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B9u);
      return v2;
    }
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i);
    i = (unsigned int)(i + 1);
  }
  v11 = 0LL;
  if ( *((_DWORD *)this + 16) )
  {
    v12 = (int *)((char *)a2 + 8);
    do
    {
      v13 = 56LL * (unsigned int)v11;
      *(_BYTE *)(v13 + *((_QWORD *)this + 10)) ^= (*(_BYTE *)(v13 + *((_QWORD *)this + 10)) ^ (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 9) + 8 * v11) + 88LL) >> 5)) & 2;
      v14 = CVisual::FindRenderParameter(*(_QWORD *)(*((_QWORD *)this + 9) + 8 * v11), *v12, 0LL);
      if ( v14 )
      {
        v15 = *((_QWORD *)this + 10);
        *(_OWORD *)(v13 + v15 + 32) = *(_OWORD *)v14;
        *(_QWORD *)(v13 + v15 + 48) = *(_QWORD *)(v14 + 16);
        *(_BYTE *)(v13 + *((_QWORD *)this + 10)) |= 1u;
        v16 = CVisual::RemoveRenderParameter(
                *(CVisual **)(*((_QWORD *)this + 9) + 8 * v11),
                (const struct MilVisualRenderParameter *)v12);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1CBu);
          return v2;
        }
      }
      else
      {
        *(_BYTE *)(v13 + *((_QWORD *)this + 10)) &= ~1u;
      }
      v18 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v11);
      v11 = (unsigned int)(v11 + 1);
      *(_BYTE *)(v18 + 88) &= ~0x40u;
    }
    while ( (unsigned int)v11 < *((_DWORD *)this + 16) );
  }
  return v2;
}
