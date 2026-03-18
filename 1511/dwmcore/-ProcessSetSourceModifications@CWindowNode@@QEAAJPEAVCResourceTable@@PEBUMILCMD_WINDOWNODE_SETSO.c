/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18005E55C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18000F244 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18005DBF8 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
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

  v3 = (struct _D3DCOLORVALUE *)((char *)this + 1044);
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v3);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*(_DWORD *)(v7 + 16), (struct _D3DCOLORVALUE *)(v8 + 1060));
    if ( (*(_BYTE *)(v10 + 8) & 4) != 0 )
      *(_BYTE *)(v9 + 1076) = 1;
  }
  else
  {
    LOBYTE(v11) = 0;
    *(_OWORD *)&v3->r = _xmm;
    *(_OWORD *)((char *)this + 1060) = 0LL;
    *((_DWORD *)this + 269) = v11;
  }
  if ( !CColorKey::operator==((CColorKey *)v3) || *((_DWORD *)v4 + 274) != v5[2] )
  {
    *((_DWORD *)v4 + 274) = v5[2];
    *((_DWORD *)v4 + 275) = v5[3];
    *((_DWORD *)v4 + 276) = v5[4];
    CVisual::PropagateFlags(v4, 0, 1, 0, 0, 0, 0);
  }
  return 0LL;
}
