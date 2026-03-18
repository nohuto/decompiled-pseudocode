/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18007982C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x18005DA74 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rdx
  _OWORD *v5; // rcx
  struct CVisual *v6; // r10

  v3 = 0;
  if ( *((int *)a3 + 2) < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x93Eu);
  }
  else if ( operator!=((_DWORD *)this + 282, (_DWORD *)a3 + 2) )
  {
    *v5 = *v4;
    CVisual::PropagateFlags(v6, 0, 1, 0, 0, 0, 0);
  }
  return v3;
}
