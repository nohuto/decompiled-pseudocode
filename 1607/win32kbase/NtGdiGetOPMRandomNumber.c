/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C0083D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1C0083DEC (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00843F8 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(void *a1, __int64 a2)
{
  __int64 result; // rax
  COPM *v5; // rcx
  unsigned int v6; // ebx
  int RandomNumber; // edi
  _DXGKMDT_OPM_RANDOM_NUMBER v8; // [rsp+20h] [rbp-28h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v6 = 0;
  if ( (int)result >= 0 )
  {
    RandomNumber = COPM::GetRandomNumber(v5, a1, &v8);
    if ( RandomNumber >= 0 )
      RandomNumber = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v8);
    UserSessionSwitchLeaveCrit();
    if ( RandomNumber < 0 )
      return (unsigned int)RandomNumber;
    return v6;
  }
  return result;
}
