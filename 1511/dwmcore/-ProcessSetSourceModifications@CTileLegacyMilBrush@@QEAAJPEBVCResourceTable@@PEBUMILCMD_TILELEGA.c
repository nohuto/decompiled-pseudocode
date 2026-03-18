/*
 * XREFs of ?ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x18011FE7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18000F244 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CTileLegacyMilBrush::ProcessSetSourceModifications(
        CTileLegacyMilBrush *this,
        const struct CResourceTable *a2,
        const struct MILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS *a3)
{
  __int64 v3; // r11
  __int64 v4; // r10

  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), (struct _D3DCOLORVALUE *)((char *)this + 56));
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*(_DWORD *)(v3 + 16), (struct _D3DCOLORVALUE *)(v4 + 72));
  return 0LL;
}
