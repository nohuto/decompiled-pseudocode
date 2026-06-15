/*
 * XREFs of ??1AudioEffectsWatcher@@QEAA@XZ @ 0x180030ADC
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x180030A30 (s_afxCloseAudioEffectsWatcher.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800646DC (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800474B4 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioEffectsWatcher::~AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi

  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  if ( *((_BYTE *)this + 48) )
    (*(void (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      this);
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 24);
  if ( v2 )
    CloseThreadpoolWait(v2);
  v3 = (void *)*((_QWORD *)this + 23);
  if ( v3 )
    CloseHandle(v3);
  CoTaskMemFree(*((LPVOID *)this + 25));
  if ( *((_BYTE *)this + 72) )
    NtDeleteWnfStateName((char *)this + 76);
  CoTaskMemFree(*((LPVOID *)this + 1));
  `eh vector destructor iterator'((char *)this + 88, 0x20uLL, 3, (void (*)(void *))ApoData::~ApoData);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 5));
}
