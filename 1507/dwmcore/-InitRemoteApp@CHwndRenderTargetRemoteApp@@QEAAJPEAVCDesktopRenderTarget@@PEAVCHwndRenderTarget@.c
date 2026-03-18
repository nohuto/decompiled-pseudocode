/*
 * XREFs of ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x1800FA4F4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::InitRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        struct CDesktopRenderTarget *a2,
        struct CHwndRenderTarget *a3,
        struct CRemoteApplicationWindow *a4)
{
  char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  int v11; // eax

  if ( a2 )
    v7 = (char *)a2 + 80;
  else
    v7 = 0LL;
  *((_QWORD *)this + 13) = v7;
  *((_QWORD *)this + 10) = *((_QWORD *)a3 + 10);
  v8 = *((_QWORD *)a3 + 10);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v9 = *((_QWORD *)this + 11);
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 55) & 0xFFFFFFEF;
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 50);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 11);
  v10 = *((_QWORD *)a3 + 11);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a3 + 11));
  *((_QWORD *)this + 76) = a4;
  (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))a4)(a4);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a3 + 120);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)a3 + 136);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a3 + 152);
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 168);
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 23);
  v11 = *((_DWORD *)a3 + 48);
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 48) = v11;
  return 0LL;
}
