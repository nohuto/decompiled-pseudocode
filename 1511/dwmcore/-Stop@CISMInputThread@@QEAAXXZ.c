/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801434C8
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A6F18 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x18013F07C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
