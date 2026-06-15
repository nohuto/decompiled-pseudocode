/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180001EB0
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevelScalar(CVolumeStrip *this, __int64 a2, float *a3)
{
  CVolumeControlBase *v3; // rcx
  __int64 (__fastcall *v4)(CVolumeControlBase *__hidden, unsigned int, float *); // rax

  v3 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v4 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, unsigned int, float *))(*(_QWORD *)v3 + 144LL);
  if ( v4 == CVolumeControlBase::GetChannelVolumeLevelScalar )
    return CVolumeControlBase::GetChannelVolumeLevelScalar(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
