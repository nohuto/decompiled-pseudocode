/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x180035808
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800363D8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  char v3; // r11
  CVisual *v5; // r10
  int v6; // r8d
  unsigned int v7; // ecx
  bool v8; // al

  v3 = 0;
  v5 = this;
  v6 = *((_DWORD *)a3 + 3);
  v7 = *((unsigned __int8 *)this + 90);
  if ( ((v7 >> 4) & 1) != (v6 != 0) )
  {
    *((_BYTE *)v5 + 90) = v7 ^ (v7 ^ (16 * (v6 != 0))) & 0x10;
    CVisual::OnInnerTransformChanged(v5);
  }
  v8 = *((_DWORD *)a3 + 2) != 0;
  *((_BYTE *)v5 + 90) &= ~4u;
  *((_BYTE *)v5 + 90) |= 4 * v8;
  if ( v3 )
    CVisual::PropagateFlags(v5, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
