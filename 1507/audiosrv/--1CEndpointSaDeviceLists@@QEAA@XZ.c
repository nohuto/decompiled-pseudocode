/*
 * XREFs of ??1CEndpointSaDeviceLists@@QEAA@XZ @ 0x180073810
 * Callers:
 *     ??_GCEndpointSaDeviceLists@@QEAAPEAXI@Z @ 0x180073B28 (--_GCEndpointSaDeviceLists@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800695F8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50 (--_GCSaDeviceInstance@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointSaDeviceLists::~CEndpointSaDeviceLists(CEndpointSaDeviceLists *this)
{
  __int64 v2; // rbx
  char *v3; // rdi
  __int64 *v4; // rdx
  CSaDeviceInstance *v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx

  v2 = 0LL;
  do
  {
    v3 = (char *)this + 48 * v2;
    while ( *((_QWORD *)v3 + 2) )
    {
      v4 = *(__int64 **)v3;
      if ( !*(_QWORD *)v3 )
        ATL::AtlThrowImpl(-2147467259);
      v5 = (CSaDeviceInstance *)v4[2];
      v6 = *v4;
      *(_QWORD *)v3 = *v4;
      if ( v6 )
        *(_QWORD *)(v6 + 8) = 0LL;
      else
        *((_QWORD *)v3 + 1) = 0LL;
      ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(
        (__int64)this + 48 * v2,
        v4);
      if ( v5 )
        CSaDeviceInstance::`scalar deleting destructor'(v5, v7);
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 4 );
  `eh vector destructor iterator'(
    (char *)this,
    (struct _GUID *)0x30,
    4,
    (void (__fastcall *)(char *))ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>);
}
