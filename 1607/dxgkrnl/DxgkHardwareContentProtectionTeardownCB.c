/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C0022260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2);
}
