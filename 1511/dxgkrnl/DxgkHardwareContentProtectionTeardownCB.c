/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C001D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2);
}
