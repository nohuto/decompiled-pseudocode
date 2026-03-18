/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C000B180
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00389B8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIDeviceInternalQueueRequest(__int64 a1, __int64 *a2, __int16 a3)
{
  char v3; // r9
  __int64 **v4; // rax
  __int64 ***v5; // r8
  __int64 *v6; // rcx
  __int64 ***v7; // rcx
  __int64 *v8; // rdx

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v4 = (__int64 **)AcpiPowerSynchronizeList;
    *a2 = AcpiPowerSynchronizeList;
    a2[1] = (__int64)&AcpiPowerSynchronizeList;
    if ( v4[1] != &AcpiPowerSynchronizeList )
      __fastfail(3u);
    v4[1] = a2;
    AcpiPowerSynchronizeList = (__int64)a2;
  }
  else
  {
    v4 = (__int64 **)(a1 + 528);
    if ( *v4 == (__int64 *)v4 )
    {
      v5 = *(__int64 ****)(a1 + 536);
      v6 = a2 + 2;
      a2[2] = (__int64)v4;
      a2[3] = (__int64)v5;
      if ( *v5 != v4 )
        __fastfail(3u);
      *v5 = (__int64 **)v6;
      v4[1] = v6;
      if ( (v3 & 1) != 0 )
      {
        v4 = (__int64 **)qword_1C0059B38;
        *a2 = (__int64)&AcpiPowerDelayedQueueList;
        a2[1] = (__int64)v4;
        if ( *v4 != &AcpiPowerDelayedQueueList )
          __fastfail(3u);
        *v4 = a2;
        qword_1C0059B38 = (__int64)a2;
      }
      else
      {
        v4 = (__int64 **)qword_1C0059B48;
        *a2 = (__int64)&AcpiPowerQueueList;
        a2[1] = (__int64)v4;
        if ( *v4 != &AcpiPowerQueueList )
          __fastfail(3u);
        *v4 = a2;
        qword_1C0059B48 = (__int64)a2;
      }
    }
    else
    {
      v7 = *(__int64 ****)(a1 + 536);
      v8 = a2 + 2;
      *v8 = (__int64)v4;
      v8[1] = (__int64)v7;
      if ( *v7 != v4 )
        __fastfail(3u);
      *v7 = (__int64 **)v8;
      v4[1] = v8;
    }
  }
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    LOBYTE(v4) = ACPIPowerScheduleDpc();
  return (char)v4;
}
