/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180035740
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  bool v7; // dl

  *((_DWORD *)this + 23) ^= (*((_DWORD *)this + 23) ^ *((_DWORD *)a3 + 2)) & 0x1FFF;
  *((_DWORD *)this + 23) ^= (*((_DWORD *)this + 23) ^ (*((_DWORD *)a3 + 3) << 15)) & 0x78000;
  v4 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 51) = v4;
  *((_DWORD *)this + 23) ^= (*((_DWORD *)this + 23) ^ (*((_DWORD *)a3 + 5) << 19)) & 0xF80000;
  *((_DWORD *)this + 23) ^= (*((_DWORD *)this + 23) ^ (*((_DWORD *)a3 + 6) << 13)) & 0x6000;
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 9);
  v5 = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 55) = v5;
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 11);
  if ( v4 || (v6 = v5 == 0, v7 = 0, !v6) )
    v7 = 1;
  CVisual::PropagateFlags(this, v7, 1, 0, 0, 0, 0);
  return 0LL;
}
