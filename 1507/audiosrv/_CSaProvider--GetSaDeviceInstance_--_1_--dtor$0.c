/*
 * XREFs of _CSaProvider::GetSaDeviceInstance_::_1_::dtor$0 @ 0x180074D08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CSaProvider::GetSaDeviceInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CSaDeviceInstance>::~CAutoPtr<CSaDeviceInstance>((CSaDeviceInstance **)(a2 + 128), a2);
}
