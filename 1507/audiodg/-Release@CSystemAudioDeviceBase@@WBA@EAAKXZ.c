/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@WBA@EAAKXZ @ 0x140019EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::Release(__int64 a1)
{
  return CSystemAudioDeviceBase::Resume((struct _exception *)(a1 - 16));
}
