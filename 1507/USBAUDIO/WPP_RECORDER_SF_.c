/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001DE8
 * Callers:
 *     USBType1CompleteCallback @ 0x1C0003AA0 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x1C0005020 (USBCaptureCompleteCallback.c)
 *     PinCreate @ 0x1C0015430 (PinCreate.c)
 *     PinReset @ 0x1C00158F0 (PinReset.c)
 *     USBCntrlGetSetDbLevel @ 0x1C0020910 (USBCntrlGetSetDbLevel.c)
 *     USBCntrlGetSetBoolean @ 0x1C0020B90 (USBCntrlGetSetBoolean.c)
 *     USBCntrlGetSetGEQ @ 0x1C0020C20 (USBCntrlGetSetGEQ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, 0LL);
}
