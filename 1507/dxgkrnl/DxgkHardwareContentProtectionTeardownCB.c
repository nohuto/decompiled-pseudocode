/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C001D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2504LL), a2);
}
