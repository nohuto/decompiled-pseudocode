/*
 * XREFs of PoDeleteThermalRequest @ 0x1406B1D44
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **a1)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(a1[3]);
  ExFreePoolWithTag(a1, 0x6C6F4350u);
}
