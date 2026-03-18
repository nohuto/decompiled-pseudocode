/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C0035788
 * Callers:
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C00077C8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008B20 (AMLIIterateSiblingsNext.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A030 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C000BCD0 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateProcessor @ 0x1C0021458 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C00222A0 (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(_QWORD *a1)
{
  volatile signed __int32 *i; // rax
  __int64 v2; // rax
  volatile signed __int32 *v3; // rbx

  if ( (*a1 & 0x8000000000000LL) == 0 )
  {
    for ( i = (volatile signed __int32 *)AMLIGetFirstChild(a1[88]);
          ;
          i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v3) )
    {
      v3 = i;
      if ( !i )
        break;
      v2 = *(_QWORD *)i;
      if ( !*(_QWORD *)(*(_QWORD *)v3 + 96LL) )
      {
        switch ( *(_WORD *)(v2 + 58) )
        {
          case 6:
            OSNotifyCreateDevice(v3, 0x20000000000uLL);
            break;
          case 0xA:
            OSNotifyCreateOperationRegion((__int64)v3);
            break;
          case 0xC:
            OSNotifyCreateProcessor((__int64)v3, 0x20000000000uLL);
            break;
          case 0xD:
            OSNotifyCreateThermalZone((__int64)v3, 0x20000000000uLL);
            break;
        }
      }
    }
  }
  return 0LL;
}
