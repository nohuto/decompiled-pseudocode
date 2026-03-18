/*
 * XREFs of ?RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x18010493C
 * Callers:
 *     ?AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x180106DA8 (-AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 *     ?RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x1801071D8 (-RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UMilVisualRenderParameter@@$0A@@@QEAAJI@Z @ 0x1800ED1E0 (-RemoveAt@-$DynArray@UMilVisualRenderParameter@@$0A@@@QEAAJI@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 */

__int64 __fastcall CVisual::RemoveRenderParameter(CVisual *this, const struct MilVisualRenderParameter *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = 1;
  if ( CVisual::FindRenderParameter((__int64)this, *(_DWORD *)a2, &v6) )
  {
    v4 = DynArray<MilVisualRenderParameter,0>::RemoveAt((__int64 *)this + 91, v6);
    v3 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x98Cu);
  }
  return v3;
}
