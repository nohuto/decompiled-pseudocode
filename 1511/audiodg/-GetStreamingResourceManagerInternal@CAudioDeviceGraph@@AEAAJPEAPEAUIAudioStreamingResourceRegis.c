/*
 * XREFs of ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006754
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004D34 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManagerInternal(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 368);
  if ( *((_QWORD *)this + 46)
    || (result = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46),
        (int)result >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*v2;
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
    return 0LL;
  }
  return result;
}
