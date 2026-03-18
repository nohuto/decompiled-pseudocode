/*
 * XREFs of HvlEnableVsmCalls @ 0x1407724D0
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x140137040 (HvlpTryConfigureInterface.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpGetVpRegisterSelfFast @ 0x1401B377C (HvlpGetVpRegisterSelfFast.c)
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
      result = HvlpGetVpRegisterSelfFast(v2, (int)&v3);
      if ( (int)result >= 0 )
      {
        result = HvlpHypercallCodeVa + (v3 & 0xFFF);
        HvlpVsmVtlCallVa = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result;
      }
    }
  }
  return result;
}
