/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C0082330
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     sub_1C00823AC @ 0x1C00823AC (sub_1C00823AC.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00829E8 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(void *a1, __int64 a2)
{
  __int64 result; // rax
  COPM *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int RandomNumber; // edi
  _DXGKMDT_OPM_RANDOM_NUMBER v10; // [rsp+20h] [rbp-28h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v6 = 0;
  if ( (int)result >= 0 )
  {
    RandomNumber = COPM::GetRandomNumber(v5, a1, &v10);
    if ( RandomNumber >= 0 )
      RandomNumber = sub_1C00823AC(a2, &v10);
    UserSessionSwitchLeaveCrit(v8, v7);
    if ( RandomNumber < 0 )
      return (unsigned int)RandomNumber;
    return v6;
  }
  return result;
}
