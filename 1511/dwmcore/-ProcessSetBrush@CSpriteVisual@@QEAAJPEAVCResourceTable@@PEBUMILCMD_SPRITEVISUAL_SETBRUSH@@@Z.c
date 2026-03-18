/*
 * XREFs of ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800F7594
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004BA50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetBrush(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVISUAL_SETBRUSH *a3)
{
  struct CContent *Resource; // rax
  unsigned int v5; // edx
  unsigned int v7; // ebx
  int v8; // eax

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CContent *)CResourceTable::GetResource((__int64)a2, v5, 0x4Cu)) != 0LL )
  {
    v8 = CVisual::SetContent(this, Resource);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x24u);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x20u);
  }
  return v7;
}
