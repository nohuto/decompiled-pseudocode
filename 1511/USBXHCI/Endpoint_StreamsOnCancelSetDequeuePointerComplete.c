/*
 * XREFs of Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0023E8C
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0022368 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00224A0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_StreamsOnCancelSetDequeuePointerComplete(__int64 a1, int a2)
{
  __int64 v2; // rsi
  signed __int32 v4; // ebx
  PDEVICE_OBJECT result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v2 + 20));
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dddd(
                               *(_QWORD *)(a1 + 80),
                               5u,
                               0xCu,
                               0x3Au,
                               (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
                               *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL),
                               *(_DWORD *)(a1 + 144),
                               a2,
                               v4);
  if ( v4 == *(_DWORD *)(v2 + 8) )
    return (PDEVICE_OBJECT)ESM_AddEvent((PVOID)(a1 + 272));
  return result;
}
