/*
 * XREFs of ?AddRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x180103548
 * Callers:
 *     ?AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x180106DA8 (-AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 */

__int64 __fastcall CVisual::AddRenderParameter(CVisual *this, const struct MilVisualRenderParameter *a2)
{
  unsigned int v4; // edi
  __int64 RenderParameter; // rax
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax

  v4 = 0;
  RenderParameter = CVisual::FindRenderParameter(this, *(unsigned int *)a2, 0LL);
  if ( RenderParameter )
  {
    *(_OWORD *)RenderParameter = *(_OWORD *)a2;
    *(_QWORD *)(RenderParameter + 16) = *((_QWORD *)a2 + 2);
    return v4;
  }
  v7 = *((unsigned int *)this + 188);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, v6, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_10;
  }
  if ( v8 <= *((_DWORD *)this + 187) )
  {
    v10 = 3 * v7;
    v11 = *((_QWORD *)this + 91);
    *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a2;
    *(_QWORD *)(v11 + 8 * v10 + 16) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 188) = v8;
    return v4;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 728, 0x18u, 1, a2);
  v9 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  v4 = v9;
  if ( v9 < 0 )
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x94Eu);
  return v4;
}
