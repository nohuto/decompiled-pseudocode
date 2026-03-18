/*
 * XREFs of GetNextFreeCursor @ 0x1C01CAF64
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CE218 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextFreeCursor(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  __int64 v5; // rdi
  unsigned int v6; // r9d

  v1 = *(_DWORD *)(a1 + 292);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 288);
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 312);
    while ( 1 )
    {
      v6 = v3 % v1;
      if ( !*(_DWORD *)(v5 + 12LL * v6 + 8) )
        break;
      ++v4;
      v3 = v6 + 1;
      if ( v4 >= v1 )
        return v2;
    }
    v2 = *(_DWORD *)(v5 + 12LL * v6 + 4);
    *(_DWORD *)(a1 + 288) = v6 + 1;
    *(_DWORD *)(v5 + 12LL * v6 + 8) = 1;
  }
  return v2;
}
