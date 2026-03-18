/*
 * XREFs of _DXGADAPTER::InitializePowerManagement_::_50_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C011F4CC
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::InitializePowerManagement_::_50_::ENSURE_DELETE::_ENSURE_DELETE(void **a1)
{
  operator delete(*a1);
}
