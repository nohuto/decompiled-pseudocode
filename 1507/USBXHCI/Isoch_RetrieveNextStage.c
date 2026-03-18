/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C0026078
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0025190 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0020E80 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0023920 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0023F38 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Acquire @ 0x1C0026754 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferData_Initialize @ 0x1C0027A34 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C0027BD8 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0027D68 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C0027E38 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 */

char __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  int v3; // r14d
  KIRQL v4; // al
  bool v5; // zf
  _QWORD *v6; // r13
  char v7; // r15
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 88);
  v3 = -1073741823;
  *(_QWORD *)(a1 + 320) = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v5 = *(_DWORD *)(a1 + 328) == 5;
  *(_BYTE *)(a1 + 96) = v4;
  if ( v5 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xDu,
        0x34u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_4;
  }
  v6 = (_QWORD *)(a1 + 336);
  v7 = 1;
  if ( (_QWORD *)*v6 == v6 )
    goto LABEL_9;
  v5 = *(_DWORD *)(a1 + 288) == 3;
  v8 = *(_QWORD *)(a1 + 344);
  v36 = v8;
  if ( v5 )
  {
    if ( *(_DWORD *)(v8 + 96) == *(_DWORD *)(v8 + 100) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        0xDu,
        0x35u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, -1, -1073737728, 0, 0);
      goto LABEL_9;
    }
    *(_DWORD *)(v8 + 92) = *(_DWORD *)(v8 + 80) - *(_DWORD *)(v8 + 88);
LABEL_4:
    KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
    return 0;
  }
  if ( (unsigned int)(*(_DWORD *)(v8 + 88) + *(_DWORD *)(v8 + 92)) < *(_DWORD *)(v8 + 80) )
  {
    Isoch_TransferUrb_MarkLatePackets(a1, v8);
    v11 = *(_DWORD *)(v8 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 32) + 12LL * (unsigned int)(v11 - 1) + 148) != -1073414144 )
    {
      v12 = Isoch_Stage_Acquire(v8);
      *(_QWORD *)(a1 + 320) = v12;
      if ( v12 )
      {
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x37u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v8 + 24),
          v12);
        v3 = 0;
      }
      else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          v13,
          0x38u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v8 + 24));
      }
      KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
      goto LABEL_46;
    }
    if ( *(_DWORD *)(v8 + 96) != *(_DWORD *)(v8 + 100) )
    {
      *(_DWORD *)(v8 + 92) = v11 - *(_DWORD *)(v8 + 88);
      goto LABEL_4;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xDu,
        0x36u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    Isoch_Transfer_CompleteCancelable(a1, v8, 0, 0, 1, 1);
  }
LABEL_9:
  KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *(_QWORD *)(a1 + 72),
           &v35);
    if ( v3 < 0 )
      break;
    v9 = Isoch_TransferData_Initialize(a1, v35, &v36);
    if ( v9 >= 0 )
    {
      v14 = v36;
      v15 = Isoch_TransferUrb_Initialize(a1, v36);
      if ( v15 >= 0 )
      {
        Isoch_TransferUrb_MarkLatePackets(a1, v14);
        if ( *(_DWORD *)(*(_QWORD *)(v14 + 32) + 12LL * (unsigned int)(*(_DWORD *)(v14 + 80) - 1) + 148) == -1073414144 )
        {
          v18 = *(_QWORD *)(a1 + 56);
          LODWORD(v32) = *(_DWORD *)(v18 + 144);
          LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v18 + 80),
            4u,
            0xDu,
            0x3Du,
            (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
            v31,
            v32);
          Isoch_Transfer_Complete(a1, v14, 0, 0, 1);
        }
        else if ( *(_DWORD *)(v14 + 64) )
        {
          *(_DWORD *)(v14 + 48) = 1;
          v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01015 + 3144))(
                 WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                 *(_QWORD *)(v14 + 24),
                 Isoch_WdfEvtRequestCancel);
          if ( v3 >= 0 )
          {
            v23 = Isoch_Stage_Acquire(v14);
            *(_QWORD *)(a1 + 320) = v23;
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
              v25 = *(unsigned int *)(*(_QWORD *)(v14 + 32) + 64LL);
              if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 48) )
                v22 = 0LL;
              else
                v22 = *(unsigned __int16 *)(*(_QWORD *)(v24 + 56) + 2 * v25);
              *(_WORD *)(a1 + 104) = v22;
            }
            v26 = *(_QWORD *)(a1 + 56);
            LODWORD(v32) = *(_DWORD *)(v26 + 144);
            LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(v26 + 80),
              4u,
              v22,
              0x40u,
              (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
              v31,
              v32,
              *(_QWORD *)(v14 + 24),
              v23);
            *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v1);
            v27 = *(_QWORD **)(a1 + 344);
            *(_QWORD *)v14 = v6;
            *(_QWORD *)(v14 + 8) = v27;
            if ( (_QWORD *)*v27 != v6 )
              __fastfail(3u);
            *v27 = v14;
            *(_QWORD *)(a1 + 344) = v14;
            KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
            goto LABEL_46;
          }
          v21 = *(_QWORD *)(a1 + 56);
          LODWORD(v34) = v3;
          LODWORD(v32) = *(_DWORD *)(v21 + 144);
          LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(v21 + 80),
            4u,
            v20,
            0x3Fu,
            (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
            v31,
            v32,
            *(_QWORD *)(v14 + 24),
            v34);
          *(_DWORD *)(v14 + 48) = 3;
          Isoch_Transfer_Complete(a1, v14, -1, -1073676288, 0);
        }
        else
        {
          v19 = *(_QWORD *)(a1 + 56);
          LODWORD(v32) = *(_DWORD *)(v19 + 144);
          LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDq(
            *(_QWORD *)(v19 + 80),
            4u,
            v17,
            0x3Eu,
            (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
            v31,
            v32,
            v35);
          Isoch_Transfer_Complete(a1, v14, -1, -1, 1);
        }
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 56);
        LODWORD(v34) = v15;
        LODWORD(v32) = *(_DWORD *)(v16 + 144);
        LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(v16 + 80),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x3Cu,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v31,
          v32,
          v35,
          v34);
        Isoch_Transfer_Complete(a1, v14, -1073414144, -1073739264, 0);
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 56);
      LODWORD(v34) = v9;
      LODWORD(v32) = *(_DWORD *)(v10 + 144);
      LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(v10 + 80),
        2u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        0x3Bu,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        v31,
        v32,
        v35,
        v34);
      Isoch_Transfer_Complete(a1, v36, -1, -1073737728, 0);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v28 = *(_QWORD *)(a1 + 56);
    LODWORD(v33) = v3;
    LODWORD(v32) = *(_DWORD *)(v28 + 144);
    LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v28 + 80),
      5u,
      0xDu,
      0x39u,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v31,
      v32,
      v33);
  }
  if ( !*(_DWORD *)(a1 + 328) )
  {
    v29 = *(_QWORD *)(a1 + 56);
    LODWORD(v32) = *(_DWORD *)(v29 + 144);
    LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v29 + 80),
      3u,
      0xDu,
      0x3Au,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v31,
      v32);
  }
LABEL_46:
  if ( v3 < 0 )
    return 0;
  return v7;
}
