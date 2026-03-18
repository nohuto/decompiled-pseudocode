/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180049B20
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A7698 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004DB5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  void *InputHandle; // rax
  struct CVisual *v2; // r10
  struct CVisual *v3; // rax

  InputHandle = CVisual::GetInputHandle(this);
  *((_BYTE *)v2 + 696) &= ~4u;
  *((_BYTE *)v2 + 696) |= 4 * (InputHandle != 0LL);
  v3 = v2;
  do
  {
    *((_BYTE *)v3 + 696) |= 1u;
    v3 = (struct CVisual *)*((_QWORD *)v3 + 8);
  }
  while ( v3 );
  CVisual::PropagateFlags(v2, 1, 0, 0, 0, 0, 0);
}
