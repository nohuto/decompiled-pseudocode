/*
 * XREFs of ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00D7490
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C0017C50 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler **a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  __int64 v3; // r8

  DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(this, a2, a3);
  ++*(_DWORD *)(v3 + 20);
}
