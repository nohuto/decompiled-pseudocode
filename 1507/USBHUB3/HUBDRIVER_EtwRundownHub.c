/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C0061490
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0061B7C (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     Template_pnq @ 0x1C000120C (Template_pnq.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_pqn @ 0x1C0001574 (Template_pqn.c)
 */

int __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  int v5; // edx
  int v6; // edx
  __int64 i; // rdi
  int v8; // eax
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  v5 = *(_DWORD *)(a2 + 2136) - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 2 )
      {
        LODWORD(v2) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
          LODWORD(v2) = Template_pq(
                          (__int64)a1,
                          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
                          a1,
                          *(_QWORD *)(a2 + 208),
                          *(_DWORD *)(a2 + 2520));
      }
    }
    else
    {
      LODWORD(v2) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
        LODWORD(v2) = Template_pnq(
                        a2 + 1100,
                        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
                        a1,
                        *(_QWORD *)(a2 + 208),
                        12,
                        a2 + 1100,
                        *(_DWORD *)(a2 + 2520));
    }
  }
  else
  {
    LODWORD(v2) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
      LODWORD(v2) = Template_pnq(
                      a2 + 1100,
                      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
                      a1,
                      *(_QWORD *)(a2 + 208),
                      71,
                      a2 + 1100,
                      *(_DWORD *)(a2 + 2520));
  }
  for ( i = *(_QWORD *)(a2 + 2280); ; i = *(_QWORD *)(v10 + 248) )
  {
    v10 = i - 248;
    if ( a2 + 2280 == v10 + 248 )
      break;
    v8 = *(_DWORD *)(v10 + 1256);
    if ( v8 == 3000 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
      {
        v9 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT;
        goto LABEL_17;
      }
    }
    else if ( v8 == 5000 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
    {
      v9 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT;
LABEL_17:
      LODWORD(v12) = *(unsigned __int16 *)(v10 + 200);
      Template_pq((__int64)a1, v9, a1, *(_QWORD *)(a2 + 208), v12);
    }
    if ( (*(_DWORD *)(v10 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
    {
      LODWORD(v13) = 12;
      LODWORD(v12) = *(unsigned __int16 *)(v10 + 200);
      Template_pqn(
        *(unsigned __int16 *)(v10 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
        a1,
        *(_QWORD *)(a2 + 208),
        v12,
        v13,
        v10 + 1340);
    }
    LODWORD(v2) = *(_DWORD *)(v10 + 204);
    if ( ((unsigned __int8)v2 & 4) != 0 )
    {
      LODWORD(v2) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
      {
        LODWORD(v13) = 16;
        LODWORD(v12) = *(unsigned __int16 *)(v10 + 200);
        LODWORD(v2) = Template_pqn(
                        *(unsigned __int16 *)(v10 + 200),
                        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
                        a1,
                        *(_QWORD *)(a2 + 208),
                        v12,
                        v13,
                        v10 + 1352);
      }
    }
  }
  return (int)v2;
}
