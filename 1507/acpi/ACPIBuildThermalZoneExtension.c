/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C0021C3C
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C0021B20 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C001700C (ACPIBuildDeviceExtension.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rsi

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)v6, 0x8300000uLL);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x130uLL, 0x54706341u);
      *(_QWORD *)(v6 + 192) = PoolWithTag;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x130uLL);
        *((_QWORD *)v8 + 23) = v8 + 176;
        *((_QWORD *)v8 + 22) = v8 + 176;
        KeInitializeEvent((PRKEVENT)(v8 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v8 + 280), NotificationEvent, 1u);
      }
      else
      {
        v5 = -1073741670;
        _InterlockedOr64((volatile signed __int64 *)v6, 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
