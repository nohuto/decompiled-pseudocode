/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0077B00
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C006B8E8 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0075A10 (rimResetPnpRemovePendingStateBits.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C0077BE8 (RIMHidGetCaps.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0078524 (RIMRemoveFromActiveDevices.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00825E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMAddToActiveDevices @ 0x1C00C3B84 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C00C3EE8 (RIMGetPointerInputType.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 *     rimDispatchCompleteFrame @ 0x1C00C7D4C (rimDispatchCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
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
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
