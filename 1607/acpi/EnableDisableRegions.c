/*
 * XREFs of EnableDisableRegions @ 0x1C0086E6C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0 (ACPIBusIrpSurpriseRemoval.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0090230 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C009BFA0 (ACPIFilterIrpStopDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNSObjectType @ 0x1C00039EC (AMLIGetNSObjectType.c)
 *     AMLIGetFirstChild @ 0x1C0006FE8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C000DB94 (AMLIIterateSiblingsNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 *a1, char a2, char a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 v8; // rdx
  __int64 i; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _QWORD v14[10]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v6 = AMLIGetNamedChild(a1, 1195725407);
  if ( v6 )
  {
    memset(v14, 0, sizeof(v14));
    WORD1(v14[0]) = 1;
    WORD1(v14[5]) = 1;
    v14[2] = 2LL;
    v14[7] = a2 != 0;
    v5 = AMLIEvalNameSpaceObject(v6, 0LL, 2u, v14);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, v8);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = (__int64)AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v10) )
    {
      v10 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v11) )
      {
        LOBYTE(v12) = a2;
        v13 = EnableDisableRegions(v10, v12, 0LL);
        if ( v13 < 0 )
          v5 = v13;
      }
    }
  }
  return v5;
}
