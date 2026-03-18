/*
 * XREFs of Template_qq @ 0x1C00A95AC
 * Callers:
 *     EtwTraceFocusChange @ 0x1C00150D0 (EtwTraceFocusChange.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00A7300 (EtwTraceCompleteInputDeviceRead.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00A7540 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00A7570 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C00A7D80 (EtwTraceStartInputDeviceRead.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Size = 4;
  v6.Reserved = 0;
  v7 = &a5;
  v8 = 4;
  v9 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v6);
}
