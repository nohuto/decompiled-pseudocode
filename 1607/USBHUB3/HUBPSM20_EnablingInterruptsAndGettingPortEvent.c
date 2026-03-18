/*
 * XREFs of HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000E460
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004034 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000CDB4 (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM20_EnablingInterruptsAndGettingPortEvent(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // edi

  v2 = *(volatile signed __int32 **)(a1 + 960);
  v3 = HUBHTX_Get20PortChangeEvent(v2, a2);
  HUBMUX_ReEnableInterruptTransfer(v2);
  return v3;
}
