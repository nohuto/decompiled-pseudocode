/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180037008
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18003706C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18005A5E4 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180035B7C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  void *InputHandle; // rax
  struct CVisual *v2; // r10
  struct CVisual *v3; // rax

  InputHandle = CVisual::GetInputHandle(this);
  *((_BYTE *)v2 + 712) &= ~4u;
  *((_BYTE *)v2 + 712) |= 4 * (InputHandle != 0LL);
  v3 = v2;
  do
  {
    *((_BYTE *)v3 + 712) |= 1u;
    v3 = (struct CVisual *)*((_QWORD *)v3 + 10);
  }
  while ( v3 );
  CVisual::PropagateFlags(v2, 1, 0, 0, 0, 0, 0);
}
