/*
 * XREFs of ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180035960
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  int v5; // eax
  unsigned int v6; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 31LL);
  if ( Resource )
  {
    v5 = CVisual::RemoveChild(this, Resource, 0);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x887u);
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x884u);
  }
  return v6;
}
