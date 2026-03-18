/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x180170B48
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x18016A23C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CISMInputThread::Stop(CISMInputThread *this)
{
  _QWORD *v2; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 232LL))(*((_QWORD *)this + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
  v2 = *(_QWORD **)this;
  *((_QWORD *)this + 3) = 0LL;
  WaitForSingleObject(v2, 0xFFFFFFFF);
  CloseHandle(*(HANDLE *)this);
  *(_QWORD *)this = 0LL;
}
