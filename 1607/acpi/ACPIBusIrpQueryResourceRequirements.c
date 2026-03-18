/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C00857B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRangeValidatePciResources @ 0x1C000A9AC (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C000ABDC (ACPIRangeFilterPICInterrupt.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C000B47C (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0085A4C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C0085BD4 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0085C6C (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  int DeviceResourceList; // ebx
  __int64 v9; // rcx
  char *IrpText; // rax
  const char *v11; // r8
  char v12; // r10
  const char *v13; // r11
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  int v16; // r9d
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  __int64 v22; // rax
  int v23; // eax
  _DWORD *v24; // rdx
  unsigned int k; // r8d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  const char *v29; // r8
  const char *v30; // rdx
  _DWORD *v31; // r8
  unsigned int i; // r9d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 j; // rax
  __int64 v36; // rax
  const char *v37; // rdx
  const char *v38; // rcx
  __int64 v39; // rax
  char *v40; // rax
  const char *v41; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = (const char *)qword_1C0090C20;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  IrpText = ACPIDebugGetIrpText(v9, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x31u,
    (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
    (char)a2,
    IrpText,
    DeviceResourceList,
    v12,
    v13,
    v11);
  if ( DeviceResourceList < 0 )
    goto LABEL_57;
  v17 = P;
  if ( P )
  {
    v22 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v22 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, v15, v16);
    }
    else if ( (v22 & 0x200000000LL) != 0 )
    {
      v23 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v23 < 0 )
      {
        v28 = *(_QWORD *)(DeviceExtension + 8);
        v29 = (const char *)qword_1C0090C20;
        v30 = (const char *)qword_1C0090C20;
        if ( (v28 & 0x200000000000LL) != 0 )
        {
          v29 = *(const char **)(DeviceExtension + 560);
          if ( (v28 & 0x400000000000LL) != 0 )
            v30 = *(const char **)(DeviceExtension + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x32u,
          (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
          (char)a2,
          v23,
          DeviceExtension,
          v29,
          v30);
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v31 = v17 + 8;
        for ( i = 0; i < v17[7]; v31 += 8 * (unsigned int)v31[1] + 2 )
        {
          v33 = (unsigned __int64)(v31 + 2);
          v34 = (unsigned __int64)&v31[8 * v31[1] + 2];
          while ( v33 < v34 )
          {
            if ( ((*(_BYTE *)(v33 + 1) - 3) & 0xFB) == 0 )
            {
              for ( j = v33 + 32; j < v34 && *(_BYTE *)(j + 1) == 0x81; j += 32LL )
              {
                if ( *(_WORD *)(j + 4) == 1 )
                {
                  *(_WORD *)(v33 + 4) |= 0x100u;
                  break;
                }
              }
            }
            v33 += 32LL;
          }
          ++i;
        }
      }
    }
    if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000LL) != 0 )
    {
      v24 = v17 + 8;
      for ( k = 0; k < v17[7]; v24 += 8 * (unsigned int)v24[1] + 2 )
      {
        v26 = (unsigned __int64)(v24 + 2);
        v27 = (unsigned __int64)&v24[8 * v24[1] + 2];
        while ( v26 < v27 )
        {
          if ( *(_BYTE *)(v26 + 1) == 2 )
            *(_WORD *)(v26 + 4) |= 8u;
          v26 += 32LL;
        }
        ++k;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v17);
    if ( DeviceResourceList < 0 )
    {
      v36 = *(_QWORD *)(DeviceExtension + 8);
      v37 = (const char *)qword_1C0090C20;
      v38 = (const char *)qword_1C0090C20;
      if ( (v36 & 0x200000000000LL) != 0 )
      {
        v37 = *(const char **)(DeviceExtension + 560);
        if ( (v36 & 0x400000000000LL) != 0 )
          v38 = *(const char **)(DeviceExtension + 568);
      }
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x33u,
        (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v37,
        v38);
      ExFreePoolWithTag(v17, 0);
    }
    else
    {
      a2->IoStatus.Information = (unsigned __int64)v17;
    }
  }
  else if ( (*(_DWORD *)(DeviceExtension + 8) & 0x2000000) != 0 )
  {
    DeviceResourceList = -1073741823;
  }
  if ( DeviceResourceList < 0 )
  {
LABEL_57:
    if ( DeviceResourceList != -1073741670 )
    {
      v39 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v39 & 0x2000000) != 0 )
      {
        if ( (v39 & 0x200000000000LL) != 0 )
          v7 = *(const char **)(DeviceExtension + 560);
        v40 = ACPIDebugGetIrpText(v14, MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x34u,
          (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
          (char)a2,
          v40,
          DeviceResourceList,
          DeviceExtension,
          v7,
          v41);
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 560);
      v18 = 0x400000000000LL;
    }
  }
  v19 = ACPIDebugGetIrpText(v18, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x35u,
    (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
    (char)a2,
    v19,
    DeviceResourceList,
    v2,
    v7,
    v20);
  return (unsigned int)DeviceResourceList;
}
