/*
 * XREFs of PoDeleteThermalRequest @ 0x14066B788
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400FB8C8 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x14066BA80 (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **a1)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(a1[3]);
  ExFreePoolWithTag(a1, 0x6C6F4350u);
}
