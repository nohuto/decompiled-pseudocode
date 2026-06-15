/*
 * XREFs of ??_ECEndpointVolumeState@@UEAAPEAXI@Z @ 0x18009EF10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180071C44 (-DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 */

CEndpointVolumeState *__fastcall CEndpointVolumeState::`vector deleting destructor'(
        CEndpointVolumeState *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rsi

  v2 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &CEndpointVolumeState::`vftable';
  if ( !v2 )
    CVolumeStrip::DeleteVolumeInternalNotification(
      *((CVolumeStrip **)this + 4),
      (struct IAudioEndpointVolumeCallback *)this + 6);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 4));
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
