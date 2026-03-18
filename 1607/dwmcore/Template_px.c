/*
 * XREFs of Template_px @ 0x180145870
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A4B4C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG Template_px(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-38h] BYREF
  va_list v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  va_list va1; // [rsp+78h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy((va_list)v3.Ptr, va);
  v3.Reserved = 0;
  v3.Size = 8;
  va_copy(v4, va1);
  v6 = 0;
  v5 = 8;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_INTERACTION_SET_INPUT_SINK, 2u, &v3);
}
