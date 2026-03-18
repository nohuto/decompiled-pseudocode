/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00
 * Callers:
 *     <none>
 * Callees:
 *     Template_pnq @ 0x1C000120C (Template_pnq.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_pqn @ 0x1C0001574 (Template_pqn.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C0006070 (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C00083C8 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C0061D68 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0068A98 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C006B1BC (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C006E5EC (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C006F4D8 (WMI_RegisterHub.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const void *v5; // rax
  int v6; // esi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 i; // rbx
  __int64 v11; // rbx
  int v12; // eax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057140);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 208));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  KeResetEvent((PRKEVENT)(v4 + 1072));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1072), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v4 + 1096);
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
      HUBFDO_SetFriendlyNameForBlockedHub(v4);
    RtlInitUnicodeString(&DestinationString, 0LL);
    HUBPARENT_GetHubSymbolicLinkName(v4);
    if ( DestinationString.Length )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * DestinationString.Length, 0x68334855u);
      *(_QWORD *)(v4 + 2472) = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_WORD *)(v4 + 2464) = 0;
        *(_WORD *)(v4 + 2466) = DestinationString.Length;
        RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2464), &DestinationString);
        HUBACPI_GetAcpiPortAttributes(v4);
        HUBCONNECTOR_MapHubPorts(v4);
        WMI_RegisterHub(a1);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 512))(*(_QWORD *)(v4 + 208)) )
          _InterlockedOr((volatile signed __int32 *)(v4 + 696), 1u);
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v4 + 2440),
          2u,
          3u,
          0x1Bu,
          (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
        v6 = -1073741670;
      }
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2440), 2u, 3u, 0x1Au, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
      v6 = -1073741823;
    }
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32),
    0LL);
  if ( (*(_DWORD *)(v8 + 4) & 0x1000) != 0 && v6 >= 0 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v4 + 2136) - 1);
    if ( *(_DWORD *)(v4 + 2136) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
      {
        LODWORD(v18) = 71;
        Template_pnq(
          v4 + 1100,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 208),
          v18,
          v4 + 1100,
          *(_DWORD *)(v4 + 2520));
      }
    }
    else
    {
      v9 = (unsigned int)(*(_DWORD *)(v4 + 2136) - 2);
      if ( *(_DWORD *)(v4 + 2136) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
        {
          LODWORD(v18) = 12;
          Template_pnq(
            v4 + 1100,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 208),
            v18,
            v4 + 1100,
            *(_DWORD *)(v4 + 2520));
        }
      }
      else if ( *(_DWORD *)(v4 + 2136) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
        {
          LODWORD(v18) = *(_DWORD *)(v4 + 2520);
          Template_pq(v9, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION, 0LL, *(_QWORD *)(v4 + 208), v18);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x10) != 0 )
      {
        Template_p(v9, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE, 0LL, *(_QWORD *)(v4 + 208));
      }
    }
    for ( i = *(_QWORD *)(v4 + 2280); ; i = *(_QWORD *)(v11 + 248) )
    {
      v11 = i - 248;
      if ( v4 + 2280 == v11 + 248 )
        break;
      v12 = *(_DWORD *)(v11 + 1256);
      if ( v12 == 3000 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
        {
          v13 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT;
          goto LABEL_33;
        }
      }
      else if ( v12 == 5000 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT;
LABEL_33:
        LODWORD(v18) = *(unsigned __int16 *)(v11 + 200);
        Template_pq(v9, v13, 0LL, *(_QWORD *)(v4 + 208), v18);
      }
      if ( (*(_DWORD *)(v11 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
      {
        LODWORD(v19) = 12;
        LODWORD(v18) = *(unsigned __int16 *)(v11 + 200);
        Template_pqn(
          *(unsigned __int16 *)(v11 + 200),
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
          0LL,
          *(_QWORD *)(v4 + 208),
          v18,
          v19,
          v11 + 1340);
      }
      if ( (*(_DWORD *)(v11 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
      {
        LODWORD(v19) = 16;
        LODWORD(v18) = *(unsigned __int16 *)(v11 + 200);
        Template_pqn(
          *(unsigned __int16 *)(v11 + 200),
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
          0LL,
          *(_QWORD *)(v4 + 208),
          v18,
          v19,
          v11 + 1352);
      }
    }
  }
  v14 = *(__int64 **)(v8 + 24);
  v15 = v4 + 2352;
  *(_QWORD *)(v4 + 2352) = v8 + 16;
  *(_QWORD *)(v4 + 2360) = v14;
  if ( *v14 != v8 + 16 )
    __fastfail(3u);
  *v14 = v15;
  *(_QWORD *)(v8 + 24) = v15;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
  {
    LODWORD(v18) = v6;
    Template_pq(v16, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 208), v18);
  }
  LODWORD(v19) = *(_DWORD *)(v4 + 40);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 2440),
    2u,
    3u,
    0x1Cu,
    (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
    v19);
  return (unsigned int)v6;
}
