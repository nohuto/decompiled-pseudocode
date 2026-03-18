/*
 * XREFs of ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800356A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetEffect(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETEFFECT *a3)
{
  struct CEffect *Resource; // rax
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CEffect *)CResourceTable::GetResource(a2, v5, 7LL)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x798u);
  }
  else
  {
    v7 = CVisual::SetEffect(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x79Cu);
  }
  return v8;
}
