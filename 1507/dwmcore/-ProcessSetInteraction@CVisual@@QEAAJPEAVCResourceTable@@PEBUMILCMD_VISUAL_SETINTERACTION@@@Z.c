/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180035AC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18003706C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETINTERACTION *a3)
{
  unsigned int v3; // eax
  struct CInteraction *v5; // rdx
  __int64 Resource; // rax
  int v8; // eax
  unsigned int v9; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( v3 )
  {
    Resource = CResourceTable::GetResource(a2, v3, 88LL);
    if ( Resource )
      v5 = (struct CInteraction *)(Resource - 8);
    else
      v5 = 0LL;
  }
  v8 = CVisual::SetInteraction(this, v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xAA3u);
  return v9;
}
