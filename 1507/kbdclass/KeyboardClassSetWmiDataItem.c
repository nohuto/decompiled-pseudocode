/*
 * XREFs of KeyboardClassSetWmiDataItem @ 0x1C000E840
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardToggleWaitWake @ 0x1C00050EC (KeyboardToggleWaitWake.c)
 */

NTSTATUS __fastcall KeyboardClassSetWmiDataItem(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  ULONG v7; // ebx
  __int64 DeviceExtension; // rcx
  NTSTATUS v11; // eax

  v7 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = 1;
      if ( a6 )
      {
        if ( a5 != 1 || a4 )
          v11 = -1073741808;
        else
          v11 = KeyboardToggleWaitWake(DeviceExtension, *a7);
      }
      else
      {
        v11 = -1073741789;
      }
    }
    else
    {
      v11 = -1073741163;
    }
  }
  else
  {
    v11 = -1073741114;
  }
  return WmiCompleteRequest(a1, a2, v11, v7, 0);
}
