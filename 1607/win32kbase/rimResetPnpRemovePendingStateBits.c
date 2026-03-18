/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C000A4CC
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             5,
             32,
             (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
             a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0xF8FFFFFF;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
