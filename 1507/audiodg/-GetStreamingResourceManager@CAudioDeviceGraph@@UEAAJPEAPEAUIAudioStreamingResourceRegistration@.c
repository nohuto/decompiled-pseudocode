/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000ECD0
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000DE50 (-GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceReg.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140015388 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  int StreamingResourceManager; // ebx
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 43)
    || (StreamingResourceManager = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 43),
        StreamingResourceManager >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*((_QWORD *)this + 43);
    v5 = *((_QWORD *)this + 43);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    StreamingResourceManager = 0;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)StreamingResourceManager;
}
