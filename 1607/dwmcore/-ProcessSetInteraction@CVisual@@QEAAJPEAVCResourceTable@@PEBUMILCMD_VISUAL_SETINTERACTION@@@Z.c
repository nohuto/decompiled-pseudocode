/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x18004F798
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
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
    Resource = CResourceTable::GetResource((__int64)a2, v3, 0x66u);
    if ( Resource )
      v5 = (struct CInteraction *)(Resource - 8);
    else
      v5 = 0LL;
  }
  v8 = CVisual::SetInteraction(this, v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB0Cu);
  return v9;
}
