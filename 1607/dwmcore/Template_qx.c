/*
 * XREFs of Template_qx @ 0x18011CB4C
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18011C858 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG Template_qx(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-38h] BYREF
  va_list v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v8 = a3;
  v4.Ptr = (ULONGLONG)&v8;
  v4.Reserved = 0;
  v4.Size = 4;
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_DEBUG_FRAME_COUNTER_EVENT, 2u, &v4);
}
