/*
 * XREFs of ?ProcessRemoveRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_REMOVERENDERPARAMETER@@@Z @ 0x180104484
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UMilVisualRenderParameter@@$0A@@@QEAAJI@Z @ 0x1800ED1E0 (-RemoveAt@-$DynArray@UMilVisualRenderParameter@@$0A@@@QEAAJI@Z.c)
 *     ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78 (-FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterT.c)
 */

__int64 __fastcall CVisual::ProcessRemoveRenderParameter(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVERENDERPARAMETER *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  struct CResourceTable *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 1;
  if ( CVisual::FindRenderParameter((__int64)this, *((_DWORD *)a3 + 2), &v7) )
  {
    v5 = DynArray<MilVisualRenderParameter,0>::RemoveAt((__int64 *)this + 91, (unsigned int)v7);
    v4 = v5;
    if ( v5 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x96Eu);
  }
  return v4;
}
