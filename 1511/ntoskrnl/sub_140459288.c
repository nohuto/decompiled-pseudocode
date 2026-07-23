/*
 * XREFs of sub_140459288 @ 0x140459288
 * Callers:
 *     sub_140458F88 @ 0x140458F88 (sub_140458F88.c)
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     sub_140495DD4 @ 0x140495DD4 (sub_140495DD4.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1404594A0 (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 */

NTSTATUS __fastcall sub_140459288(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
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
    result = PnpGetDeviceInterfacePropertyData(a2, a3, 0LL);
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
