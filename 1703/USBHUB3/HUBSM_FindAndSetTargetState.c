/*
 * XREFs of HUBSM_FindAndSetTargetState @ 0x1C0008E34
 * Callers:
 *     HUBSM_RunStateMachine @ 0x1C000A018 (HUBSM_RunStateMachine.c)
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C000586C (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     Template_ppqqqq @ 0x1C0008B3C (Template_ppqqqq.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0008BF4 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0008CE4 (WPP_RECORDER_SF_qLLL.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BEF8 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_DbgBreak @ 0x1C0029B10 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // r15d
  __int64 v6; // r8
  char v8; // bp
  int v9; // r13d
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r13
  _BYTE *v15; // r8
  struct _KEVENT *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  int v28; // esi
  unsigned __int16 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // r9
  __int64 v34; // rax
  unsigned int v35; // edx
  int v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  __int64 v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+50h] [rbp-48h]
  unsigned int v43; // [rsp+A0h] [rbp+8h]
  int v45; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 880);
  *a3 = 0;
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 976);
  v43 = v3;
  v8 = 1;
  v9 = *(_DWORD *)(a1 + 984);
  v42 = v6;
  v45 = v9;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = 1002;
    v12 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v9));
    if ( *(_DWORD *)(v12 + 32) != 1000 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      while ( a2 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v10 + 36);
      if ( v11 != 1002 )
        break;
    }
LABEL_8:
    if ( !v5 )
      break;
    --v5;
  }
  LODWORD(v14) = v43;
  v15 = a3;
  if ( v11 <= 0x3EE )
  {
    if ( v11 == 1006 )
    {
      v24 = *(_QWORD **)(a1 + 960);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _BYTE *, __int64))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              v24[60],
              a3,
              1002LL);
      memset((void *)(*(_QWORD *)(v25 + 184) - 72LL), 0, 0x48uLL);
      *(_DWORD *)(v25 + 48) = -1073741823;
      HUBFDO_CompleteGetDescriptorRequest(*v24, *(unsigned __int16 *)(v24[1] + 200LL), v24[60], -1073741823, 0);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v24);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v26,
        "User Mode FDO Request",
        577LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      return 0;
    }
    if ( v11 == 1000 )
      return 0;
    if ( v11 != 1002 )
    {
      switch ( v11 )
      {
        case 0x3EBu:
          v17 = *(_QWORD *)(a1 + 960);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2104))(
            WdfDriverGlobals,
            *(_QWORD *)(v17 + 440),
            3221225473LL,
            1002LL);
          if ( (*(_DWORD *)(v17 + 1620) & 0x40) != 0 )
          {
            *(_QWORD *)(a1 + 1012) = 0LL;
            *(_QWORD *)(a1 + 1020) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v17 + 1620), 0xFFFFFFBF);
          }
          return 0;
        case 0x3ECu:
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
            3011LL,
            a3,
            1002LL);
          return 0;
        case 0x3EDu:
          v16 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 456LL);
LABEL_18:
          KeSetEvent(v16, 0, 0);
          return 0;
      }
      goto LABEL_38;
    }
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *, __int64))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110,
            1002LL);
    v21 = *(_DWORD *)(a1 + 984);
    switch ( v21 )
    {
      case 2000:
        v22 = 11;
        break;
      case 3000:
        v22 = 12;
        break;
      case 4000:
        v22 = 10;
        break;
      case 5000:
        v22 = 13;
        break;
      default:
        goto LABEL_31;
    }
    v38 = *(_QWORD *)(a1 + 960);
    WPP_RECORDER_SF_qLL(*(_QWORD *)(v19 + 64), v18, v20, v22, v37);
LABEL_31:
    HUBMISC_DbgBreak("Unhandled Event");
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
    {
      v23 = (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984));
      LODWORD(v38) = *(_DWORD *)(a1 + 984);
      Template_ppqqqq(
        v23,
        &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v38,
        **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)v23),
        a2,
        0);
    }
    return 0;
  }
  switch ( v11 )
  {
    case 0x3EFu:
      v35 = -1073741630;
      goto LABEL_72;
    case 0x3F0u:
      v35 = -1073741810;
LABEL_72:
      HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v35);
      return 0;
    case 0x3F1u:
      v16 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1592LL);
      goto LABEL_18;
    case 0x3F2u:
      v16 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1568LL);
      goto LABEL_18;
  }
LABEL_38:
  if ( v5 != v43 && v43 > v5 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(a1 + 984);
      v14 = (unsigned int)(v14 - 1);
      v28 = *(_DWORD *)(a1 + 4 * v14 + 852);
      if ( v27 == 2000 )
      {
        v29 = 16;
        goto LABEL_48;
      }
      if ( v27 == 3000 )
      {
        v29 = 17;
        goto LABEL_48;
      }
      if ( v27 == 4000 )
        break;
      if ( v27 == 5000 )
      {
        v29 = 18;
LABEL_48:
        v38 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL(v12, v10, (__int64)v15, v29, v37);
      }
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v28;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v14;
      v30 = *(unsigned __int8 *)(a1 + 832);
      v12 = 3 * v30;
      *(_DWORD *)(a1 + 12 * v30) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
      {
        LODWORD(v41) = v14;
        LODWORD(v40) = 1000;
        LODWORD(v39) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v28 - *(_DWORD *)(a1 + 984)));
        LODWORD(v38) = *(_DWORD *)(a1 + 984);
        Template_ppqqqq(
          v12,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          (const GUID *)(a1 + 1012),
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          v38,
          v39,
          v40,
          v41);
      }
      if ( (unsigned int)v14 <= v5 )
      {
        v15 = a3;
        goto LABEL_53;
      }
    }
    v29 = 15;
    goto LABEL_48;
  }
LABEL_53:
  v31 = *(_QWORD *)(v42 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v45));
  if ( (*(_DWORD *)(v31 + 16) & 0x40) != 0 )
    *v15 = 1;
  *(_DWORD *)(a1 + 4LL * v5 + 852) = v11;
  v32 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v5;
  switch ( v32 )
  {
    case 2000:
      v33 = 16;
      goto LABEL_63;
    case 3000:
      v33 = 17;
      goto LABEL_63;
    case 4000:
      v33 = 15;
      goto LABEL_63;
    case 5000:
      v33 = 18;
LABEL_63:
      v38 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v31, v5, (__int64)v15, v33, v37);
      break;
  }
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v5;
  v34 = *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12 * v34) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
  {
    LODWORD(v41) = v5;
    LODWORD(v40) = a2;
    LODWORD(v39) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v11 - *(_DWORD *)(a1 + 984)));
    LODWORD(v38) = *(_DWORD *)(a1 + 984);
    Template_ppqqqq(
      3 * v34,
      &USBHUB3_ETW_EVENT_STATE_MACHINE,
      (const GUID *)(a1 + 1012),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      v38,
      v39,
      v40,
      v41);
  }
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition");
  return v8;
}
