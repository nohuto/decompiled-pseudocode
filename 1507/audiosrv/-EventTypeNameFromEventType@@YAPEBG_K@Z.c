/*
 * XREFs of ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x18009D5A0
 * Callers:
 *     ServicePowerEvent @ 0x18003A0FC (ServicePowerEvent.c)
 *     ServiceDeviceEvent @ 0x18009DD20 (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall EventTypeNameFromEventType(unsigned __int64 a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 > 0xB )
    {
      v7 = a1 - 18;
      if ( !v7 )
        return L"PBT_APMRESUMEAUTOMATIC";
      v8 = v7 - 32750;
      if ( !v8 )
        return L"DBT_DEVICEARRIVAL";
      v9 = v8 - 1;
      if ( !v9 )
        return L"DBT_DEVICEQUERYREMOVE";
      v10 = v9 - 1;
      if ( !v10 )
        return L"DBT_DEVICEQUERYREMOVEFAILED";
      v11 = v10 - 1;
      if ( !v11 )
        return L"DBT_DEVICEREMOVEPENDING";
      v12 = v11 - 1;
      if ( !v12 )
        return L"DBT_DEVICEREMOVECOMPLETE";
      if ( v12 == 15 )
        return L"PBT_POWERSETTINGCHANGE";
    }
    else
    {
      if ( (_DWORD)a1 == 11 )
        return L"PBT_APMOEMEVENT";
      if ( !(_DWORD)a1 )
        return L"PBT_APMQUERYSUSPEND";
      v1 = a1 - 2;
      if ( !v1 )
        return L"PBT_APMQUERYSUSPENDFAILED";
      v2 = v1 - 2;
      if ( !v2 )
        return L"PBT_APMSUSPEND";
      v3 = v2 - 2;
      if ( !v3 )
        return L"PBT_APMRESUMECRITICAL";
      v4 = v3 - 1;
      if ( !v4 )
        return L"PBT_APMRESUMESUSPEND";
      v5 = v4 - 2;
      if ( !v5 )
        return L"PBT_APMBATTERYLOW";
      if ( v5 == 1 )
        return L"PBT_APMPOWERSTATUSCHANGE";
    }
  }
  return L"UNKNOWN";
}
