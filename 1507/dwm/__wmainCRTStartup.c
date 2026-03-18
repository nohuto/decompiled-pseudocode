/*
 * XREFs of __wmainCRTStartup @ 0x140002DD0
 * Callers:
 *     wWinMainCRTStartup @ 0x140003050 (wWinMainCRTStartup.c)
 * Callees:
 *     wWinMain @ 0x140001B70 (wWinMain.c)
 *     _XcptFilter_0 @ 0x14000339E (_XcptFilter_0.c)
 *     _amsg_exit_0 @ 0x140003454 (_amsg_exit_0.c)
 *     _IsNonwritableInCurrentImage @ 0x1400034C0 (_IsNonwritableInCurrentImage.c)
 *     _initterm_0 @ 0x14000362A (_initterm_0.c)
 *     _guard_check_icall_nop @ 0x140003650 (_guard_check_icall_nop.c)
 */

int _wmainCRTStartup()
{
  PVOID StackBase; // rbx
  int v1; // r14d
  signed __int64 v2; // rax
  __int64 (**v3)(void); // rbx
  int v4; // eax
  __int64 (*v5)(void); // rsi
  int result; // eax
  void (__fastcall *v7)(_QWORD, __int64); // rbx
  wchar_t *v8; // rdx
  BOOL v9; // ecx
  int wShowWindow; // r9d
  _STARTUPINFOW StartupInfo; // [rsp+40h] [rbp-88h] BYREF

  GetStartupInfoW(&StartupInfo);
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  v1 = 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)StackBase, 0LL);
    if ( !v2 )
      break;
    if ( (PVOID)v2 == StackBase )
    {
      v1 = 1;
      break;
    }
    Sleep(0x3E8u);
  }
  if ( _native_startup_state == 1 )
  {
    amsg_exit_0(31LL);
LABEL_18:
    if ( _native_startup_state == 1 )
    {
      initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
      _native_startup_state = 2;
    }
    if ( !v1 )
      _InterlockedExchange64(&_native_startup_lock, 0LL);
    if ( _dyn_tls_init_callback && (unsigned int)IsNonwritableInCurrentImage(&_dyn_tls_init_callback) )
    {
      v7 = (void (__fastcall *)(_QWORD, __int64))_dyn_tls_init_callback;
      _guard_check_icall_fptr();
      v7(0LL, 2LL);
    }
    v8 = _wcmdln;
    if ( !_wcmdln )
      return 255;
    v9 = 0;
    while ( *v8 > 0x20u || *v8 && v9 )
    {
      if ( *v8 == 34 )
        v9 = !v9;
      ++v8;
    }
    while ( (unsigned __int16)(*v8 - 1) <= 0x1Fu )
      ++v8;
    wShowWindow = 10;
    if ( (StartupInfo.dwFlags & 1) != 0 )
      wShowWindow = StartupInfo.wShowWindow;
    result = wWinMain(&_ImageBase, 0LL, v8, wShowWindow);
    dword_14000A170 = result;
    if ( !dword_14000A190 )
      exit(result);
    if ( !dword_14000A174 )
    {
      _cexit();
      return dword_14000A170;
    }
    return result;
  }
  if ( _native_startup_state )
  {
    dword_14000A174 = 1;
    goto LABEL_18;
  }
  _native_startup_state = 1;
  v3 = (__int64 (**)(void))&_xi_a;
  v4 = 0;
  while ( v3 < &_xi_z )
  {
    if ( v4 )
      return 255;
    v5 = *v3;
    if ( *v3 )
    {
      _guard_check_icall_fptr();
      v4 = v5();
    }
    ++v3;
  }
  if ( !v4 )
    goto LABEL_18;
  return 255;
}
