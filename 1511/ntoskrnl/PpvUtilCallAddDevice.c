/*
 * XREFs of PpvUtilCallAddDevice @ 0x1401255DC
 * Callers:
 *     PnpCallAddDevice @ 0x14050A224 (PnpCallAddDevice.c)
 * Callees:
 *     VfDevObjPostAddDevice @ 0x1406C1710 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1406C1760 (VfDevObjPreAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(
        struct _DEVICE_OBJECT *a1,
        struct _DRIVER_OBJECT *a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))
{
  unsigned int v7; // ebx

  if ( !PpvUtilVerifierEnabled )
    return a3(a2, a1);
  VfDevObjPreAddDevice(a1, a2);
  v7 = a3(a2, a1);
  VfDevObjPostAddDevice(a1, a2, v7);
  return v7;
}
