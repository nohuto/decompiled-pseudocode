/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C000D5E0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C00022FC (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_TransferUrb_Initialize @ 0x1C0001BE0 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0002B40 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_TransferData_Initialize @ 0x1C0002C4C (Isoch_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000DCB0 (WPP_RECORDER_SF_DDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026F80 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0027080 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Stage_Acquire @ 0x1C0028B68 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0028D38 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C0028E10 (Isoch_Transfer_Complete.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v2; // r12
  int v3; // ebx
  KIRQL v4; // al
  bool v5; // zf
  __int64 v6; // rdx
  int v7; // r8d
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rax
  PWDF_DRIVER_GLOBALS v26; // rcx
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
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
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
LABEL_6:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return v3 >= 0;
  }
  v9 = (_QWORD *)(a1 + 336);
  if ( (_QWORD *)*v9 != v9 )
  {
    v5 = *(_DWORD *)(a1 + 288) == 3;
    v10 = *(_QWORD *)(a1 + 344);
    v41 = v10;
    if ( v5 )
    {
      if ( *(_DWORD *)(v10 + 96) != *(_DWORD *)(v10 + 100) )
      {
        *(_DWORD *)(v10 + 92) = *(_DWORD *)(v10 + 80) - *(_DWORD *)(v10 + 88);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
      }
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        0xDu,
        0x35u,
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v10, 0xFFFFFFFF, 0xC0001000, 0, 0);
    }
    else if ( (unsigned int)(*(_DWORD *)(v10 + 92) + *(_DWORD *)(v10 + 88)) < *(_DWORD *)(v10 + 80) )
    {
      Isoch_TransferUrb_MarkLatePackets(a1, v10);
      v11 = *(_DWORD *)(v10 + 80);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 12LL * (unsigned int)(v11 - 1) + 148) != -1073414144 )
      {
        v12 = Isoch_Stage_Acquire(v10);
        *(_QWORD *)(a1 + 320) = v12;
        if ( v12 )
        {
          v6 = *(_QWORD *)(a1 + 48);
          v7 = *(unsigned __int8 *)(v6 + 135);
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v6,
            v7,
            55,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            v7,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v10 + 24),
            v12);
          v3 = 0;
        }
        else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v14) = 5;
          WPP_RECORDER_SF_DDq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v14,
            v13,
            56,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v10 + 24));
        }
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v10 + 96) != *(_DWORD *)(v10 + 100) )
      {
        *(_DWORD *)(v10 + 92) = v11 - *(_DWORD *)(v10 + 88);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xDu,
          0x36u,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v10, 0, 0, 1, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v40);
    if ( v3 < 0 )
      break;
    v15 = Isoch_TransferData_Initialize((_QWORD *)a1, v40, &v41);
    if ( v15 < 0 )
    {
      v20 = *(_QWORD *)(a1 + 48);
      v21 = *(unsigned __int8 *)(v20 + 135);
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v20,
        v21,
        59,
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        v21,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v40,
        v15);
      Isoch_Transfer_Complete(a1, v41, -1, -1073737728, 0);
    }
    else
    {
      v16 = v41;
      v17 = Isoch_TransferUrb_Initialize(a1, v41);
      if ( v17 >= 0 )
      {
        Isoch_TransferUrb_MarkLatePackets(a1, v16);
        if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + 12LL * (unsigned int)(*(_DWORD *)(v16 + 80) - 1) + 148) == -1073414144 )
        {
          v23 = *(_QWORD *)(a1 + 56);
          LODWORD(v38) = *(_DWORD *)(v23 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v23 + 80),
            4u,
            0xDu,
            0x3Du,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            v37,
            v38);
          Isoch_Transfer_Complete(a1, v16, 0, 0, 1);
        }
        else if ( *(_DWORD *)(v16 + 64) )
        {
          v25 = WdfFunctions_01015;
          v26 = WdfDriverGlobals;
          *(_DWORD *)(v16 + 48) = 1;
          v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(v25 + 3144))(
                 v26,
                 *(_QWORD *)(v16 + 24),
                 Isoch_WdfEvtRequestCancel);
          if ( v3 >= 0 )
          {
            v29 = Isoch_Stage_Acquire(v16);
            v30 = v29;
            *(_QWORD *)(a1 + 320) = v29;
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
              v36 = *(unsigned int *)(*(_QWORD *)(v16 + 32) + 64LL);
              if ( *(_DWORD *)(v35 + 24) > 1u && (unsigned int)v36 < *(_DWORD *)(v35 + 48) )
                v2 = *(_WORD *)(*(_QWORD *)(v35 + 56) + 2 * v36);
              *(_WORD *)(a1 + 104) = v2;
            }
            v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v31) = 4;
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v31,
              v30,
              64,
              (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v16 + 24),
              v30);
            *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v32 = *(__int64 **)(a1 + 344);
            if ( (_QWORD *)*v32 != v9 )
              __fastfail(3u);
            *(_QWORD *)v16 = v9;
            *(_QWORD *)(v16 + 8) = v32;
            *v32 = v16;
            *(_QWORD *)(a1 + 344) = v16;
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
            return v3 >= 0;
          }
          v28 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v28,
            v27,
            63,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v16 + 24),
            v3);
          *(_DWORD *)(v16 + 48) = 3;
          Isoch_Transfer_Complete(a1, v16, -1, -1073676288, 0);
        }
        else
        {
          v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_DDq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v24,
            v22,
            62,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            v40);
          Isoch_Transfer_Complete(a1, v16, -1, -1, 1);
        }
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 48);
        v19 = *(unsigned __int8 *)(v18 + 135);
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v18,
          v19,
          60,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          v19,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v40,
          v17);
        Isoch_Transfer_Complete(a1, v16, -1073414144, -1073739264, 0);
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v33 = *(_QWORD *)(a1 + 56);
    LODWORD(v39) = v3;
    LODWORD(v38) = *(_DWORD *)(v33 + 144);
    LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v33 + 80),
      5u,
      0xDu,
      0x39u,
      (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
      v37,
      v38,
      v39);
  }
  if ( !*(_DWORD *)(a1 + 328) )
  {
    v34 = *(_QWORD *)(a1 + 56);
    LODWORD(v38) = *(_DWORD *)(v34 + 144);
    LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v34 + 80),
      3u,
      0xDu,
      0x3Au,
      (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
      v37,
      v38);
  }
  return v3 >= 0;
}
