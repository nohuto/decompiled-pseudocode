/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C0009B50
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C00096D0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000897C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008FF8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C0027544 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  __int64 v4; // r15
  unsigned int v5; // r13d
  char v6; // r14
  __int64 i; // rdx
  __int64 v11; // rcx
  char v12; // r10
  unsigned int v13; // ebx
  char v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r14
  KIRQL v22; // si
  __int64 v23; // rax
  int v24; // r8d
  volatile signed __int32 *v25; // rdi
  __int64 j; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  KIRQL result; // al
  KIRQL v31; // r8
  char v32; // r9
  char v33; // cl
  KIRQL v34; // r10
  KIRQL v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  PWDF_DRIVER_GLOBALS v39; // rcx
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-68h]
  int v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+48h] [rbp-40h]
  char v44; // [rsp+90h] [rbp+8h] BYREF
  char v45; // [rsp+A8h] [rbp+20h]

  v45 = a4;
  v4 = *(_QWORD *)(a1 + 976);
  v5 = 0;
  v44 = 0;
  v6 = a4;
  v42 = *(_DWORD *)(a1 + 984);
  v43 = v4;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      for ( i = *(unsigned int *)(a1 + 880); ; i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * i + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)i || (*(_DWORD *)(v11 + 16) & 4) == 0 )
          break;
      }
      v12 = *(_BYTE *)(a1 + 948);
      v13 = 1000;
      LOBYTE(i) = v12;
      v14 = *(_BYTE *)(a1 + 949);
      v15 = *(_DWORD *)(v11 + 16) & 3;
      if ( v12 != v14 )
      {
        do
        {
          v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884) & 3;
          if ( !v16 || v16 == 2 && (v15 & 1) == 0 )
            break;
          if ( v16 == 3 && (v15 & 2) != 0 )
            break;
          LOBYTE(i) = (i + 1) & 0xF;
        }
        while ( (_BYTE)i != v14 );
      }
      if ( (_BYTE)i != v14 )
      {
        v13 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884);
        if ( (_BYTE)i != v12 )
        {
          do
          {
            v17 = (unsigned __int8)i;
            LOBYTE(i) = (i - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v17 + 884) = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884);
          }
          while ( (_BYTE)i != *(_BYTE *)(a1 + 948) );
        }
        *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 948) + 884) = 1000;
        *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
      }
      if ( v13 == 1000 )
      {
        v37 = WdfFunctions_01015;
        v38 = *(_QWORD *)(a1 + 960);
        v39 = WdfDriverGlobals;
        *(_BYTE *)(a1 + 848) = 0;
        v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v37 + 1632))(v39, v38, v15);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v40,
                 "State Machine Tag",
                 1432LL,
                 "drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v5 == -1 )
        HUBMISC_DbgBreak("State machine running for too long", i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
      if ( v13 > 0xFC7 )
      {
        if ( v13 != 4043 && v13 != 4047 )
        {
          if ( v13 != 4067 && v13 != 4071 && v13 != 4075 )
            goto LABEL_35;
          v18 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v18 + 1620) & 0x80u) == 0 )
            goto LABEL_35;
          v20 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v18 + 2160);
          goto LABEL_30;
        }
      }
      else if ( v13 != 4039 )
      {
        if ( v13 == 3006 )
        {
          v21 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v21 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v21 + 1328) + 1620LL) & 0x400) != 0 )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(v21 + 1432),
                4u,
                5u,
                0xEu,
                (__int64)&WPP_db4ec9e0acb4e5ee01c1628295ad4f74_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v21 + 1328) + 1620LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v22 = KfRaiseIrql(2u);
            v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v21 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v23);
            KeLowerIrql(v22);
            *(_QWORD *)(v21 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v21 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v21 + 1424) != 4 )
            *(_DWORD *)(v21 + 1424) = 0;
          goto LABEL_34;
        }
        if ( v13 != 4023 && v13 != 4027 && v13 != 4031 && v13 != 4035 )
          goto LABEL_35;
      }
      v18 = *(_QWORD *)(a1 + 960);
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v18 + 440));
      if ( !WPP_MAIN_CB.Queue.Wcb.DeviceObject )
      {
LABEL_35:
        v4 = v43;
        *a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
        goto LABEL_50;
      }
      v20 = a1 + 1012;
      if ( ((int (__fastcall *)(__int64, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(v19, a1 + 1012) < 0 )
      {
LABEL_34:
        v6 = v45;
        goto LABEL_35;
      }
LABEL_30:
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          *(_QWORD *)(v18 + 248),
          v20);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
          (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            *(_QWORD *)(v18 + 408),
            v20);
      }
      _InterlockedOr((volatile signed __int32 *)(v18 + 1620), 0x40u);
      goto LABEL_34;
    }
    v13 = a2;
    a2 = 1000;
LABEL_50:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v13, &v44) )
      goto LABEL_83;
    v24 = *(_DWORD *)(a1 + 984);
    if ( v24 == 3000 || v24 == 5000 )
    {
      v25 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v24));
        if ( !(_DWORD)j || (*(_DWORD *)(v27 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v27 + 16) & 0x20) != 0 )
      {
        if ( (v25[66] & 0x20) != 0 )
        {
          v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v25);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v28,
            0LL,
            1500LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v25 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v25 + 40LL) & 0x20000) != 0 && (v25[66] & 0x20) == 0 )
      {
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v41) = 1515;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v29,
               0LL,
               0LL,
               v41,
               "drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v25 + 66, 0x20u);
      }
    }
    if ( v44 )
    {
      v44 = 0;
      if ( v13 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
        v31 = *(_BYTE *)(a1 + 948);
        v32 = 0;
        v33 = *(_BYTE *)(a1 + 949);
        v34 = result;
        *a3 = result;
        v35 = v31;
        if ( v31 != v33 )
        {
          while ( 1 )
          {
            result = v35;
            if ( *(_DWORD *)(a1 + 4LL * v35 + 884) == 1002 )
              break;
            v35 = (v35 + 1) & 0xF;
            if ( v35 == v33 )
              goto LABEL_72;
          }
          v32 = 1;
        }
LABEL_72:
        if ( v35 != v33 )
        {
          if ( v35 != v31 )
          {
            do
            {
              v36 = v35;
              v35 = (v35 - 1) & 0xF;
              *(_DWORD *)(a1 + 4 * v36 + 884) = *(_DWORD *)(a1 + 4LL * v35 + 884);
            }
            while ( v35 != *(_BYTE *)(a1 + 948) );
          }
          *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 948) + 884) = 1000;
          result = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
          *(_BYTE *)(a1 + 948) = result;
        }
        if ( !v32 )
        {
          *(_BYTE *)(a1 + 1048) = 1;
          return result;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v34);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4
                                + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 880) + 852) - v42))
                    + 16LL) & 0x10) != 0
      && KeGetCurrentIrql()
      || !v6 && v5 > 0x64 )
    {
      break;
    }
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_87;
LABEL_83:
    *a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 488LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_87:
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  *a3 = result;
  return result;
}
