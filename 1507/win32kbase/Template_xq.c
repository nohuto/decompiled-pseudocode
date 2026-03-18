/*
 * XREFs of Template_xq @ 0x1C00AB2C8
 * Callers:
 *     EtwTraceKillTimer @ 0x1C000F9B0 (EtwTraceKillTimer.c)
 *     EtwUpdateEvent @ 0x1C0010C60 (EtwUpdateEvent.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C0015B70 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C0015D50 (EtwLogicalSurfDestroyEvent.c)
 *     NtDCompositionBeginFrame @ 0x1C0045E30 (NtDCompositionBeginFrame.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C004C8C0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C00A74B0 (EtwTraceDCompBeginFrameEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS Template_xq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  va_copy(v5, va1);
  v7 = 0;
  v6 = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v4);
}
