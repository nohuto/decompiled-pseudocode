/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x140019910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::AddRef(__int64 a1)
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry((struct _exception *)(a1 - 8));
}
