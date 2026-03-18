/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00D91C0
 * Callers:
 *     RIMQueryDev @ 0x1C00808C0 (RIMQueryDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+50h] [rbp-8h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aefc60ae4ec5334359e431e3f568280a_Traceguids,
      19LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 19;
  return WppAutoLogTrace(
           a1,
           2LL,
           2LL,
           &WPP_aefc60ae4ec5334359e431e3f568280a_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL,
           v8);
}
