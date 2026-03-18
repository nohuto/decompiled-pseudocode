/*
 * XREFs of HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000EFF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004168 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000D7C0 (HUBMUX_ReEnableInterruptTransfer.c)
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
