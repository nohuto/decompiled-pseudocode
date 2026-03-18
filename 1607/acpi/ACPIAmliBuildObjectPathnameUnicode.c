/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009D04
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0009E70 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C0009F48 (AcpiDiagTraceTemperatureChange.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0029580 (ACPIConvertDependenciesToPnpReservations.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0042058 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0042388 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C00425C4 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C00426E8 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C0042810 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0042AB8 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0042D2C (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00828C0 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C001E22C (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // bx
  __int16 *PoolWithTag; // rdi
  __int64 result; // rax
  int v6; // r15d
  unsigned int v7; // esi
  char *v8; // r8
  unsigned __int16 v9; // bp
  __int16 *v10; // r10
  char v11; // r9
  char v12; // cl
  __int16 v13; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v3 = 0;
  PoolWithTag = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P);
  if ( (int)result >= 0 )
  {
    v6 = 0;
    v7 = 0;
    while ( 2 )
    {
      v8 = (char *)P;
      v9 = 0;
      v10 = PoolWithTag;
      v11 = 1;
      do
      {
        if ( v9 > 0xFFFDu )
        {
          v7 = -1073741675;
          goto LABEL_36;
        }
        v9 += 2;
        if ( v3 < v9 )
        {
          v11 = *v8 != 0 ? v11 : 0;
        }
        else
        {
          v12 = *v8;
          if ( (unsigned __int8)(*v8 - 97) <= 0x19u
            || (unsigned __int8)(v12 - 65) <= 0x19u
            || (unsigned __int8)(v12 - 48) <= 9u )
          {
            v13 = v12;
          }
          else if ( v12 == 95 )
          {
            v13 = 95;
          }
          else if ( v12 == 92 )
          {
            v13 = 92;
          }
          else
          {
            v13 = 46;
            if ( v12 != 46 )
            {
              if ( v12 )
              {
                v7 = -1073741811;
                goto LABEL_36;
              }
              v13 = 0;
              v11 = 0;
            }
          }
          *v10++ = v13;
        }
        ++v8;
      }
      while ( v11 );
      if ( v9 > v3 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
          PoolWithTag = 0LL;
        }
        if ( !v6 )
        {
          PoolWithTag = (__int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x53706341u);
          if ( PoolWithTag )
          {
            v3 = v9;
            goto LABEL_24;
          }
          v7 = -1073741670;
LABEL_38:
          *(_DWORD *)a2 = 0;
          *(_QWORD *)(a2 + 8) = 0LL;
          goto LABEL_26;
        }
        v7 = -2147483643;
LABEL_36:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
        goto LABEL_38;
      }
LABEL_24:
      if ( ++v6 < 2 )
        continue;
      break;
    }
    *(_WORD *)(a2 + 2) = v3;
    *(_WORD *)a2 = v3 - 2;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
LABEL_26:
    if ( P )
      ExFreePoolWithTag(P, 0x53706341u);
    return v7;
  }
  return result;
}
