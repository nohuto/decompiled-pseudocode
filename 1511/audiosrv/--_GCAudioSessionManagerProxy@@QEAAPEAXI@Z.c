/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180032AC0
 * Callers:
 *     AudioSessionManagerDestroy @ 0x180034270 (AudioSessionManagerDestroy.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x18003A250 (AUDIOSESSIONMANAGER_rundown.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  operator delete(this);
  return this;
}
