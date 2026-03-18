/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x18000BA18
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  v3 = *((_DWORD *)this + 23) & 0xFF00FFFF;
  *(_QWORD *)((char *)this + 204) = 1LL;
  *((_DWORD *)this + 23) = v3 | 0x92F0;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 24) = 0;
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
