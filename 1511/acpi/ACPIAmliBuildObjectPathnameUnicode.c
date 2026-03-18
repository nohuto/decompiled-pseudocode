/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1C001A874
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C001A79C (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C001A9E0 (AcpiDiagTraceTemperatureChange.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00228C4 (ACPIConvertDependenciesToPnpReservations.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0033D08 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0034038 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C0034274 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C0034398 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C00344C0 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0034768 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C00349DC (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C006D228 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0017774 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int16 v4; // bx
  __int16 *PoolWithTag; // rdi
  __int64 result; // rax
  int v7; // r15d
  unsigned int v8; // esi
  char *v9; // r8
  unsigned __int16 v10; // bp
  __int16 *v11; // r10
  char v12; // r9
  char v13; // cl
  __int16 v14; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0;
  PoolWithTag = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P, a3);
  if ( (int)result >= 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 2 )
    {
      v9 = (char *)P;
      v10 = 0;
      v11 = PoolWithTag;
      v12 = 1;
      do
      {
        if ( v10 > 0xFFFDu )
        {
          v8 = -1073741675;
          goto LABEL_36;
        }
        v10 += 2;
        if ( v4 < v10 )
        {
          v12 = *v9 != 0 ? v12 : 0;
        }
        else
        {
          v13 = *v9;
          if ( (unsigned __int8)(*v9 - 97) <= 0x19u
            || (unsigned __int8)(v13 - 65) <= 0x19u
            || (unsigned __int8)(v13 - 48) <= 9u )
          {
            v14 = v13;
          }
          else if ( v13 == 95 )
          {
            v14 = 95;
          }
          else if ( v13 == 92 )
          {
            v14 = 92;
          }
          else
          {
            v14 = 46;
            if ( v13 != 46 )
            {
              if ( v13 )
              {
                v8 = -1073741811;
                goto LABEL_36;
              }
              v14 = 0;
              v12 = 0;
            }
          }
          *v11++ = v14;
        }
        ++v9;
      }
      while ( v12 );
      if ( v10 > v4 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
          PoolWithTag = 0LL;
        }
        if ( !v7 )
        {
          PoolWithTag = (__int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x53706341u);
          if ( PoolWithTag )
          {
            v4 = v10;
            goto LABEL_24;
          }
          v8 = -1073741670;
LABEL_38:
          *(_DWORD *)a2 = 0;
          *(_QWORD *)(a2 + 8) = 0LL;
          goto LABEL_26;
        }
        v8 = -2147483643;
LABEL_36:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
        goto LABEL_38;
      }
LABEL_24:
      if ( ++v7 < 2 )
        continue;
      break;
    }
    *(_WORD *)(a2 + 2) = v4;
    *(_WORD *)a2 = v4 - 2;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
LABEL_26:
    if ( P )
      ExFreePoolWithTag(P, 0x53706341u);
    return v8;
  }
  return result;
}
