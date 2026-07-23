/*
 * XREFs of PoDeleteThermalRequest @ 0x14066B86C
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **a1)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(a1[3]);
  ExFreePoolWithTag(a1, 0x6C6F4350u);
}
