/*
 * XREFs of DpiPdoToggleDevicePowerEvents @ 0x1C000D490
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C00CA378 (DpiPdoSetDevicePower.c)
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
