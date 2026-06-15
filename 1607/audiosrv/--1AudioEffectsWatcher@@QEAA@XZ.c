/*
 * XREFs of ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800030D4
 * Callers:
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180003188 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035F78 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioEffectsWatcher::~AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

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
  `eh vector destructor iterator'((char *)this + 88, 0x20uLL, 3uLL, (void (*)(void *))ApoData::~ApoData);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
