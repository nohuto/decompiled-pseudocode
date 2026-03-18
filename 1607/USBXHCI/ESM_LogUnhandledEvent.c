/*
 * XREFs of ESM_LogUnhandledEvent @ 0x1C003A1D0
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C0039E68 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x1C0004CC0 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00075F0 (WPP_RECORDER_SF_qDD.c)
 */

BOOLEAN __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    v7 = *(_DWORD *)(a1 + 852);
    WPP_RECORDER_SF_qLL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xAu,
      (__int64)&WPP_ab5afb0f7d43342a55652d2f258cb988_Traceguids,
      *(_QWORD *)(a1 + 960),
      a2,
      v7);
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint(
        "ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n",
        *(const void **)(a1 + 960),
        a2,
        *(_DWORD *)(a1 + 852));
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 852);
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xBu,
      (__int64)&WPP_ab5afb0f7d43342a55652d2f258cb988_Traceguids,
      *(_QWORD *)(a1 + 960),
      a2,
      v6);
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
