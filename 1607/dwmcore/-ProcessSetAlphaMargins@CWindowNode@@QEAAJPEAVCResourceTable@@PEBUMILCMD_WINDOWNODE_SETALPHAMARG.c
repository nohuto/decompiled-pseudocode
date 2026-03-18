/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18002618C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((int *)a3 + 2) < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x93Fu);
  }
  else if ( *((_DWORD *)this + 222) != *((_DWORD *)a3 + 2)
         || *((_DWORD *)this + 223) != *((_DWORD *)a3 + 3)
         || *((_DWORD *)this + 224) != *((_DWORD *)a3 + 4)
         || *((_DWORD *)this + 225) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 888) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags(this, 0, 1, 0, 0, 0, 0);
  }
  return v3;
}
