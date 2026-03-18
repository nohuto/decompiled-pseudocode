/*
 * XREFs of CreateKernelEvent @ 0x1C0011650
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     VideoPortCallout @ 0x1C00881E0 (VideoPortCallout.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 */

struct _KEVENT *__fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rbx

  v4 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1699443541LL);
  v5 = v4;
  if ( v4 )
    KeInitializeEvent(v4, Type, a2);
  return v5;
}
