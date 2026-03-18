/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C000C8B0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C00021E0 (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_TransferUrb_Initialize @ 0x1C0001AC0 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_TransferData_Initialize @ 0x1C0002AB8 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C00039CC (Isoch_TransferUrb_MarkLatePackets.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000CF64 (WPP_RECORDER_SF_DDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029360 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A950 (WPP_RECORDER_SF_DDq.c)
 *     Isoch_Stage_Acquire @ 0x1C002C2E4 (Isoch_Stage_Acquire.c)
 *     Isoch_Transfer_Complete @ 0x1C002C514 (Isoch_Transfer_Complete.c)
 */

bool __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v2; // r12
  int v3; // ebp
  KIRQL v4; // al
  bool v5; // zf
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rdi
  int v10; // r8d
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  PWDF_DRIVER_GLOBALS v25; // rcx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+38h] [rbp-40h]
  __int64 v40; // [rsp+80h] [rbp+8h] BYREF
  __int64 v41; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  v3 = -1073741823;
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
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_4;
  }
  v34 = (_QWORD *)(a1 + 336);
  if ( (_QWORD *)*v34 == v34 )
    goto LABEL_22;
  v5 = *(_DWORD *)(a1 + 288) == 3;
  v9 = *(_QWORD *)(a1 + 344);
  v41 = v9;
  if ( v5 )
  {
    if ( *(_DWORD *)(v9 + 96) != *(_DWORD *)(v9 + 100) )
    {
      *(_DWORD *)(v9 + 92) = *(_DWORD *)(v9 + 80) - *(_DWORD *)(v9 + 88);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      return 0;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xDu,
      0x35u,
      (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v9, 0xFFFFFFFF, 0xC0001000, 0, 0);
    goto LABEL_22;
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 88) + *(_DWORD *)(v9 + 92)) >= *(_DWORD *)(v9 + 80) )
  {
LABEL_22:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    while ( 1 )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v40);
      if ( v3 < 0 )
        break;
      v14 = Isoch_TransferData_Initialize((_QWORD *)a1, v40, &v41);
      if ( v14 < 0 )
      {
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(unsigned __int8 *)(v19 + 135);
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v19,
          v20,
          59,
          (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
          v20,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v40,
          v14);
        Isoch_Transfer_Complete(a1, v41, -1, -1073737728, 0);
      }
      else
      {
        v15 = v41;
        v16 = Isoch_TransferUrb_Initialize(a1, v41);
        if ( v16 >= 0 )
        {
          Isoch_TransferUrb_MarkLatePackets(a1, v15);
          if ( *(_DWORD *)(*(_QWORD *)(v15 + 32) + 12LL * (unsigned int)(*(_DWORD *)(v15 + 80) - 1) + 148) == -1073414144 )
          {
            v22 = *(_QWORD *)(a1 + 56);
            LODWORD(v38) = *(_DWORD *)(v22 + 144);
            LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(v22 + 80),
              4u,
              0xDu,
              0x3Du,
              (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
              v37,
              v38);
            Isoch_Transfer_Complete(a1, v15, 0, 0, 1);
          }
          else if ( *(_DWORD *)(v15 + 64) )
          {
            v24 = WdfFunctions_01015;
            v25 = WdfDriverGlobals;
            *(_DWORD *)(v15 + 48) = 1;
            v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(v24 + 3144))(
                   v25,
                   *(_QWORD *)(v15 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v3 >= 0 )
            {
              v28 = Isoch_Stage_Acquire(v15);
              v29 = v28;
              *(_QWORD *)(a1 + 320) = v28;
              if ( !*(_DWORD *)(a1 + 328) )
              {
                v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
                v36 = *(unsigned int *)(*(_QWORD *)(v15 + 32) + 64LL);
                if ( (unsigned int)v36 < *(_DWORD *)(v35 + 48) )
                  v2 = *(_WORD *)(*(_QWORD *)(v35 + 56) + 2 * v36);
                *(_WORD *)(a1 + 104) = v2;
              }
              v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v30) = 4;
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v30,
                v29,
                64,
                (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                *(_QWORD *)(v15 + 24),
                v29);
              *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
              v31 = *(__int64 **)(a1 + 344);
              if ( (_QWORD *)*v31 != v34 )
                __fastfail(3u);
              *(_QWORD *)v15 = v34;
              *(_QWORD *)(v15 + 8) = v31;
              *v31 = v15;
              *(_QWORD *)(a1 + 344) = v15;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
              return v3 >= 0;
            }
            v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v27,
              v26,
              63,
              (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v15 + 24),
              v3);
            *(_DWORD *)(v15 + 48) = 3;
            Isoch_Transfer_Complete(a1, v15, -1, -1073676288, 0);
          }
          else
          {
            v23 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_DDq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v23,
              v21,
              62,
              (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v40);
            Isoch_Transfer_Complete(a1, v15, -1, -1, 1);
          }
        }
        else
        {
          v17 = *(_QWORD *)(a1 + 48);
          v18 = *(unsigned __int8 *)(v17 + 135);
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v17,
            v18,
            60,
            (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
            v18,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            v40,
            v16);
          Isoch_Transfer_Complete(a1, v15, -1073414144, -1073739264, 0);
        }
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v32 = *(_QWORD *)(a1 + 56);
      LODWORD(v39) = v3;
      LODWORD(v38) = *(_DWORD *)(v32 + 144);
      LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v32 + 80),
        5u,
        0xDu,
        0x39u,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        v37,
        v38,
        v39);
    }
    if ( !*(_DWORD *)(a1 + 328) )
    {
      v33 = *(_QWORD *)(a1 + 56);
      LODWORD(v38) = *(_DWORD *)(v33 + 144);
      LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v33 + 80),
        3u,
        0xDu,
        0x3Au,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        v37,
        v38);
    }
    return v3 >= 0;
  }
  Isoch_TransferUrb_MarkLatePackets(a1, v9);
  v10 = *(_DWORD *)(v9 + 80);
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 12LL * (unsigned int)(v10 - 1) + 148) == -1073414144 )
  {
    if ( *(_DWORD *)(v9 + 96) != *(_DWORD *)(v9 + 100) )
    {
      *(_DWORD *)(v9 + 92) = v10 - *(_DWORD *)(v9 + 88);
LABEL_4:
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      return 0;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xDu,
        0x36u,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v9, 0, 0, 1, 1);
    goto LABEL_22;
  }
  v11 = Isoch_Stage_Acquire(v9);
  *(_QWORD *)(a1 + 320) = v11;
  if ( v11 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    v8 = *(unsigned __int8 *)(v7 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v7,
      v8,
      55,
      (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
      v8,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v9 + 24),
      v11);
    v3 = 0;
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_DDq(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v13,
      v12,
      56,
      (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v9 + 24));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v3 >= 0;
}
