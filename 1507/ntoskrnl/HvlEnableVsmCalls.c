/*
 * XREFs of HvlEnableVsmCalls @ 0x1407E9058
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14016F3D8 (HvlpTryConfigureInterface.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpGetVpRegisterSelfFast @ 0x1401EE124 (HvlpGetVpRegisterSelfFast.c)
 */

char *__fastcall HvlEnableVsmCalls(__int64 a1)
{
  char *result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF

  result = *(char **)(a1 + 240);
  if ( (*((_DWORD *)result + 29) & 0x100) != 0 )
  {
    result = (char *)HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      result = (char *)HvlpGetVpRegisterSelfFast(v2, (__int64)&v3);
      if ( (int)result >= 0 )
      {
        result = (char *)HvlpHypercallCodeVa + (v3 & 0xFFF);
        HvlpVsmVtlCallVa = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result;
      }
    }
  }
  return result;
}
