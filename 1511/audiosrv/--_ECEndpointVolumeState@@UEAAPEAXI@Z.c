/*
 * XREFs of ??_ECEndpointVolumeState@@UEAAPEAXI@Z @ 0x18009BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180070334 (-DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 */

CEndpointVolumeState *__fastcall CEndpointVolumeState::`vector deleting destructor'(
        CEndpointVolumeState *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(CVolumeStrip *); // rsi

  v2 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &CEndpointVolumeState::`vftable';
  if ( !v2 )
    CVolumeStrip::DeleteVolumeInternalNotification(
      *((CVolumeStrip **)this + 4),
      (struct IAudioEndpointVolumeCallback *)this + 6);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == CVolumeStrip::Release )
      CVolumeStrip::Release(*((CVolumeStrip **)this + 4));
    else
      v6(*((CVolumeStrip **)this + 4));
  }
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
