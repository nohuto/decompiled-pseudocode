/*
 * XREFs of ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x18012D970
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::InitRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        struct CDesktopRenderTarget *a2,
        struct CHwndRenderTarget *a3,
        struct CRemoteApplicationWindow *a4)
{
  void (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 result; // rax

  *((_QWORD *)this + 22) = a2;
  *((_QWORD *)this + 19) = *((_QWORD *)a3 + 19);
  v7 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a3 + 19);
  if ( v7 )
    (**v7)(v7);
  v8 = *((_QWORD *)this + 20);
  *((_DWORD *)this + 91) = *((_DWORD *)a3 + 91) & 0xFFFFFFEF;
  *((_DWORD *)this + 86) = *((_DWORD *)a3 + 86);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 20) = *((_QWORD *)a3 + 20);
  v9 = *((_QWORD *)a3 + 20);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *((_QWORD *)this + 99) = a4;
  (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))a4)(a4);
  *((_OWORD *)this + 12) = *((_OWORD *)a3 + 12);
  *((_OWORD *)this + 13) = *((_OWORD *)a3 + 13);
  *((_OWORD *)this + 14) = *((_OWORD *)a3 + 14);
  *((_OWORD *)this + 15) = *((_OWORD *)a3 + 15);
  *((_OWORD *)this + 16) = *((_OWORD *)a3 + 16);
  *((_OWORD *)this + 17) = *((_OWORD *)a3 + 17);
  *((_OWORD *)this + 18) = *((_OWORD *)a3 + 18);
  *((_OWORD *)this + 19) = *((_OWORD *)a3 + 19);
  *((_OWORD *)this + 20) = *((_OWORD *)a3 + 20);
  v10 = *((_DWORD *)a3 + 84);
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 84) = v10;
  result = 0LL;
  *((_BYTE *)this + 747) = 0;
  return result;
}
