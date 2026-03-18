/*
 * XREFs of PnpCallAddDevice @ 0x14050A224
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x14001AD94 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1401255DC (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))
{
  int v6; // ebx
  unsigned int v7; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-48h] BYREF

  v6 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v7 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), a2, a3);
  if ( v6 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v7;
}
