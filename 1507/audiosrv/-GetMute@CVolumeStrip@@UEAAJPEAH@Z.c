/*
 * XREFs of ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x18001CF80
 * Callers:
 *     AudioVolumeGetMute @ 0x180032550 (AudioVolumeGetMute.c)
 * Callees:
 *     ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x1800325F0 (-GetMute@CMuteControlBase@@UEAAJPEAH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetMute(CVolumeStrip *this, int *a2)
{
  __int64 (__fastcall *v2)(CMuteControlBase *__hidden, int *); // rdi

  v2 = *(__int64 (__fastcall **)(CMuteControlBase *__hidden, int *))(**((_QWORD **)this + 31) + 72LL);
  if ( v2 == CMuteControlBase::GetMute )
    return CMuteControlBase::GetMute(*((CMuteControlBase **)this + 31), a2);
  else
    return v2(*((CMuteControlBase **)this + 31), a2);
}
