/*
 * XREFs of ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180050130
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$9 @ 0x18003AB6F (_CAudioStream--_CAudioStream_--_1_--dtor$9.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$9 @ 0x18003AC8F (_CAudioStream--CAudioStream_--_1_--dtor$9.c)
 * Callees:
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x1800216E0 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002998C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AudioSrvVolumeTelemetryStreamVolume::~AudioSrvVolumeTelemetryStreamVolume(
        AudioSrvVolumeTelemetryStreamVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((void (__fastcall ***)(AudioSrvVolumeTelemetrySessionVolume *__hidden, unsigned __int64, unsigned int))this);
  std::wstring::_Tidy((_QWORD *)this + 13, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 8, 1, 0LL);
  std::string::_Tidy((void **)this + 4, 1, 0LL);
}
