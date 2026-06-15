/*
 * XREFs of ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180001EE0
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  CVolumeControlBase *v2; // rcx
  __int64 (__fastcall *v3)(CVolumeControlBase *__hidden, unsigned int *); // rax

  v2 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v3 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, unsigned int *))(*(_QWORD *)v2 + 80LL);
  if ( v3 == CVolumeControlBase::GetChannelCount )
    return CVolumeControlBase::GetChannelCount(v2, a2);
  else
    return v3(v2, a2);
}
