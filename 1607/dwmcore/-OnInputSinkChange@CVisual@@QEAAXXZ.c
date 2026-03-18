/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180051D40
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A4B4C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004EF94 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  void *InputHandle; // rax
  struct CVisual *v2; // r11
  struct CVisual *v3; // rax

  InputHandle = CVisual::GetInputHandle(this);
  *((_BYTE *)v2 + 544) &= ~4u;
  *((_BYTE *)v2 + 544) |= 4 * (InputHandle != 0LL);
  v3 = v2;
  do
  {
    *((_BYTE *)v3 + 544) |= 1u;
    v3 = (struct CVisual *)*((_QWORD *)v3 + 18);
  }
  while ( v3 );
  CVisual::PropagateFlags(v2, 1, 0, 0, 0, 0, 0);
}
