/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C000CC00
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0002EF0 (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00017DC (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C0002B30 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C0003674 (Isoch_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000D300 (WPP_RECORDER_SF_DDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0028D30 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A330 (WPP_RECORDER_SF_DDq.c)
 *     Isoch_Stage_Acquire @ 0x1C002BCC8 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C002BEF8 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C002BFC8 (Isoch_Transfer_Complete.c)
 */

bool __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v2; // r12
  int v3; // ebp
  KIRQL v4; // al
  bool v5; // zf
  _QWORD *v7; // r15
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rax
  PWDF_DRIVER_GLOBALS v29; // rcx
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // edx
  __int64 *v38; // rax
  __int64 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h]
  __int64 v42; // [rsp+80h] [rbp+8h] BYREF
  __int64 v43; // [rsp+88h] [rbp+10h] BYREF

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
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_4;
  }
  v7 = (_QWORD *)(a1 + 336);
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_10;
  v5 = *(_DWORD *)(a1 + 288) == 3;
  v8 = *(_QWORD *)(a1 + 344);
  v43 = v8;
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
      Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v8, 0xFFFFFFFF, 0xC0001000, 0, 0);
      goto LABEL_10;
    }
    *(_DWORD *)(v8 + 92) = *(_DWORD *)(v8 + 80) - *(_DWORD *)(v8 + 88);
LABEL_4:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 0;
  }
  if ( (unsigned int)(*(_DWORD *)(v8 + 88) + *(_DWORD *)(v8 + 92)) >= *(_DWORD *)(v8 + 80) )
  {
LABEL_10:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v42);
    if ( v3 < 0 )
    {
LABEL_37:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v32 = *(_QWORD *)(a1 + 56);
        LODWORD(v41) = v3;
        LODWORD(v40) = *(_DWORD *)(v32 + 144);
        LODWORD(v39) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(v32 + 80),
          5u,
          0xDu,
          0x39u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v39,
          v40,
          v41);
      }
      if ( !*(_DWORD *)(a1 + 328) )
      {
        v33 = *(_QWORD *)(a1 + 56);
        LODWORD(v40) = *(_DWORD *)(v33 + 144);
        LODWORD(v39) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v33 + 80),
          3u,
          0xDu,
          0x3Au,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v39,
          v40);
      }
      return v3 >= 0;
    }
    while ( 1 )
    {
      v9 = Isoch_TransferData_Initialize((_QWORD *)a1, v42, &v43);
      if ( v9 < 0 )
      {
        v10 = *(_QWORD *)(a1 + 48);
        v11 = *(unsigned __int8 *)(v10 + 135);
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v10,
          v11,
          59,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v11,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v42,
          v9);
        v12 = v43;
        v13 = -1073737728;
        goto LABEL_34;
      }
      v20 = v43;
      v21 = Isoch_TransferUrb_Initialize(a1, v43);
      if ( v21 < 0 )
        break;
      Isoch_TransferUrb_MarkLatePackets(a1, v20);
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 32) + 12LL * (unsigned int)(*(_DWORD *)(v20 + 80) - 1) + 148) == -1073414144 )
      {
        v26 = *(_QWORD *)(a1 + 56);
        LODWORD(v40) = *(_DWORD *)(v26 + 144);
        LODWORD(v39) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v26 + 80),
          4u,
          0xDu,
          0x3Du,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v39,
          v40);
        Isoch_Transfer_Complete(a1, v20, 0, 0, 1);
      }
      else
      {
        if ( *(_DWORD *)(v20 + 64) )
        {
          v28 = WdfFunctions_01015;
          v29 = WdfDriverGlobals;
          *(_DWORD *)(v20 + 48) = 1;
          v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(v28 + 3144))(
                 v29,
                 *(_QWORD *)(v20 + 24),
                 Isoch_WdfEvtRequestCancel);
          if ( v3 >= 0 )
          {
            v34 = Isoch_Stage_Acquire(v20);
            *(_QWORD *)(a1 + 320) = v34;
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
              v36 = *(unsigned int *)(*(_QWORD *)(v20 + 32) + 64LL);
              if ( (unsigned int)v36 < *(_DWORD *)(v35 + 48) )
                v2 = *(_WORD *)(*(_QWORD *)(v35 + 56) + 2 * v36);
              *(_WORD *)(a1 + 104) = v2;
            }
            v37 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v37) = 4;
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v37,
              v35,
              64,
              (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v20 + 24),
              v34);
            *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v38 = *(__int64 **)(a1 + 344);
            *(_QWORD *)v20 = v7;
            *(_QWORD *)(v20 + 8) = v38;
            if ( (_QWORD *)*v38 != v7 )
              __fastfail(3u);
            *v38 = v20;
            *(_QWORD *)(a1 + 344) = v20;
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
            return v3 >= 0;
          }
          v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v31,
            v30,
            63,
            (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v20 + 24),
            v3);
          v13 = -1073676288;
          *(_DWORD *)(v20 + 48) = 3;
          v12 = v20;
LABEL_34:
          v24 = -1;
LABEL_35:
          Isoch_Transfer_Complete(a1, v12, v24, v13, 0);
          goto LABEL_36;
        }
        v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v27,
          v25,
          62,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v42);
        Isoch_Transfer_Complete(a1, v20, -1, -1, 1);
      }
LABEL_36:
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v42);
      if ( v3 < 0 )
        goto LABEL_37;
    }
    v22 = *(_QWORD *)(a1 + 48);
    v23 = *(unsigned __int8 *)(v22 + 135);
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v22,
      v23,
      60,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v23,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      v42,
      v21);
    v13 = -1073739264;
    v24 = -1073414144;
    v12 = v20;
    goto LABEL_35;
  }
  Isoch_TransferUrb_MarkLatePackets(a1, v8);
  v14 = *(_DWORD *)(v8 + 80);
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 32) + 12LL * (unsigned int)(v14 - 1) + 148) == -1073414144 )
  {
    if ( *(_DWORD *)(v8 + 96) != *(_DWORD *)(v8 + 100) )
    {
      *(_DWORD *)(v8 + 92) = v14 - *(_DWORD *)(v8 + 88);
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
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v8, 0, 0, 1, 1);
    goto LABEL_10;
  }
  v15 = Isoch_Stage_Acquire(v8);
  *(_QWORD *)(a1 + 320) = v15;
  if ( v15 )
  {
    v17 = *(_QWORD *)(a1 + 48);
    v18 = *(unsigned __int8 *)(v17 + 135);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v17,
      v18,
      55,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v18,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v8 + 24),
      v15);
    v3 = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v19) = 5;
      WPP_RECORDER_SF_DDq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v19,
        v16,
        56,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v8 + 24));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  }
  return v3 >= 0;
}
