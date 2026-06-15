/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x140019EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::AddRef(__int64 a1)
{
  return CSystemAudioDeviceBase::Resume((struct _exception *)(a1 - 8));
}
