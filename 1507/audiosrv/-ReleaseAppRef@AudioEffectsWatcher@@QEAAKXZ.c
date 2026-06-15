/*
 * XREFs of ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x180076814
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180075F98 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800768A4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReleaseAppRef(AudioEffectsWatcher *this)
{
  bool v1; // zf
  unsigned int v3; // ebp
  struct _TP_WAIT *v4; // rcx

  v1 = (*((_DWORD *)this + 14))-- == 1;
  v3 = *((_DWORD *)this + 14);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 48) )
      (*(void (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
        *(_QWORD *)&g_DeviceEnumerator,
        this);
    v4 = (struct _TP_WAIT *)*((_QWORD *)this + 24);
    *((_BYTE *)this + 48) = 0;
    if ( v4 )
    {
      SetThreadpoolWait(v4, 0LL, 0LL);
      WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 24), 1);
    }
  }
  return v3;
}
