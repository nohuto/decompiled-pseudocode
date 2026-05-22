/*
 * XREFs of ??0MPCCursorManager@@QEAA@XZ @ 0x1800501FC
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004AD44 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

MPCCursorManager *__fastcall MPCCursorManager::MPCCursorManager(MPCCursorManager *this)
{
  HMODULE LibraryA; // rax
  const char *v18; // r9
  HMODULE v19; // rsi
  HMODULE v20; // r14
  DWORD LastError; // ebx
  FARPROC ProcAddress; // rax
  const char *v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)this = 0uLL;
  *((_OWORD *)this + 1) = 0u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 66) = 0;
  *((_DWORD *)this + 15) = 1;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX >= 0 )
      goto LABEL_7;
    _RAX = 0x40000000LL;
    __asm { cpuid }
    if ( __PAIR64__(_RCX, _RBX) != *(_QWORD *)"Microsoft Hv" )
      goto LABEL_7;
    if ( (_DWORD)_RDX != *(_DWORD *)"t Hv" )
      goto LABEL_7;
    if ( (int)_RAX < 1073741827 )
      goto LABEL_7;
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (_RBX & 0x1000) != 0 )
    {
LABEL_7:
      LibraryA = LoadLibraryA("User32.dll");
      v19 = (HMODULE)*((_QWORD *)this + 5);
      v20 = LibraryA;
      if ( v19 )
      {
        LastError = GetLastError();
        FreeLibrary(v19);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 5) = v20;
      if ( !v20 )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x27,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v18);
        __debugbreak();
      }
      ProcAddress = GetProcAddress(v20, "ShowSystemCursor");
      *((_QWORD *)this + 6) = ProcAddress;
      if ( !ProcAddress )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x2A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v23);
        JUMPOUT(0x180050369LL);
      }
      *((_BYTE *)this + 64) = 1;
    }
  }
  return this;
}
