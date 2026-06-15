/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18004FE74
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$14 @ 0x18003ABC4 (_CAudioStream--_CAudioStream_--_1_--dtor$14.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$15 @ 0x18003ABD4 (_CAudioStream--_CAudioStream_--_1_--dtor$15.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$1 @ 0x18003B06C (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$1.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$1 @ 0x180050197 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$1.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$2 @ 0x1800501A7 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::~wstring(_QWORD *a1)
{
  return std::wstring::_Tidy(a1, 1, 0LL);
}
