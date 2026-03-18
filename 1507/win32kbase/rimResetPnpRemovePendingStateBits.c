/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C0075A10
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C0075344 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             5,
             26,
             (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
             a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0xF8FFFFFF;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
