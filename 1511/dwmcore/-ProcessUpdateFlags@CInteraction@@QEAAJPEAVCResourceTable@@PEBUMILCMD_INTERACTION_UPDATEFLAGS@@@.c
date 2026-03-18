/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800A7708
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  bool v3; // al
  char v4; // dl
  bool v5; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  *((_BYTE *)this + 156) &= ~1u;
  *((_BYTE *)this + 156) |= v3;
  v4 = *((_BYTE *)this + 156) ^ (*((_BYTE *)this + 156) ^ (2 * (*((_DWORD *)a3 + 3) != 0))) & 2;
  *((_BYTE *)this + 156) = v4;
  *((_BYTE *)this + 156) = v4 ^ (v4 ^ (4 * (*((_DWORD *)a3 + 4) != 0))) & 4;
  v5 = *((_DWORD *)a3 + 5) != 0;
  *((_BYTE *)this + 864) &= ~2u;
  *((_BYTE *)this + 864) |= 2 * v5;
  return 0LL;
}
