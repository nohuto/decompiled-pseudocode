/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004FDDC
 * Callers:
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$3 @ 0x18003AA75 (_CAudioStream--RecalculateVolume_--_1_--dtor$3.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$4 @ 0x18003AA81 (_CAudioStream--RecalculateVolume_--_1_--dtor$4.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$13 @ 0x18003ABB4 (_CAudioStream--_CAudioStream_--_1_--dtor$13.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$0 @ 0x180050187 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$0.c)
 *     _std::_System_error_category::message_::_1_::dtor$0 @ 0x1800519F9 (_std--_System_error_category--message_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::string::~string(void **a1)
{
  std::string::_Tidy(a1, 1, 0LL);
}
