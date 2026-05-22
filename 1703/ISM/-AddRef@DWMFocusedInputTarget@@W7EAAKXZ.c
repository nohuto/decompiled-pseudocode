/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@W7EAAKXZ @ 0x18001DA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 8));
}
