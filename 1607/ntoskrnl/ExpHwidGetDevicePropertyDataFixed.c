/*
 * XREFs of ExpHwidGetDevicePropertyDataFixed @ 0x1404F710C
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404DB0E4 (ExpHwidProcessInterface.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1404F61F0 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1404F63A4 (ExpHwidGetDeviceProperties.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1404F757C (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 */

NTSTATUS __fastcall ExpHwidGetDevicePropertyDataFixed(
        struct _DEVICE_OBJECT *a1,
        int a2,
        const DEVPROPKEY *a3,
        int a4,
        ULONG Size,
        PVOID a6)
{
  ULONG v6; // ebx
  NTSTATUS result; // eax
  ULONG v9[6]; // [rsp+40h] [rbp-18h] BYREF
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = Size;
  if ( a1 )
    result = IoGetDevicePropertyData(a1, a3, 0, 0, Size, a6, v9, &v10);
  else
    result = PnpGetDeviceInterfacePropertyData(a2, (_DWORD)a3, 0, a2, Size, (__int64)a6, (__int64)v9, (__int64)&v10);
  if ( result >= 0 )
  {
    if ( v10 == a4 )
    {
      if ( v9[0] != v6 )
        return -1073741820;
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
