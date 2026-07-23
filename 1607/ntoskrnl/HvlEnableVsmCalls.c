/*
 * XREFs of HvlEnableVsmCalls @ 0x1407BD24C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14014B434 (HvlpTryConfigureInterface.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpGetVpRegisterSelfFast @ 0x14023CCC4 (HvlpGetVpRegisterSelfFast.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      result = HvlpGetVpRegisterSelfFast(v2, (__int64)&v3);
      if ( (int)result >= 0 )
      {
        result = HvlpHypercallCodeVa + (v3 & 0xFFF);
        HvlpVsmVtlCallVa = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result;
      }
    }
  }
  return result;
}
