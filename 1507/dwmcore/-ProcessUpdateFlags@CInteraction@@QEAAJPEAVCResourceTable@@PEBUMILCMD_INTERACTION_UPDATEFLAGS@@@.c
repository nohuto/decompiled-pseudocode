/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x18005A654
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
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

  v3 = *((_DWORD *)a3 + 2) != 0;
  *((_BYTE *)this + 156) &= ~1u;
  *((_BYTE *)this + 156) |= v3;
  v4 = *((_BYTE *)this + 156) ^ (*((_BYTE *)this + 156) ^ (2 * (*((_DWORD *)a3 + 3) != 0))) & 2;
  *((_BYTE *)this + 156) = v4;
  *((_BYTE *)this + 156) = v4 ^ (v4 ^ (4 * (*((_DWORD *)a3 + 4) != 0))) & 4;
  return 0LL;
}
