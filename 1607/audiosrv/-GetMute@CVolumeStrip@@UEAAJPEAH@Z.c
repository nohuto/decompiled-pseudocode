/*
 * XREFs of ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180017C20
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     AudioVolumeGetMute @ 0x180029EE0 (AudioVolumeGetMute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMute(CVolumeStrip *this, int *a2)
{
  CMuteControlBase *v2; // rcx
  __int64 (__fastcall *v3)(CMuteControlBase *__hidden, int *); // rax

  v2 = (CMuteControlBase *)*((_QWORD *)this + 31);
  v3 = *(__int64 (__fastcall **)(CMuteControlBase *__hidden, int *))(*(_QWORD *)v2 + 72LL);
  if ( v3 == CMuteControlBase::GetMute )
    return CMuteControlBase::GetMute(v2, a2);
  else
    return v3(v2, a2);
}
