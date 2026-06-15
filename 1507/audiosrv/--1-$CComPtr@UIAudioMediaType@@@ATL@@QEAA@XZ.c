/*
 * XREFs of ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x180067EF0
 * Callers:
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$2 @ 0x180047128 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$2.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$3 @ 0x180047134 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$3.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$4 @ 0x180047140 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$4.c)
 *     _CSaProvider::GetDeviceDefaults_::_1_::dtor$0 @ 0x180047360 (_CSaProvider--GetDeviceDefaults_--_1_--dtor$0.c)
 *     _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$0 @ 0x180047FB9 (_DeriveMixFormatFromDevicePipeFormat_--_1_--dtor$0.c)
 *     _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$2 @ 0x180047FD1 (_DeriveMixFormatFromDevicePipeFormat_--_1_--dtor$2.c)
 *     _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$3 @ 0x180047FDD (_DeriveMixFormatFromDevicePipeFormat_--_1_--dtor$3.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$2 @ 0x180048034 (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$2.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$3 @ 0x180048040 (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$3.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$4 @ 0x18004804C (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$4.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$6 @ 0x180048064 (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$6.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$7 @ 0x180048070 (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$7.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$0 @ 0x1800480BE (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$0.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$2 @ 0x1800480D6 (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$2.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$3 @ 0x1800480E2 (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$3.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$4 @ 0x1800480EE (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$4.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$6 @ 0x180048106 (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$6.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$5 @ 0x1800487BC (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$5.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$6 @ 0x1800487C8 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$6.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$7 @ 0x1800487D4 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$7.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$4 @ 0x180085E1A (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$4.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$5 @ 0x180085E26 (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$5.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$6 @ 0x180085E32 (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$6.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$9 @ 0x180085E56 (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$9.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$10 @ 0x180085E62 (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$10.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$11 @ 0x180085E6E (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$11.c)
 *     _DeriveStreamFormatFromMixFormat_::_1_::dtor$0 @ 0x180086381 (_DeriveStreamFormatFromMixFormat_--_1_--dtor$0.c)
 *     _DeriveStreamFormatFromMixFormat_::_1_::dtor$2 @ 0x180086399 (_DeriveStreamFormatFromMixFormat_--_1_--dtor$2.c)
 *     _DeriveStreamFormatFromMixFormat_::_1_::dtor$3 @ 0x1800863A5 (_DeriveStreamFormatFromMixFormat_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(CAudioMediaType **a1)
{
  __int64 (__fastcall *v1)(CAudioMediaType *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CAudioMediaType::Release )
      return CAudioMediaType::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
