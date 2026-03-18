/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C000DE10
 * Callers:
 *     Bulk_MappingLoop @ 0x1C00024C8 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0002708 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C0003480 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Stage_Acquire @ 0x1C0003C10 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_Initialize @ 0x1C0003F30 (Bulk_TransferData_Initialize.c)
 *     TR_AcquireDoubleBuffer @ 0x1C0004100 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0004244 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000E460 (WPP_RECORDER_SF_DDDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0028C20 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Transfer_Complete @ 0x1C002E7C4 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002F3D4 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002F65C (WPP_RECORDER_SF_DDDx.c)
 */

char __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  int v3; // esi
  KIRQL v4; // al
  int v5; // r8d
  int v6; // edx
  _QWORD *v8; // r15
  _DWORD *v9; // rdi
  unsigned int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdi
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 *v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  PWDF_DRIVER_GLOBALS v29; // rcx
  int v30; // r8d
  int v31; // edx
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // edx
  __int64 *v36; // rax
  __int64 v37; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  *(_QWORD *)(a1 + 312) = 0LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v5 = *(_DWORD *)(a1 + 296);
  *(_BYTE *)(a1 + 96) = v4;
  if ( *(_DWORD *)(a1 + 300) == v5 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v6,
        13,
        20,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v5);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 0;
  }
  v8 = (_QWORD *)(a1 + 320);
  if ( (_QWORD *)*v8 == v8 || (v9 = *(_DWORD **)(a1 + 328), v10 = v9[22], v9[24] >= v10) )
  {
LABEL_11:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v37);
    if ( v3 < 0 )
    {
LABEL_32:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v32 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v32) = 5;
        WPP_RECORDER_SF_DDDd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v32,
          v11,
          23,
          (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          v3);
      }
      return v3 >= 0;
    }
    while ( 1 )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v37,
              off_1C0041098);
      Bulk_TransferData_Initialize(a1, (_QWORD *)v12, v37);
      v13 = *(_DWORD *)(v12 + 88);
      if ( v13 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 40) + 272LL) && v13 <= 8 )
        {
          v14 = 1;
        }
        else if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v12 + 32))
               || v21 > *(_DWORD *)(v20 + 24)
               || (v22 = TR_AcquireDoubleBuffer(v20), *(_QWORD *)(v12 + 80) = v22, v23 = v22 == 0LL, v14 = 2, v23) )
        {
          v14 = 3;
        }
      }
      else
      {
        v14 = 0;
      }
      *(_DWORD *)(v12 + 60) = v14;
      if ( (int)Bulk_TransferData_ConfigureBuffer(v12) >= 0 )
      {
        v27 = WdfFunctions_01015;
        v28 = *(_QWORD *)(v12 + 24);
        v29 = WdfDriverGlobals;
        *(_DWORD *)(v12 + 48) = 1;
        v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v27 + 3144))(
               v29,
               v28,
               Bulk_WdfEvtRequestCancel);
        if ( v3 >= 0 )
        {
          *(_QWORD *)(a1 + 312) = Bulk_Stage_Acquire(v12);
          if ( !*(_DWORD *)(a1 + 300) )
          {
            v33 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
            v34 = *(unsigned int *)(*(_QWORD *)(v12 + 32) + 64LL);
            if ( (unsigned int)v34 < *(_DWORD *)(v33 + 48) )
              v1 = *(_WORD *)(*(_QWORD *)(v33 + 56) + 2 * v34);
            *(_WORD *)(a1 + 104) = v1;
          }
          v35 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v35) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v35, v33, 26);
          *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
          v36 = *(__int64 **)(a1 + 328);
          *(_QWORD *)v12 = v8;
          *(_QWORD *)(v12 + 8) = v36;
          if ( (_QWORD *)*v36 != v8 )
            __fastfail(3u);
          *v36 = v12;
          *(_QWORD *)(a1 + 328) = v12;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
          return v3 >= 0;
        }
        v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v31) = 3;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v31, v30, 25);
        v26 = 3221291008LL;
        *(_DWORD *)(v12 + 48) = 3;
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 48);
        v25 = *(unsigned __int8 *)(v24 + 135);
        LOBYTE(v24) = 3;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v24, v25, 24);
        v26 = 3221229568LL;
      }
      Bulk_Transfer_Complete(a1, v12, v26);
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v37);
      if ( v3 < 0 )
        goto LABEL_32;
    }
  }
  if ( *(_DWORD *)(a1 + 284) == 3 )
  {
    if ( v9[26] == v9[25] )
    {
      Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 328), 0xC0001000, 1);
      goto LABEL_11;
    }
    v9[24] = v10;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 1;
  }
  else
  {
    v15 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 328));
    *(_QWORD *)(a1 + 312) = v15;
    if ( v15 )
    {
      v17 = *(_QWORD *)(a1 + 48);
      v18 = *(unsigned __int8 *)(v17 + 135);
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v17, v18, 21);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    }
    else
    {
      v3 = -1073741823;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v19) = 5;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v19, v16, 22);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    }
    return v3 >= 0;
  }
}
