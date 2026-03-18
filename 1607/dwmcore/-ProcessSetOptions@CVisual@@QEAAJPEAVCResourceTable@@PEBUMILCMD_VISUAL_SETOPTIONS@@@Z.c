/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18004F434
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180051050 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  char v3; // bl
  CVisual *v5; // r11
  int v6; // r8d
  unsigned int v7; // ecx
  bool v8; // al

  v3 = 0;
  v5 = this;
  v6 = *((_DWORD *)a3 + 3);
  v7 = *((unsigned __int8 *)this + 154);
  if ( ((v7 >> 2) & 1) != (v6 != 0) )
  {
    v3 = 1;
    *((_BYTE *)v5 + 154) = v7 ^ (v7 ^ (4 * (v6 != 0))) & 4;
    CVisual::OnInnerTransformChanged(v5);
  }
  v8 = *((_DWORD *)a3 + 2) != 0;
  *((_BYTE *)v5 + 154) &= ~1u;
  *((_BYTE *)v5 + 154) |= v8;
  if ( v3 )
    CVisual::PropagateFlags(v5, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
