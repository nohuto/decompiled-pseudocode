/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180104614
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  unsigned __int8 v3; // al
  char v4; // dl
  unsigned __int8 v5; // al
  char v6; // al
  bool v7; // zf
  __int64 v8; // rax

  v3 = *((_BYTE *)this + 89);
  v4 = v3 >> 7;
  if ( *((_DWORD *)a3 + 2) )
    v5 = v3 | 0x80;
  else
    v5 = v3 & 0x7F;
  *((_BYTE *)this + 89) = v5;
  v6 = v5 >> 7;
  if ( v4 != v6 )
  {
    v7 = v6 == 0;
    v8 = *((_QWORD *)this + 2);
    if ( v7 )
      --*(_DWORD *)(v8 + 1152);
    else
      ++*(_DWORD *)(v8 + 1152);
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  }
  return 0LL;
}
