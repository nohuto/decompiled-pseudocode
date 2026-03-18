/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0010310
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0006A98 (RIMRemoveFromActiveDevices.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C000A4CC (rimResetPnpRemovePendingStateBits.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C000BD6C (RIMHidGetCaps.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0010F40 (rimHandleAnyPnpRemovePendingDevices.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C006F3C0 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007DE6C (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMAddToActiveDevices @ 0x1C00D48CC (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C00D86B0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]
  __int64 v15; // [rsp+50h] [rbp-8h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 8LL, 0LL, v13, v14, v15);
}
