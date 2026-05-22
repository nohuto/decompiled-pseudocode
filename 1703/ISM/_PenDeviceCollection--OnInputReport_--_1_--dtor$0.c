/*
 * XREFs of _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800A2E23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenDeviceCollection::OnInputReport_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 48));
}
