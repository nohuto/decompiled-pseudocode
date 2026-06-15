/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180032000
 * Callers:
 *     AUDIOSESSIONMANAGER_rundown @ 0x180031E70 (AUDIOSESSIONMANAGER_rundown.c)
 *     AudioSessionManagerDestroy @ 0x180031F60 (AudioSessionManagerDestroy.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  operator delete(this);
  return this;
}
