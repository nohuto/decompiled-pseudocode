/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E6A8 (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C00500F0 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C0057348 (ACPIThermalStopZone.c)
 *     IsPciBus @ 0x1C00851E4 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // bp
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  bool v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // r8
  int v17; // ecx

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 4 )
  {
    a2->IoStatus.Status = -1073741810;
    IofCompleteRequest(a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
    {
      if ( (*(_DWORD *)(v5 + 912) & 0x20000000) != 0 )
      {
        v8 = *(_QWORD *)(v5 + 744);
        if ( v8 )
        {
          v9 = *(struct _DEVICE_OBJECT **)(v8 + 736);
          if ( v9 )
            IoInvalidateDeviceRelations(v9, BusRelations);
        }
      }
      v10 = (*(_DWORD *)(v5 + 912) & 0x8000LL) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v10 )
      {
        LOBYTE(v12) = v10;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v12);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 912) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      v13 = *(_DWORD *)(v5 + 912);
      *(_DWORD *)(v5 + 320) = 5;
      if ( (*(_QWORD *)&v13 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v11) = 1;
      ACPIInitStopDevice(v5, v11);
      ACPIBuildSurpriseRemovedExtension(v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v14 = *(_QWORD *)(v5 + 8);
      v15 = (const char *)qword_1C002C340;
      v16 = (const char *)qword_1C002C340;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(v5 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(v5 + 568);
      }
      v17 = 26;
      if ( MinorFunction < 0x1Au )
        v17 = MinorFunction;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x3Eu,
        (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v17],
        0,
        v5,
        v15,
        v16);
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 912) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      *(_DWORD *)(v5 + 320) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v7) = 1;
      ACPIInitStopDevice(v5, v7);
    }
    return 0LL;
  }
}
