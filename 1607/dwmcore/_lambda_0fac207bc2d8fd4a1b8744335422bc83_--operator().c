/*
 * XREFs of _lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator() @ 0x180006204
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x18000D974 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A4E3C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void __fastcall lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(
        CInteraction ***a1,
        _QWORD *a2,
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  _QWORD *v5; // r11
  CInteraction ***v6; // r10
  void *InputHandle; // rax
  int Endpoint; // eax

  v5 = a2;
  v6 = a1;
  if ( !*a2 && a3 )
  {
    InputHandle = CInteraction::GetInputHandle(**a1);
    *v5 = InputHandle;
  }
  if ( !*a4 )
  {
    Endpoint = CInteraction::GetEndpoint(**v6, a5);
    *a4 = Endpoint;
  }
  if ( !*v5 && !*a4 )
    *(_BYTE *)v6[1] = 0;
}
