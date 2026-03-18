/*
 * XREFs of FxLibraryGlobalsVerifyVersion @ 0x1C0030748
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0030248 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C003081C (-MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 (__fastcall *FxLibraryGlobalsVerifyVersion())(_OSVERSIONINFOEXW *, __int64, __int64)
{
  __int64 (__fastcall *result)(_OSVERSIONINFOEXW *, __int64, __int64); // rax
  __int64 (__fastcall *v1)(_OSVERSIONINFOEXW *, __int64, __int64); // rdi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64); // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _OSVERSIONINFOEXW info; // [rsp+20h] [rbp-138h] BYREF

  result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))Mx::MxGetSystemRoutineAddress(L"RtlVerifyVersionInfo");
  v1 = result;
  if ( result )
  {
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, __int64))Mx::MxGetSystemRoutineAddress(L"VerSetConditionMask");
    memset(&info, 0, sizeof(info));
    info.dwOSVersionInfoSize = 284;
    LOBYTE(v3) = 3;
    info.dwMinorVersion = 2;
    info.dwMajorVersion = 6;
    v4 = SystemRoutineAddress(0LL, 2LL, v3);
    LOBYTE(v5) = 3;
    v6 = SystemRoutineAddress(v4, 1LL, v5);
    result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))v1(&info, 3LL, v6);
    if ( (int)result >= 0 )
      FxLibraryGlobals.PassiveLevelInterruptSupport = 1;
  }
  return result;
}
