/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x18010D908
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x18013FDE4 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v5; // ebx
  float *InsetFieldPointer; // rax
  CSpriteVisualContent *v7; // rcx
  __int64 v8; // r8
  float v9; // xmm0_4

  v5 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2));
  if ( InsetFieldPointer && (v9 = *(float *)(v8 + 12), v9 >= 0.0) )
  {
    if ( v9 != *InsetFieldPointer )
    {
      *InsetFieldPointer = v9;
      CSpriteVisualContent::ReleasePrimitiveCaches(v7);
      CResource::InvalidateAnimationSources(this, *((_DWORD *)a3 + 2));
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x136u);
  }
  return v5;
}
