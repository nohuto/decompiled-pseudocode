/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x180009070
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  v3 = *((_DWORD *)this + 19) & 0xFFF00FFF;
  *(_QWORD *)((char *)this + 188) = 1LL;
  *((_DWORD *)this + 19) = v3 | 0x93E;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_DWORD *)this + 20) = 0;
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
