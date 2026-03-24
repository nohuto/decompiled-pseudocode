/*
 * XREFs of MouseClassSetWmiDataItem @ 0x1C000D180
 * Callers:
 *     <none>
 * Callees:
 *     MouseToggleWaitWake @ 0x1C0004CA4 (MouseToggleWaitWake.c)
 */

NTSTATUS __fastcall MouseClassSetWmiDataItem(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  __int64 DeviceExtension; // rcx
  NTSTATUS v10; // eax

  DeviceExtension = (__int64)a1->DeviceExtension;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( a6 )
      {
        if ( a5 != 1 || a4 )
          v10 = -1073741808;
        else
          v10 = MouseToggleWaitWake(DeviceExtension, *a7);
      }
      else
      {
        v10 = -1073741789;
      }
    }
    else
    {
      v10 = -1073741163;
    }
  }
  else
  {
    v10 = -1073741114;
  }
  return WmiCompleteRequest(a1, a2, v10, 0, 0);
}
