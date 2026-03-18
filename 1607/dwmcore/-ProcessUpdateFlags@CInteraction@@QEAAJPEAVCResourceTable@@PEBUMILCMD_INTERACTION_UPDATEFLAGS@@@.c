/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800A4BBC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  bool v4; // al
  char v5; // dl
  char v6; // cl
  bool v7; // al
  bool v8; // al
  unsigned __int8 v9; // al

  v4 = *((_DWORD *)a3 + 2) != 0;
  *((_BYTE *)this + 256) &= ~1u;
  *((_BYTE *)this + 256) |= v4;
  v5 = *((_BYTE *)this + 256) ^ (*((_BYTE *)this + 256) ^ (2 * (*((_DWORD *)a3 + 3) != 0))) & 2;
  v6 = v5 ^ (v5 ^ (2 * v5)) & 4;
  *((_BYTE *)this + 256) = v6;
  *((_BYTE *)this + 256) = v6 ^ (v6 ^ (16 * (*((_DWORD *)a3 + 4) != 0))) & 0x10;
  v7 = *((_DWORD *)a3 + 5) != 0;
  *((_BYTE *)this + 1264) &= ~4u;
  *((_BYTE *)this + 1264) |= 4 * v7;
  v8 = *((_DWORD *)a3 + 6) != 0;
  *((_BYTE *)this + 256) &= ~0x20u;
  *((_BYTE *)this + 256) |= 32 * v8;
  v9 = *((_BYTE *)this + 256);
  *((_BYTE *)this + 1264) &= ~8u;
  *((_BYTE *)this + 1264) |= (v9 >> 2) & 8;
  return 0LL;
}
