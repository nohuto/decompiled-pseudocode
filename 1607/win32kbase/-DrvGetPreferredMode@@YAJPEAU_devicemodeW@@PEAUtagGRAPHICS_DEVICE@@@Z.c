/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005DF50
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?GetValuesFromInf@@YAHPEAU_DEVICE_OBJECT@@KPEAUtagModeCap@@@Z @ 0x1C005DE90 (-GetValuesFromInf@@YAHPEAU_DEVICE_OBJECT@@KPEAUtagModeCap@@@Z.c)
 *     ?GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005E0F0 (-GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // edi
  unsigned int i; // esi
  __int64 v7; // rdx
  DWORD dmPelsWidth; // eax
  DWORD v10; // [rsp+38h] [rbp-30h] BYREF
  DWORD v11; // [rsp+3Ch] [rbp-2Ch]
  DWORD v12; // [rsp+40h] [rbp-28h]
  struct _DEVICE_OBJECT *v13; // [rsp+80h] [rbp+18h]
  PVOID Object; // [rsp+88h] [rbp+20h]

  UpdateMonitorDevices();
  a1->dmDisplayFrequency = 0x7FFF;
  a1->dmPelsHeight = 0x7FFF;
  a1->dmPelsWidth = 0x7FFF;
  v4 = (*((_DWORD *)a2 + 40) & 0x800000) != 0;
  v5 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 56); ++i )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 29) + 20LL * i) & 3) == 3 && (int)_guard_dispatch_icall_fptr() >= 0 )
    {
      if ( GetValuesFromInf(v13, v7, (struct tagModeCap *)&v10)
        || (unsigned int)GetPreferredModeFromEdid(v13, (struct tagModeCap *)&v10, v4) )
      {
        v13 = 0LL;
        ObfDereferenceObject(Object);
        if ( v12 < a1->dmDisplayFrequency )
          a1->dmDisplayFrequency = v12;
        dmPelsWidth = a1->dmPelsWidth;
        if ( v10 <= dmPelsWidth && (v10 != dmPelsWidth || v11 <= a1->dmPelsHeight) )
        {
          a1->dmPelsWidth = v10;
          a1->dmPelsHeight = v11;
          a1->dmFields = 5767168;
        }
      }
      else
      {
        ObfDereferenceObject(Object);
        a1->dmDisplayFrequency = 60;
      }
    }
  }
  if ( a1->dmPelsWidth == 0x7FFF )
    return (unsigned int)-1073741583;
  return v5;
}
