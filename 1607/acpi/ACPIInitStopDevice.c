/*
 * XREFs of ACPIInitStopDevice @ 0x1C009C360
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E910 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C0003A88 (ACPIInternalClearFlags.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000A33C (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // r11d
  __int64 v15; // r9
  const char *v16; // rcx
  const char *v17; // r10
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // r10
  void *v21; // rcx
  void *v22; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 712);
  v3 = (char *)(a1 + 912);
  if ( (*(_DWORD *)(a1 + 912) & 0x40000) == 0 && !IsNsobjPciBus(*(_QWORD *)(a1 + 712)) )
  {
    v6 = *(_DWORD *)(a1 + 336);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4,
                             (int)ACPIInitPowerRequestCompletion,
                             (int)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 184) )
  {
    v7 = (__int64 *)(a1 + 192);
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
      v10 = AMLIGetNamedChild(v2, 1397310559);
      v11 = (volatile signed __int32 *)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11, v13);
        if ( v12 >= 0 )
        {
          v14 = ACPIGet((__int64 *)a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v25, 0LL);
          if ( v14 >= 0 )
          {
            if ( (v25 & 2) != 0 )
            {
              v18 = *(_QWORD *)(a1 + 8);
              v19 = (const char *)qword_1C0090C20;
              v20 = (const char *)qword_1C0090C20;
              if ( (v18 & 0x200000000000LL) != 0 )
              {
                v19 = *(const char **)(a1 + 560);
                if ( (v18 & 0x400000000000LL) != 0 )
                  v20 = *(const char **)(a1 + 568);
              }
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x1Du,
                (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
                v25,
                a1,
                v19,
                v20);
            }
          }
          else
          {
            v15 = *(_QWORD *)(a1 + 8);
            v16 = (const char *)qword_1C0090C20;
            v17 = (const char *)qword_1C0090C20;
            if ( (v15 & 0x200000000000LL) != 0 )
            {
              v16 = *(const char **)(a1 + 560);
              if ( (v15 & 0x400000000000LL) != 0 )
                v17 = *(const char **)(a1 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
              v14,
              a1,
              v16,
              v17);
          }
        }
      }
    }
  }
  v21 = *(void **)(a1 + 624);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v22 = *(void **)(a1 + 632);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return 0LL;
}
