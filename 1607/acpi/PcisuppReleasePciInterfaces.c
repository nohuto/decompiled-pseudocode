/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C00A17EC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0003A88 (ACPIInternalClearFlags.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0058B64 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00A18C8 (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  __int64 v2; // rdx
  const char *v3; // rax
  const char *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[114] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 114, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = a1[1];
      v3 = (const char *)qword_1C0090C20;
      v4 = (const char *)qword_1C0090C20;
      if ( (v2 & 0x200000000000LL) != 0 )
      {
        v3 = (const char *)a1[70];
        if ( (v2 & 0x400000000000LL) != 0 )
          v4 = (const char *)a1[71];
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xAu,
        (__int64)&WPP_5f0553429a8c3427df127573b3f0a1c0_Traceguids,
        (char)a1,
        v3,
        v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
