/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C000F054
 * Callers:
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C000BCF8 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             5,
             28,
             (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
             a1);
  *(_DWORD *)(a1 + 192) &= ~1u;
  *(_DWORD *)(a1 + 176) &= 0xF8FFFFFF;
  *(_QWORD *)(a1 + 184) = 0LL;
  return result;
}
