/*
 * XREFs of sub_1404DB560 @ 0x1404DB560
 * Callers:
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     sub_1404DB260 @ 0x1404DB260 (sub_1404DB260.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14067EBE8 (PnpGetDeviceInterfacePropertyData.c)
 */

NTSTATUS __fastcall sub_1404DB560(
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
