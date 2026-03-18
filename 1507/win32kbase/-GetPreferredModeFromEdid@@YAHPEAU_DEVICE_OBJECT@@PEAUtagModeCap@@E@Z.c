/*
 * XREFs of ?GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C0066B08
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0066C94 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     GetRegEDID @ 0x1C0065E40 (GetRegEDID.c)
 *     ?CalculatePreferredModeFromEdid1@@YAHPEAEPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C0066BA0 (-CalculatePreferredModeFromEdid1@@YAHPEAEPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CalculatePreferredModeFromEdid2@@YAHPEAU_EDID2@@PEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00B7D7C (-CalculatePreferredModeFromEdid2@@YAHPEAU_EDID2@@PEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 */

int __fastcall GetPreferredModeFromEdid(struct _DEVICE_OBJECT *a1, struct tagModeCap *a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  struct _EDID2 *v8; // [rsp+20h] [rbp-238h] BYREF
  unsigned int v9[128]; // [rsp+30h] [rbp-228h] BYREF

  v8 = 0LL;
  if ( !(unsigned int)GetRegEDID(a1, v9, &v8) )
    return 0;
  if ( *(_BYTE *)v8 != 32 )
  {
    if ( !*(_BYTE *)v8 && !*((_BYTE *)v8 + 7) )
    {
      v6 = 1LL;
      while ( *((_BYTE *)v8 + v6) == 0xFF )
      {
        if ( ++v6 >= 7 )
          return CalculatePreferredModeFromEdid1((unsigned __int8 *)v8, a1, a2, a3);
      }
    }
    return 0;
  }
  return CalculatePreferredModeFromEdid2(v8, a1, a2, a3);
}
