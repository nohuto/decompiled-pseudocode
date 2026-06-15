/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180051130
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr64_&___ptr64_CEndpointCharacteristics_____ptr64_&___ptr64_enum__AUDCLNT_SHAREMODE_&___ptr64_unsigned_long_&___ptr64_SaDeviceResourceParams_____ptr64__::_1_::dtor$0 @ 0x18003B57A (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800224C0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

CSaDeviceProxy *__fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CSaDeviceProxy *)CSaDeviceProxy::Release(result);
  }
  return result;
}
