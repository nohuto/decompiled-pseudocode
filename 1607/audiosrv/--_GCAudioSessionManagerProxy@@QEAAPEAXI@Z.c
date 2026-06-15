/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180029444
 * Callers:
 *     AUDIOSESSIONMANAGER_rundown @ 0x1800292F0 (AUDIOSESSIONMANAGER_rundown.c)
 *     AudioSessionManagerDestroy @ 0x1800293B0 (AudioSessionManagerDestroy.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
