/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008A78
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C0009150 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C00095D0 (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     Template_ppqqqq @ 0x1C0008128 (Template_ppqqqq.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C00082C8 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  unsigned int *v1; // r12
  __int64 v3; // r14
  int v4; // ebp
  __int64 v5; // r15
  int i; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rax
  KSPIN_LOCK *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  __int64 v14; // r8
  KIRQL v15; // r12
  int j; // edi
  __int64 v17; // rbp
  unsigned int v18; // ebx
  char v19; // r9
  unsigned __int8 v20; // cl
  unsigned __int8 k; // dl
  __int64 v22; // rax
  int v23; // ebx
  int v24; // eax
  unsigned __int16 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // rbp
  KIRQL v37; // bl
  __int64 v38; // rax
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  int v43; // eax
  int v44; // ebx
  unsigned __int16 v45; // r9
  __int64 v46; // rax
  int v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  int v53; // [rsp+90h] [rbp+8h]
  int v54; // [rsp+98h] [rbp+10h]
  unsigned int *v55; // [rsp+A0h] [rbp+18h]

  v1 = *(unsigned int **)(a1 + 976);
  v3 = *(unsigned int *)(a1 + 880);
  v4 = *(_DWORD *)(a1 + 984);
  v55 = v1;
  v5 = *(_QWORD *)&v1[2 * (*(_DWORD *)(a1 + 4 * v3 + 852) - v4)];
  for ( i = (*(__int64 (**)(void))(v5 + 8))(); ; i = (*(__int64 (__fastcall **)(__int64))(v5 + 8))(a1) )
  {
    v7 = *(_QWORD *)(v5 + 24);
    v54 = i;
    if ( !v7 )
      goto LABEL_8;
    v8 = 0LL;
    if ( *(_DWORD *)(v7 + 4) == 1002 )
      goto LABEL_7;
    v9 = *(unsigned int *)(a1 + 952);
    v10 = *(_DWORD **)(v5 + 24);
    while ( ((unsigned int)v9 & *v10) != (_DWORD)v9 )
    {
      v8 = (unsigned int)(v8 + 1);
      v10 = (_DWORD *)(v7 + 8 * v8);
      if ( v10[1] == 1002 )
        goto LABEL_7;
    }
    v23 = *(_DWORD *)(v7 + 8 * v8 + 4);
    if ( v23 == 1002 )
    {
LABEL_7:
      v54 = 1001;
LABEL_8:
      v11 = (KSPIN_LOCK *)(a1 + 840);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
      for ( j = v4; ; v5 = *(_QWORD *)&v55[2 * (*(_DWORD *)(a1 + 4 * v3 + 852) - j)] )
      {
        LODWORD(v17) = 0;
        v53 = 0;
        if ( *(_DWORD *)(v5 + 32) != 1000 )
        {
          v13 = (unsigned int *)(v5 + 32);
          do
          {
            if ( v13[1] != 1000 )
              break;
            v18 = *v13;
            v19 = 0;
            v20 = *(_BYTE *)(a1 + 948);
            for ( k = v20; k != *(_BYTE *)(a1 + 949); k = (k + 1) & 0xF )
            {
              v14 = *(unsigned int *)(a1 + 4LL * k + 884);
              if ( (_DWORD)v14 == v18 )
              {
                v19 = 1;
              }
              else
              {
                v22 = v20;
                v20 = (v20 + 1) & 0xF;
                *(_DWORD *)(a1 + 4 * v22 + 884) = v14;
              }
            }
            LOBYTE(v12) = v20;
            if ( v20 != *(_BYTE *)(a1 + 949) )
            {
              do
              {
                v28 = v12 & 0xF;
                LOBYTE(v12) = (v12 + 1) & 0xF;
                *(_DWORD *)(a1 + 4 * v28 + 884) = 1000;
              }
              while ( (_BYTE)v12 != *(_BYTE *)(a1 + 949) );
            }
            *(_BYTE *)(a1 + 949) = v20;
            if ( !v19 )
            {
              v11 = (KSPIN_LOCK *)(a1 + 840);
              goto LABEL_65;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v15);
            if ( v18 > 0xFC7 )
            {
              v39 = v18 - 4043;
              if ( v39 )
              {
                v40 = v39 - 4;
                if ( v40 )
                {
                  v41 = v40 - 20;
                  if ( v41 )
                  {
                    v42 = v41 - 4;
                    if ( v42 )
                    {
                      if ( v42 != 4 )
                        goto LABEL_50;
                    }
                  }
                  v33 = *(_QWORD *)(a1 + 960);
                  if ( (*(_DWORD *)(v33 + 1620) & 0x80u) == 0 )
                    goto LABEL_50;
                  v35 = a1 + 1012;
                  *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v33 + 2160);
LABEL_45:
                  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
                      *(_QWORD *)(v33 + 248),
                      v35);
                    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                      (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
                        *(_QWORD *)(v33 + 408),
                        v35);
                  }
                  _InterlockedOr((volatile signed __int32 *)(v33 + 1620), 0x40u);
LABEL_49:
                  LODWORD(v17) = v53;
                  goto LABEL_50;
                }
              }
            }
            else if ( v18 != 4039 )
            {
              v29 = v18 - 3006;
              if ( !v29 )
              {
                v36 = *(_QWORD *)(a1 + 960);
                if ( (*(_DWORD *)(v36 + 1336) & 2) != 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v36 + 1328) + 1620LL) & 0x400) != 0 )
                  {
                    WPP_RECORDER_SF_(
                      *(_QWORD *)(v36 + 1432),
                      4u,
                      5u,
                      0xEu,
                      (__int64)&WPP_db4ec9e0acb4e5ee01c1628295ad4f74_Traceguids);
                    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v36 + 1328) + 1620LL), 0xFFFFFBFF);
                  }
                }
                else
                {
                  v37 = KfRaiseIrql(2u);
                  v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v36 + 1328));
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                    WdfDriverGlobals,
                    v38);
                  KeLowerIrql(v37);
                  *(_QWORD *)(v36 + 1328) = 0LL;
                }
                _InterlockedAnd((volatile signed __int32 *)(v36 + 1336), 0xFFFFFFFE);
                if ( *(_DWORD *)(v36 + 1424) != 4 )
                  *(_DWORD *)(v36 + 1424) = 0;
                goto LABEL_49;
              }
              v30 = v29 - 1017;
              if ( v30 )
              {
                v31 = v30 - 4;
                if ( v31 )
                {
                  v32 = v31 - 4;
                  if ( v32 )
                  {
                    if ( v32 != 4 )
                      goto LABEL_50;
                  }
                }
              }
            }
            v33 = *(_QWORD *)(a1 + 960);
            v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v33 + 440));
            if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
            {
              v35 = a1 + 1012;
              if ( ((int (__fastcall *)(__int64, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(v34, a1 + 1012) >= 0 )
                goto LABEL_45;
              goto LABEL_49;
            }
LABEL_50:
            v11 = (KSPIN_LOCK *)(a1 + 840);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_65:
            v17 = (unsigned int)(v17 + 1);
            v53 = v17;
            v13 = (unsigned int *)(v5 + 32 + 8 * v17);
          }
          while ( *v13 != 1000 );
        }
        if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        {
          KeReleaseSpinLock(v11, v15);
          v27 = v54;
          *(_DWORD *)(a1 + 880) = v3;
          return v27;
        }
        v43 = *(_DWORD *)(a1 + 984);
        v3 = (unsigned int)(v3 - 1);
        v44 = *(_DWORD *)(a1 + 4 * v3 + 852);
        switch ( v43 )
        {
          case 2000:
            v45 = 16;
            break;
          case 3000:
            v45 = 17;
            break;
          case 4000:
            v45 = 15;
            break;
          case 5000:
            v45 = 18;
            break;
          default:
            goto LABEL_76;
        }
        v49 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL((__int64)v13, v12, v14, v45, v48);
LABEL_76:
        *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v44;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
        v46 = *(unsigned __int8 *)(a1 + 832);
        *(_DWORD *)(a1 + 12 * v46) = 1000;
        *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x1000) != 0 )
        {
          LODWORD(v52) = v3;
          LODWORD(v51) = 1000;
          LODWORD(v50) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v44 - *(_DWORD *)(a1 + 984)));
          LODWORD(v49) = *(_DWORD *)(a1 + 984);
          Template_ppqqqq(
            3 * v46,
            &USBHUB3_ETW_EVENT_STATE_MACHINE,
            (const GUID *)(a1 + 1012),
            *(_QWORD *)(a1 + 1032),
            *(_QWORD *)(a1 + 960),
            v49,
            v50,
            v51,
            v52);
        }
        v11 = (KSPIN_LOCK *)(a1 + 840);
        v13 = v55;
      }
    }
    v3 = (unsigned int)(v3 + 1);
    *(_DWORD *)(a1 + 4 * v3 + 852) = v23;
    v24 = *(_DWORD *)(a1 + 984);
    *(_DWORD *)(a1 + 880) = v3;
    switch ( v24 )
    {
      case 2000:
        v25 = 16;
        break;
      case 3000:
        v25 = 17;
        break;
      case 4000:
        v25 = 15;
        break;
      case 5000:
        v25 = 18;
        break;
      default:
        goto LABEL_25;
    }
    v49 = *(_QWORD *)(a1 + 960);
    WPP_RECORDER_SF_qLLL(v7, v8, v9, v25, v48);
LABEL_25:
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v23;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x1000) != 0 )
    {
      LODWORD(v52) = v3;
      v26 = (unsigned int)(v23 - *(_DWORD *)(a1 + 984));
      LODWORD(v51) = 1000;
      LODWORD(v50) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8 * v26);
      LODWORD(v49) = *(_DWORD *)(a1 + 984);
      Template_ppqqqq(
        v26,
        &USBHUB3_ETW_EVENT_STATE_MACHINE,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v49,
        v50,
        v51,
        v52);
    }
    v5 = *(_QWORD *)&v1[2 * (v23 - v4)];
    if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 )
    {
      if ( KeGetCurrentIrql() )
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 472LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
  return 1003;
}
