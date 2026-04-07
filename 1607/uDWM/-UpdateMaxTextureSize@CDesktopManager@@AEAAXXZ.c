/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18001EFC4
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001E778 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  int v2; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 32LL))(*((_QWORD *)this + 21));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 576LL))(*((_QWORD *)this + 21));
  *((_DWORD *)this + 34) = v2;
  *((_DWORD *)this + 35) = v2;
}
