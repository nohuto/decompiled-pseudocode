/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C000A018
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C0009B90 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0008E34 (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00094AC (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C0029B10 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  __int64 v4; // r15
  unsigned int v5; // r13d
  char v6; // r14
  __int64 i; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r10
  unsigned int v13; // ebx
  unsigned __int8 v14; // dl
  char v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r14
  KIRQL v23; // si
  __int64 v24; // rax
  int v25; // r8d
  volatile signed __int32 *v26; // rdi
  __int64 j; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  KIRQL result; // al
  KIRQL v32; // r8
  char v33; // r9
  char v34; // cl
  KIRQL v35; // r10
  KIRQL v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  PWDF_DRIVER_GLOBALS v40; // rcx
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+90h] [rbp+8h]
  char v45; // [rsp+98h] [rbp+10h] BYREF
  char v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v4 = *(_QWORD *)(a1 + 976);
  v5 = 0;
  v45 = 0;
  v6 = a4;
  v44 = *(_DWORD *)(a1 + 984);
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
      v14 = v12;
      v15 = *(_BYTE *)(a1 + 949);
      v16 = *(_DWORD *)(v11 + 16) & 3;
      if ( v12 != v15 )
      {
        do
        {
          v17 = *(_DWORD *)(a1 + 4LL * v14 + 884) & 3;
          if ( !v17 || v17 == 2 && (v16 & 1) == 0 )
            break;
          if ( v17 == 3 && (v16 & 2) != 0 )
            break;
          v14 = (v14 + 1) & 0xF;
        }
        while ( v14 != v15 );
      }
      if ( v14 != v15 )
      {
        v13 = *(_DWORD *)(a1 + 4LL * v14 + 884);
        if ( v14 != v12 )
        {
          do
          {
            v18 = v14;
            v14 = (v14 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v18 + 884) = *(_DWORD *)(a1 + 4LL * v14 + 884);
          }
          while ( v14 != *(_BYTE *)(a1 + 948) );
        }
        *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 948) + 884) = 1000;
        *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
      }
      if ( v13 == 1000 )
      {
        v38 = WdfFunctions_01015;
        v39 = *(_QWORD *)(a1 + 960);
        v40 = WdfDriverGlobals;
        *(_BYTE *)(a1 + 848) = 0;
        v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v38 + 1632))(v40, v39, v16);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v41,
                 "State Machine Tag",
                 1432LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v5 == -1 )
        HUBMISC_DbgBreak("State machine running for too long");
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
      if ( v13 > 0xFC7 )
      {
        if ( v13 != 4043 && v13 != 4047 )
        {
          if ( v13 != 4067 && v13 != 4071 && v13 != 4075 )
            goto LABEL_35;
          v19 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v19 + 1620) & 0x80u) == 0 )
            goto LABEL_35;
          v21 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v19 + 2160);
          goto LABEL_30;
        }
      }
      else if ( v13 != 4039 )
      {
        if ( v13 == 3006 )
        {
          v22 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v22 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v22 + 1328) + 1620LL) & 0x400) != 0 )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(v22 + 1432),
                4u,
                5u,
                0xEu,
                (__int64)&WPP_f9559d06ee0736efc452eb3edb8e8c8d_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v22 + 1328) + 1620LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v23 = KfRaiseIrql(2u);
            v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v22 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v24);
            KeLowerIrql(v23);
            *(_QWORD *)(v22 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v22 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v22 + 1424) != 4 )
            *(_DWORD *)(v22 + 1424) = 0;
          goto LABEL_34;
        }
        if ( v13 != 4023 && v13 != 4027 && v13 != 4031 && v13 != 4035 )
          goto LABEL_35;
      }
      v19 = *(_QWORD *)(a1 + 960);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v19 + 440));
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
LABEL_35:
        v4 = v43;
        *a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
        goto LABEL_50;
      }
      v21 = a1 + 1012;
      if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v20, a1 + 1012) < 0 )
      {
LABEL_34:
        v6 = v46;
        goto LABEL_35;
      }
LABEL_30:
      if ( g_IoSetActivityIdIrp )
      {
        g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 248), v21);
        if ( g_IoSetActivityIdIrp )
          g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 408), v21);
      }
      _InterlockedOr((volatile signed __int32 *)(v19 + 1620), 0x40u);
      goto LABEL_34;
    }
    v13 = a2;
    a2 = 1000;
LABEL_50:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v13, &v45) )
      goto LABEL_83;
    v25 = *(_DWORD *)(a1 + 984);
    if ( v25 == 3000 || v25 == 5000 )
    {
      v26 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v25));
        if ( !(_DWORD)j || (*(_DWORD *)(v28 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v28 + 16) & 0x20) != 0 )
      {
        if ( (v26[66] & 0x20) != 0 )
        {
          v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v26);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v29,
            0LL,
            1500LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v26 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v26 + 40LL) & 0x20000) != 0 && (v26[66] & 0x20) == 0 )
      {
        v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v42) = 1515;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v30,
               0LL,
               0LL,
               v42,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v26 + 66, 0x20u);
      }
    }
    if ( v45 )
    {
      v45 = 0;
      if ( v13 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
        v32 = *(_BYTE *)(a1 + 948);
        v33 = 0;
        v34 = *(_BYTE *)(a1 + 949);
        v35 = result;
        *a3 = result;
        v36 = v32;
        if ( v32 != v34 )
        {
          while ( 1 )
          {
            result = v36;
            if ( *(_DWORD *)(a1 + 4LL * v36 + 884) == 1002 )
              break;
            v36 = (v36 + 1) & 0xF;
            if ( v36 == v34 )
              goto LABEL_72;
          }
          v33 = 1;
        }
LABEL_72:
        if ( v36 != v34 )
        {
          if ( v36 != v32 )
          {
            do
            {
              v37 = v36;
              v36 = (v36 - 1) & 0xF;
              *(_DWORD *)(a1 + 4 * v37 + 884) = *(_DWORD *)(a1 + 4LL * v36 + 884);
            }
            while ( v36 != *(_BYTE *)(a1 + 948) );
          }
          *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 948) + 884) = 1000;
          result = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
          *(_BYTE *)(a1 + 948) = result;
        }
        if ( !v33 )
        {
          *(_BYTE *)(a1 + 1048) = 1;
          return result;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v35);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4
                                + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 880) + 852) - v44))
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
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 504LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_87:
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  *a3 = result;
  return result;
}
