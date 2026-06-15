/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006440
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140005210 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140001958 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  __int64 v4; // rcx
  int StreamingResourceManager; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 44)
    || (StreamingResourceManager = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 44),
        StreamingResourceManager >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*((_QWORD *)this + 44);
    v4 = *((_QWORD *)this + 44);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    StreamingResourceManager = 0;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)StreamingResourceManager;
}
