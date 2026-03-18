/*
 * XREFs of Template_xx @ 0x1C00BF010
 * Callers:
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1C0015B50 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C0015D30 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1C0016770 (EtwDwmSpriteCreateEvent.c)
 *     EtwDwmSpriteDestroyEvent @ 0x1C0016790 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C00167B0 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1C00167D0 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C0016850 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwBindSwapChain @ 0x1C0069C20 (EtwBindSwapChain.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1C00BE740 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS Template_xx(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  v4.Size = 8;
  v4.Reserved = 0;
  va_copy(v5, va1);
  v6 = 8;
  v7 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v4);
}
