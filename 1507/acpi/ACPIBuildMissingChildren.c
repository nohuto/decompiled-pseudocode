/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C0034B08
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C00070A8 (AMLIGetFirstChild.c)
 *     OSNotifyCreateProcessor @ 0x1C00072FC (OSNotifyCreateProcessor.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008E44 (AMLIIterateSiblingsNext.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C000B8EC (OSNotifyCreateDevice.c)
 *     OSNotifyCreateThermalZone @ 0x1C0021B20 (OSNotifyCreateThermalZone.c)
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
            OSNotifyCreateDevice((ULONG_PTR)v3, 0x20000000000uLL);
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
