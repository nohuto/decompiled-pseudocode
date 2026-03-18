/*
 * XREFs of EnableDisableRegions @ 0x1C0066F60
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0066C90 (ACPIBusIrpStartDeviceWorker.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007AF40 (ACPIFilterIrpStopDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNSObjectType @ 0x1C0003814 (AMLIGetNSObjectType.c)
 *     AMLIGetFirstChild @ 0x1C00077C8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008B20 (AMLIIterateSiblingsNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 a1, char a2, char a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 i; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v13[10]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v6 = (__int64 *)AMLIGetNamedChild(a1, 1195725407);
  if ( v6 )
  {
    memset(v13, 0, sizeof(v13));
    WORD1(v13[0]) = 1;
    WORD1(v13[5]) = 1;
    v13[2] = 2LL;
    v13[7] = a2 != 0;
    v5 = AMLIEvalNameSpaceObject(v6, 0LL, 2u, v13);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v9) )
    {
      v9 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v10) )
      {
        LOBYTE(v11) = a2;
        v12 = EnableDisableRegions(v9, v11, 0LL);
        if ( v12 < 0 )
          v5 = v12;
      }
    }
  }
  return v5;
}
