/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C0044404
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C0006FE8 (AMLIGetFirstChild.c)
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateDevice @ 0x1C000CC5C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateSiblingsNext @ 0x1C000DB94 (AMLIIterateSiblingsNext.c)
 *     OSNotifyCreateThermalZone @ 0x1C0028E8C (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0045820 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  volatile signed __int32 *i; // rax
  __int64 v2; // rax
  int Device; // eax
  int v4; // edx
  volatile signed __int32 *v5; // rbx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = AMLIGetFirstChild(*(_QWORD **)(a1 + 712)); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = i;
      if ( !i )
        return 0LL;
      v2 = *(_QWORD *)i;
      if ( !*(_QWORD *)(*(_QWORD *)v5 + 104LL) )
      {
        switch ( *(_WORD *)(v2 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice((ULONG_PTR)v5, 0x20000000000uLL);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion((__int64)v5);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor((__int64)v5, 0x20000000000uLL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone((__int64)v5, 0x20000000000uLL);
            break;
          default:
            continue;
        }
        if ( Device < 0 )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            22,
            21,
            (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
            Device,
            (char)v5);
        }
      }
    }
  }
  return 0LL;
}
