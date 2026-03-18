/*
 * XREFs of DpiPdoToggleDevicePowerEvents @ 0x1C000EF40
 * Callers:
 *     DpiPdoSetDevicePower @ 0x1C00E03AC (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoToggleDevicePowerEvents(__int64 a1, int a2)
{
  struct _KEVENT *v3; // rcx

  v3 = (struct _KEVENT *)(a1 + 56);
  if ( a2 == 1 )
  {
    KeClearEvent(v3);
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    KeClearEvent((PRKEVENT)(a1 + 80));
  }
}
