/*
 * XREFs of PoDeleteThermalRequest @ 0x140633290
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **a1)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(a1[3]);
  ExFreePoolWithTag(a1, 0x6C6F4350u);
}
