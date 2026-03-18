/*
 * XREFs of ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800356F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180034C00 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetClip(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCLIP *a3)
{
  struct CGeometry *Resource; // rax
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CGeometry *)CResourceTable::GetResource(a2, v5, 61LL)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x7DBu);
  }
  else
  {
    v7 = CVisual::SetClip(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7DFu);
  }
  return v8;
}
