/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180026090
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18001F260 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180025240 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  struct _D3DCOLORVALUE *v3; // rbx
  struct CVisual *v4; // r10
  _DWORD *v5; // r11
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // [rsp+88h] [rbp-10h]

  v3 = (struct _D3DCOLORVALUE *)((char *)this + 852);
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v3);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*(_DWORD *)(v7 + 16), (struct _D3DCOLORVALUE *)(v8 + 868));
    if ( (*(_BYTE *)(v10 + 8) & 4) != 0 )
      *(_BYTE *)(v9 + 884) = 1;
  }
  else
  {
    LOBYTE(v11) = 0;
    *(_OWORD *)&v3->r = _xmm;
    *(_OWORD *)((char *)this + 868) = 0LL;
    *((_DWORD *)this + 221) = v11;
  }
  if ( !CColorKey::operator==((CColorKey *)v3) || *((_DWORD *)v4 + 226) != v5[2] )
  {
    *((_DWORD *)v4 + 226) = v5[2];
    *((_DWORD *)v4 + 227) = v5[3];
    *((_DWORD *)v4 + 228) = v5[4];
    CVisual::PropagateFlags(v4, 0, 1, 0, 0, 0, 0);
  }
  return 0LL;
}
