/*
 * XREFs of ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00030D8
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     sub_1C000B690 @ 0x1C000B690 (sub_1C000B690.c)
 */

void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, __int64 a2, unsigned __int16 *a3)
{
  __int64 v3; // r9

  v3 = *((_QWORD *)this + 122);
  if ( v3 )
  {
    sub_1C000B690((_DWORD)a3, 128, 0, v3, 2147483646LL);
  }
  else if ( a3 )
  {
    *a3 = 0;
  }
}
