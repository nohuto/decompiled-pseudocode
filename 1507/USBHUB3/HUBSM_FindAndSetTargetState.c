/*
 * XREFs of HUBSM_FindAndSetTargetState @ 0x1C00083FC
 * Callers:
 *     HUBSM_RunStateMachine @ 0x1C00095D0 (HUBSM_RunStateMachine.c)
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C00050BC (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     Template_ppqqqq @ 0x1C0008128 (Template_ppqqqq.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00081DC (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C00082C8 (WPP_RECORDER_SF_qLLL.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000B444 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_DbgBreak @ 0x1C00268F4 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // r9
  unsigned int v5; // r14d
  char v6; // bp
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  int i; // eax
  __int64 v12; // r15
  _BYTE *v13; // r9
  struct _KEVENT *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rdx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  int v26; // edi
  unsigned __int16 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int16 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // edx
  int v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+50h] [rbp-48h]
  unsigned int v41; // [rsp+A0h] [rbp+8h]
  unsigned int v42; // [rsp+A8h] [rbp+10h]
  int v44; // [rsp+B8h] [rbp+20h]

  v42 = a2;
  v4 = *(_QWORD *)(a1 + 976);
  v5 = *(_DWORD *)(a1 + 880);
  v41 = v5;
  v6 = 1;
  v7 = *(_DWORD *)(a1 + 984);
  v44 = v7;
  *a3 = 0;
  v40 = v4;
  while ( 2 )
  {
    v8 = 1002;
    v9 = 0LL;
    v10 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v7));
    for ( i = *(_DWORD *)(v10 + 32); i != 1000; i = *(_DWORD *)(v10 + 8 * v9 + 32) )
    {
      if ( (_DWORD)a2 == i )
      {
        v8 = *(_DWORD *)(v10 + 8 * v9 + 36);
        if ( v8 != 1002 )
          goto LABEL_10;
        break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    if ( v5 )
    {
      --v5;
      continue;
    }
    break;
  }
LABEL_10:
  LODWORD(v12) = v41;
  v13 = a3;
  if ( v8 <= 0x3EE )
  {
    if ( v8 == 1006 )
    {
      v22 = *(_QWORD **)(a1 + 960);
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _BYTE *))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              v22[60],
              v9,
              a3);
      memset((void *)(*(_QWORD *)(v23 + 184) - 72LL), 0, 0x48uLL);
      *(_DWORD *)(v23 + 48) = -1073741823;
      HUBFDO_CompleteGetDescriptorRequest(*v22, *(unsigned __int16 *)(v22[1] + 200LL), v22[60], -1073741823, 0);
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v22);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v24,
        "User Mode FDO Request",
        577LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      return 0;
    }
    if ( v8 == 1000 )
      return 0;
    if ( v8 != 1002 )
    {
      switch ( v8 )
      {
        case 0x3EBu:
          v15 = *(_QWORD *)(a1 + 960);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _BYTE *))(WdfFunctions_01015 + 2104))(
            WdfDriverGlobals,
            *(_QWORD *)(v15 + 440),
            3221225473LL,
            a3);
          if ( (*(_DWORD *)(v15 + 1620) & 0x40) != 0 )
          {
            *(_QWORD *)(a1 + 1012) = 0LL;
            *(_QWORD *)(a1 + 1020) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v15 + 1620), 0xFFFFFFBF);
          }
          return 0;
        case 0x3ECu:
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
            3011LL,
            v9,
            a3);
          return 0;
        case 0x3EDu:
          v14 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 456LL);
LABEL_18:
          KeSetEvent(v14, 0, 0);
          return 0;
      }
      goto LABEL_38;
    }
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *, _BYTE *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C0057090,
            a3);
    v18 = *(_DWORD *)(a1 + 984);
    v19 = v16;
    switch ( v18 )
    {
      case 2000:
        v20 = 11;
        break;
      case 3000:
        v20 = 12;
        break;
      case 4000:
        v20 = 10;
        break;
      case 5000:
        v20 = 13;
        break;
      default:
        goto LABEL_31;
    }
    v36 = *(_QWORD *)(a1 + 960);
    WPP_RECORDER_SF_qLL(*(_QWORD *)(v16 + 64), v16, v17, v20, v35);
LABEL_31:
    HUBMISC_DbgBreak("Unhandled Event", v19);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
    {
      v21 = (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984));
      LODWORD(v36) = *(_DWORD *)(a1 + 984);
      Template_ppqqqq(
        v21,
        &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v36,
        **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)v21),
        v42,
        0);
    }
    return 0;
  }
  switch ( v8 )
  {
    case 0x3EFu:
      v33 = -1073741630;
      goto LABEL_72;
    case 0x3F0u:
      v33 = -1073741810;
LABEL_72:
      HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v33);
      return 0;
    case 0x3F1u:
      v14 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1592LL);
      goto LABEL_18;
    case 0x3F2u:
      v14 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1568LL);
      goto LABEL_18;
  }
LABEL_38:
  if ( v5 != v41 && v41 > v5 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)(a1 + 984);
      v12 = (unsigned int)(v12 - 1);
      v26 = *(_DWORD *)(a1 + 4 * v12 + 852);
      if ( v25 == 2000 )
      {
        v27 = 16;
        goto LABEL_48;
      }
      if ( v25 == 3000 )
      {
        v27 = 17;
        goto LABEL_48;
      }
      if ( v25 == 4000 )
        break;
      if ( v25 == 5000 )
      {
        v27 = 18;
LABEL_48:
        v36 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL(v10, a2, v9, v27, v35);
      }
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v26;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v12;
      v28 = *(unsigned __int8 *)(a1 + 832);
      v10 = 3 * v28;
      *(_DWORD *)(a1 + 12 * v28) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x1000) != 0 )
      {
        LODWORD(v39) = v12;
        LODWORD(v38) = 1000;
        LODWORD(v37) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v26 - *(_DWORD *)(a1 + 984)));
        LODWORD(v36) = *(_DWORD *)(a1 + 984);
        Template_ppqqqq(
          v10,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          (const GUID *)(a1 + 1012),
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          v36,
          v37,
          v38,
          v39);
      }
      if ( (unsigned int)v12 <= v5 )
      {
        a2 = v42;
        v13 = a3;
        goto LABEL_53;
      }
    }
    v27 = 15;
    goto LABEL_48;
  }
LABEL_53:
  v29 = *(_QWORD *)(v40 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v44));
  if ( (*(_DWORD *)(v29 + 16) & 0x40) != 0 )
    *v13 = 1;
  *(_DWORD *)(a1 + 4LL * v5 + 852) = v8;
  v30 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v5;
  switch ( v30 )
  {
    case 2000:
      v31 = 16;
      goto LABEL_63;
    case 3000:
      v31 = 17;
      goto LABEL_63;
    case 4000:
      v31 = 15;
      goto LABEL_63;
    case 5000:
      v31 = 18;
LABEL_63:
      v36 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v29, a2, v5, v31, v35);
      break;
  }
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v8;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v5;
  v32 = 3LL * *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = v42;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x1000) != 0 )
  {
    LODWORD(v39) = v5;
    LODWORD(v38) = v42;
    LODWORD(v37) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v8 - *(_DWORD *)(a1 + 984)));
    LODWORD(v36) = *(_DWORD *)(a1 + 984);
    Template_ppqqqq(
      v32,
      &USBHUB3_ETW_EVENT_STATE_MACHINE,
      (const GUID *)(a1 + 1012),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      v36,
      v37,
      v38,
      v39);
  }
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition", a2);
  return v6;
}
