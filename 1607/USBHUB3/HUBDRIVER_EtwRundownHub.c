/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C0062490
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0062EC4 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     Template_pnq @ 0x1C000120C (Template_pnq.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_pqccxqqqqqqqsss @ 0x1C0001694 (Template_pqccxqqqqqqqsss.c)
 *     Template_pqn @ 0x1C0001884 (Template_pqn.c)
 */

void __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  _QWORD *v6; // r15
  __int64 v7; // rdi
  _QWORD *v8; // r14
  int v9; // eax
  int v10; // r10d
  int v11; // r13d
  int v12; // r12d
  int v13; // r15d
  int v14; // r14d
  int v15; // r11d
  char v16; // bp
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  const EVENT_DESCRIPTOR *v20; // rdx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-A8h]
  __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  __int64 v29; // [rsp+50h] [rbp-78h]
  __int64 v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  __int64 v34; // [rsp+78h] [rbp-50h]
  __int64 v35; // [rsp+80h] [rbp-48h]
  __int64 v36; // [rsp+88h] [rbp-40h]
  int v37; // [rsp+D8h] [rbp+10h]
  int v38; // [rsp+D8h] [rbp+10h]
  int v39; // [rsp+E0h] [rbp+18h]
  int v40; // [rsp+E0h] [rbp+18h]
  _QWORD *v41; // [rsp+E8h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2160) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        Template_pq(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 224),
          *(_DWORD *)(a2 + 2544));
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      Template_pnq(
        a2 + 1124,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 224),
        12,
        a2 + 1124,
        *(_DWORD *)(a2 + 2544));
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    Template_pnq(
      a2 + 1124,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 224),
      71,
      a2 + 1124,
      *(_DWORD *)(a2 + 2544));
  }
  v6 = (_QWORD *)(a2 + 2304);
  v7 = *(_QWORD *)(a2 + 2304) - 248LL;
  v8 = *(_QWORD **)(a2 + 2304);
  v41 = v8;
  if ( (_QWORD *)(a2 + 2304) != v8 )
  {
    do
    {
      v9 = *(_DWORD *)(v7 + 1256);
      if ( v9 == 3000 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_72;
        v10 = *(_DWORD *)(a2 + 152);
        if ( v10 == 1 )
          v38 = *(unsigned __int16 *)(a2 + 164);
        else
          v38 = 0;
        if ( v10 == 1 )
          v40 = *(_DWORD *)(a2 + 160);
        else
          v40 = 0x7FFFFFFF;
        if ( v10 == 1 )
          v11 = *(_DWORD *)(a2 + 156);
        else
          v11 = 0x7FFFFFFF;
        if ( v10 == 1 )
          v12 = *(_DWORD *)(a2 + 176);
        else
          v12 = 0;
        if ( v10 == 1 )
          v13 = *(_DWORD *)(a2 + 172);
        else
          v13 = 0;
        if ( v10 == 1 )
          v14 = *(_DWORD *)(a2 + 168);
        else
          v14 = 0;
        v15 = *(_DWORD *)(v7 + 204) >> 1;
        if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
          v16 = *(_BYTE *)(v7 + 1341);
        else
          v16 = 0;
        v22 = 0LL;
        if ( v10 == 2 )
          v22 = a2 + 166;
        v23 = 0LL;
        v36 = v22;
        if ( v10 == 2 )
          v23 = a2 + 161;
        v19 = 0LL;
        v35 = v23;
        v20 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V1;
        if ( v10 == 2 )
          v19 = a2 + 156;
        v34 = v19;
        LODWORD(v33) = v38;
        v21 = v40;
      }
      else
      {
        if ( v9 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_72;
        v10 = *(_DWORD *)(a2 + 152);
        if ( v10 == 1 )
          v37 = *(unsigned __int16 *)(a2 + 164);
        else
          v37 = 0;
        if ( v10 == 1 )
          v39 = *(_DWORD *)(a2 + 160);
        else
          v39 = 0x7FFFFFFF;
        if ( v10 == 1 )
          v11 = *(_DWORD *)(a2 + 156);
        else
          v11 = 0x7FFFFFFF;
        if ( v10 == 1 )
          v12 = *(_DWORD *)(a2 + 176);
        else
          v12 = 0;
        if ( v10 == 1 )
          v13 = *(_DWORD *)(a2 + 172);
        else
          v13 = 0;
        if ( v10 == 1 )
          v14 = *(_DWORD *)(a2 + 168);
        else
          v14 = 0;
        v15 = *(_DWORD *)(v7 + 204) >> 1;
        if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
          v16 = *(_BYTE *)(v7 + 1341);
        else
          v16 = 0;
        v17 = 0LL;
        if ( v10 == 2 )
          v17 = a2 + 166;
        v18 = 0LL;
        v36 = v17;
        if ( v10 == 2 )
          v18 = a2 + 161;
        v19 = 0LL;
        v35 = v18;
        v20 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V1;
        if ( v10 == 2 )
          v19 = a2 + 156;
        v34 = v19;
        LODWORD(v33) = v37;
        v21 = v39;
      }
      LODWORD(v32) = v21;
      LODWORD(v31) = v11;
      LODWORD(v30) = v12;
      LODWORD(v29) = v13;
      LODWORD(v28) = v14;
      LODWORD(v27) = v10;
      LOBYTE(v26) = v16;
      LOBYTE(v25) = v15 & 1;
      LODWORD(v24) = *(unsigned __int16 *)(v7 + 200);
      Template_pqccxqqqqqqqsss(
        v19,
        v20,
        a1,
        *(_QWORD *)(a2 + 224),
        v24,
        v25,
        v26,
        *(_QWORD *)(v7 + 1416),
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v8 = v41;
      v6 = (_QWORD *)(a2 + 2304);
LABEL_72:
      if ( (*(_DWORD *)(v7 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v25) = 12;
        LODWORD(v24) = *(unsigned __int16 *)(v7 + 200);
        Template_pqn(
          *(unsigned __int16 *)(v7 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
          a1,
          *(_QWORD *)(a2 + 224),
          v24,
          v25,
          v7 + 1340);
      }
      if ( (*(_DWORD *)(v7 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v25) = 16;
        LODWORD(v24) = *(unsigned __int16 *)(v7 + 200);
        Template_pqn(
          *(unsigned __int16 *)(v7 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
          a1,
          *(_QWORD *)(a2 + 224),
          v24,
          v25,
          v7 + 1352);
      }
      v7 = *v8 - 248LL;
      v8 = (_QWORD *)*v8;
      v41 = v8;
    }
    while ( v6 != v8 );
  }
}
