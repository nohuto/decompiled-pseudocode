/*
 * XREFs of ?CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00C57E4
 * Callers:
 *     ?CalculatePreferredModeFromEdid1@@YAHPEAEPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005E188 (-CalculatePreferredModeFromEdid1@@YAHPEAEPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     ?CalculatePreferredModeFromEdid2@@YAHPEAU_EDID2@@PEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00C591C (-CalculatePreferredModeFromEdid2@@YAHPEAU_EDID2@@PEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C005E3B8 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C005ECB4 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

struct tagModeCap *__fastcall CalculateDefaultPreferredModeFromEdid(
        struct _DEVICE_OBJECT *a1,
        struct tagModeCap *a2,
        unsigned __int8 a3)
{
  struct tagModeCap *result; // rax
  unsigned int v7; // ebx
  struct tagModeCap *v8; // r14
  int v9; // r15d
  int MonitorCapability; // r13d
  DWORD *v11; // rsi
  unsigned int v12; // edi
  _BYTE v13[32]; // [rsp+30h] [rbp-D0h] BYREF
  struct _devicemodeW v14; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v15[6]; // [rsp+130h] [rbp+30h] BYREF

  result = (struct tagModeCap *)PALLOCMEM2(0x360uLL, 1986356295LL, 1);
  v7 = 0;
  v8 = result;
  v9 = 0;
  if ( result )
  {
    MonitorCapability = GetMonitorCapability(a1, result, (struct _FREQUENCY_RAGE *)v13, a3);
    if ( MonitorCapability )
    {
      v15[0] = 85;
      v14.dmPelsWidth = 800;
      v11 = v15;
      *(_DWORD *)a2 = 800;
      v12 = 0;
      v15[1] = 82;
      v14.dmPelsHeight = 600;
      *((_DWORD *)a2 + 1) = 600;
      v15[2] = 75;
      v15[3] = 72;
      v15[4] = 70;
      v15[5] = 60;
      while ( 1 )
      {
        v14.dmDisplayFrequency = *v11;
        *((_DWORD *)a2 + 2) = v14.dmDisplayFrequency;
        if ( !(unsigned int)PruneMode(&v14, v8, MonitorCapability, (struct _FREQUENCY_RAGE *)v13, -1073741824) )
          break;
        ++v12;
        ++v11;
        if ( v12 >= 6 )
          goto LABEL_8;
      }
      v9 = 1;
    }
LABEL_8:
    Win32FreePool();
    LOBYTE(v7) = v9 != 0;
    return (struct tagModeCap *)v7;
  }
  return result;
}
