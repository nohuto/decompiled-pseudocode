/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C0063E60
 * Callers:
 *     <none>
 * Callees:
 *     Template_pnq @ 0x1C000120C (Template_pnq.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_pqccxqqqqqqqsss @ 0x1C0001694 (Template_pqccxqqqqqqqsss.c)
 *     Template_pqn @ 0x1C0001884 (Template_pqn.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C00066C0 (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C00089F8 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C00274A8 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C00630B0 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006A748 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C006CE74 (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00702A4 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C0071188 (WMI_RegisterHub.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const void *v5; // rax
  int v6; // r15d
  PVOID PoolWithTag; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  int v13; // eax
  int v14; // r10d
  int v15; // r13d
  int v16; // r12d
  int v17; // r14d
  int v18; // ebp
  int v19; // r11d
  char v20; // si
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  const EVENT_DESCRIPTOR *v24; // rdx
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  PWDF_DRIVER_GLOBALS v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  __int64 v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-90h]
  __int64 v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  __int64 v43; // [rsp+78h] [rbp-70h]
  __int64 v44; // [rsp+80h] [rbp-68h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  int v46; // [rsp+90h] [rbp-58h]
  int v47; // [rsp+90h] [rbp-58h]
  int v48; // [rsp+94h] [rbp-54h]
  int v49; // [rsp+94h] [rbp-54h]
  _QWORD *v50; // [rsp+98h] [rbp-50h]
  __int64 v51; // [rsp+A0h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-40h] BYREF
  int v53; // [rsp+108h] [rbp+20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00580C0);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_p(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 224));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  KeResetEvent((PRKEVENT)(v4 + 1096));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1096), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v4 + 1120);
  v53 = v6;
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
      HUBFDO_SetFriendlyNameForBlockedHub(v4);
    RtlInitUnicodeString(&DestinationString, 0LL);
    HUBPARENT_GetHubSymbolicLinkName(v4);
    if ( !DestinationString.Length )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2464), 2u, 3u, 0x1Au, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids);
      v6 = -1073741823;
LABEL_8:
      v53 = v6;
      goto LABEL_13;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * DestinationString.Length, 0x68334855u);
    *(_QWORD *)(v4 + 2496) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2464), 2u, 3u, 0x1Bu, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids);
      v6 = -1073741670;
      goto LABEL_8;
    }
    *(_WORD *)(v4 + 2488) = 0;
    *(_WORD *)(v4 + 2490) = DestinationString.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2488), &DestinationString);
    HUBACPI_GetAcpiPortAttributes(v4);
    HUBCONNECTOR_MapHubPorts(v4);
    WMI_RegisterHub(a1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 528))(*(_QWORD *)(v4 + 224)) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 720), 1u);
  }
LABEL_13:
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  v51 = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32),
    0LL);
  if ( (*(_DWORD *)(v8 + 4) & 0x1000) != 0 && v6 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2160) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
      {
        LODWORD(v33) = 71;
        Template_pnq(
          v4 + 1124,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 224),
          v33,
          v4 + 1124,
          *(_DWORD *)(v4 + 2544));
      }
    }
    else
    {
      v9 = (unsigned int)(*(_DWORD *)(v4 + 2160) - 2);
      if ( *(_DWORD *)(v4 + 2160) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
        {
          LODWORD(v33) = 12;
          Template_pnq(
            v4 + 1124,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 224),
            v33,
            v4 + 1124,
            *(_DWORD *)(v4 + 2544));
        }
      }
      else if ( *(_DWORD *)(v4 + 2160) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
        {
          LODWORD(v33) = *(_DWORD *)(v4 + 2544);
          Template_pq(v9, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION, 0LL, *(_QWORD *)(v4 + 224), v33);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
      {
        Template_p(v9, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE, 0LL, *(_QWORD *)(v4 + 224));
      }
    }
    v10 = (_QWORD *)(v4 + 2304);
    v11 = *(_QWORD *)(v4 + 2304) - 248LL;
    v12 = *(_QWORD **)(v4 + 2304);
    v50 = v12;
    if ( (_QWORD *)(v4 + 2304) != v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v11 + 1256);
        if ( v13 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) == 0 )
            goto LABEL_84;
          v14 = *(_DWORD *)(v4 + 152);
          if ( v14 == 1 )
            v49 = *(unsigned __int16 *)(v4 + 164);
          else
            v49 = 0;
          if ( v14 == 1 )
            v47 = *(_DWORD *)(v4 + 160);
          else
            v47 = 0x7FFFFFFF;
          if ( v14 == 1 )
            v15 = *(_DWORD *)(v4 + 156);
          else
            v15 = 0x7FFFFFFF;
          if ( v14 == 1 )
            v16 = *(_DWORD *)(v4 + 176);
          else
            v16 = 0;
          if ( v14 == 1 )
            v17 = *(_DWORD *)(v4 + 172);
          else
            v17 = 0;
          if ( v14 == 1 )
            v18 = *(_DWORD *)(v4 + 168);
          else
            v18 = 0;
          v19 = *(_DWORD *)(v11 + 204) >> 1;
          if ( (*(_DWORD *)(v11 + 204) & 2) != 0 )
            v20 = *(_BYTE *)(v11 + 1341);
          else
            v20 = 0;
          v26 = 0LL;
          v27 = 0LL;
          if ( v14 == 2 )
            v26 = v4 + 166;
          v23 = 0LL;
          v45 = v26;
          if ( v14 == 2 )
          {
            v27 = v4 + 161;
            v23 = v4 + 156;
          }
          v44 = v27;
          v24 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V1;
          v43 = v23;
          LODWORD(v42) = v49;
          v25 = v47;
        }
        else
        {
          if ( v13 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) == 0 )
            goto LABEL_84;
          v14 = *(_DWORD *)(v4 + 152);
          if ( v14 == 1 )
            v46 = *(unsigned __int16 *)(v4 + 164);
          else
            v46 = 0;
          if ( v14 == 1 )
            v48 = *(_DWORD *)(v4 + 160);
          else
            v48 = 0x7FFFFFFF;
          if ( v14 == 1 )
            v15 = *(_DWORD *)(v4 + 156);
          else
            v15 = 0x7FFFFFFF;
          if ( v14 == 1 )
            v16 = *(_DWORD *)(v4 + 176);
          else
            v16 = 0;
          if ( v14 == 1 )
            v17 = *(_DWORD *)(v4 + 172);
          else
            v17 = 0;
          if ( v14 == 1 )
            v18 = *(_DWORD *)(v4 + 168);
          else
            v18 = 0;
          v19 = *(_DWORD *)(v11 + 204) >> 1;
          if ( (*(_DWORD *)(v11 + 204) & 2) != 0 )
            v20 = *(_BYTE *)(v11 + 1341);
          else
            v20 = 0;
          v21 = 0LL;
          v22 = 0LL;
          if ( v14 == 2 )
            v21 = v4 + 166;
          v23 = 0LL;
          v45 = v21;
          if ( v14 == 2 )
          {
            v22 = v4 + 161;
            v23 = v4 + 156;
          }
          v44 = v22;
          v24 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V1;
          v43 = v23;
          LODWORD(v42) = v46;
          v25 = v48;
        }
        LODWORD(v41) = v25;
        LODWORD(v40) = v15;
        LODWORD(v39) = v16;
        LODWORD(v38) = v17;
        LODWORD(v37) = v18;
        LODWORD(v36) = v14;
        LOBYTE(v35) = v20;
        LOBYTE(v34) = v19 & 1;
        LODWORD(v33) = *(unsigned __int16 *)(v11 + 200);
        Template_pqccxqqqqqqqsss(
          v23,
          v24,
          0LL,
          *(_QWORD *)(v4 + 224),
          v33,
          v34,
          v35,
          *(_QWORD *)(v11 + 1416),
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        v12 = v50;
        v10 = (_QWORD *)(v4 + 2304);
LABEL_84:
        if ( (*(_DWORD *)(v11 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v34) = 12;
          LODWORD(v33) = *(unsigned __int16 *)(v11 + 200);
          Template_pqn(
            *(unsigned __int16 *)(v11 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
            0LL,
            *(_QWORD *)(v4 + 224),
            v33,
            v34,
            v11 + 1340);
        }
        if ( (*(_DWORD *)(v11 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v34) = 16;
          LODWORD(v33) = *(unsigned __int16 *)(v11 + 200);
          Template_pqn(
            *(unsigned __int16 *)(v11 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 224),
            v33,
            v34,
            v11 + 1352);
        }
        v11 = *v12 - 248LL;
        v12 = (_QWORD *)*v12;
        v50 = v12;
        if ( v10 == v12 )
        {
          v6 = v53;
          v8 = v51;
          break;
        }
      }
    }
  }
  v28 = *(_QWORD **)(v8 + 24);
  v29 = (_QWORD *)(v4 + 2376);
  if ( *v28 != v8 + 16 )
    __fastfail(3u);
  v30 = WdfDriverGlobals;
  *v29 = v8 + 16;
  *(_QWORD *)(v4 + 2384) = v28;
  *v28 = v29;
  *(_QWORD *)(v8 + 24) = v29;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(v30, *(_QWORD *)(v8 + 32));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v33) = v6;
    Template_pq(v31, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 224), v33);
  }
  LODWORD(v34) = *(_DWORD *)(v4 + 40);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 2464),
    2u,
    3u,
    0x1Cu,
    (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids,
    v34);
  return (unsigned int)v6;
}
