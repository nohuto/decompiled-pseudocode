/*
 * XREFs of ACPIInitStopDevice @ 0x1C007B200
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C003BC80 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C0004320 (ACPIInternalClearFlags.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0008684 (ACPIDeviceInternalDeviceRequest.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // ebx
  void *v13; // rcx
  void *v14; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 704);
  v3 = (char *)(a1 + 904);
  if ( (*(_DWORD *)(a1 + 904) & 0x40000) == 0 && !IsNsobjPciBus(*(_QWORD *)(a1 + 704)) )
  {
    v6 = *(_DWORD *)(a1 + 328);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             a1,
                             4,
                             (int)ACPIInitPowerRequestCompletion,
                             (int)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( (*(_QWORD *)a1 & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 176) )
  {
    v7 = (__int64 *)(a1 + 184);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *(_BYTE *)(v9 + 130) = 0;
      --v8;
    }
    while ( v8 );
  }
  ACPIInternalClearFlags(v3, 1LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)v3 & 0x40100) == 0 )
    {
      v10 = (__int64 *)AMLIGetNamedChild(v2, 1397310559);
      v11 = (volatile signed __int32 *)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11);
        if ( v12 >= 0 )
          ACPIGet((_QWORD *)a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v17, 0LL);
      }
    }
  }
  v13 = *(void **)(a1 + 616);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  v14 = *(void **)(a1 + 624);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  return 0LL;
}
