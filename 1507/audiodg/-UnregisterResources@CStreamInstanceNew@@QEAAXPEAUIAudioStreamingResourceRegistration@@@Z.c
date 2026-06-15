/*
 * XREFs of ?UnregisterResources@CStreamInstanceNew@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400268A8
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354 (-DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CStreamInstanceNew::UnregisterResources(
        CStreamInstanceNew *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, _QWORD))(*(_QWORD *)a2 + 32LL))(
      a2,
      *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
}
