/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C000B750
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0002F34 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_Stage_Acquire @ 0x1C000159C (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_Initialize @ 0x1C00017A4 (Bulk_TransferData_Initialize.c)
 *     TR_AcquireDoubleBuffer @ 0x1C00019A0 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0001A90 (TR_IsUrbUsingChainedMdl.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C00025A0 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003164 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000BE08 (WPP_RECORDER_SF_DDDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0029250 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Transfer_Complete @ 0x1C002ED3C (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002F78C (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002FA5C (WPP_RECORDER_SF_DDDqd.c)
 */

char __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r15
  int v3; // ebp
  KIRQL v4; // al
  int v5; // r8d
  int v6; // edx
  __int64 v8; // rdx
  int v9; // r8d
  _DWORD *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  PWDF_DRIVER_GLOBALS v19; // rcx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // r8
  int v23; // edx
  __int64 *v24; // rax
  int v25; // edx
  _QWORD *v26; // r14
  int v27; // r8d
  __int64 v28; // rbx
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 *v33; // rax
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rdx
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
        (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v5);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 0;
  }
  v26 = (_QWORD *)(a1 + 320);
  if ( (_QWORD *)*v26 != v26 )
  {
    v10 = *(_DWORD **)(a1 + 328);
    v11 = v10[22];
    if ( v10[24] < v11 )
    {
      if ( *(_DWORD *)(a1 + 284) != 3 )
      {
        v12 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 328));
        *(_QWORD *)(a1 + 312) = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(a1 + 48);
          v9 = *(unsigned __int8 *)(v8 + 135);
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v8, v9, 21);
        }
        else
        {
          v3 = -1073741823;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v14) = 5;
            WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v14, v13, 22);
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
      }
      if ( v10[26] != v10[25] )
      {
        v10[24] = v11;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return 1;
      }
      Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 328), 0xC0001000, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v37);
    if ( v3 < 0 )
      break;
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v37,
            off_1C0043070);
    Bulk_TransferData_Initialize(a1, (_QWORD *)v28, v37);
    v29 = *(_DWORD *)(v28 + 88);
    if ( v29 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v28 + 40) + 272LL) && v29 <= 8 )
      {
        v30 = 1;
      }
      else if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v28 + 32))
             || v32 > *(_DWORD *)(v31 + 24)
             || (v33 = TR_AcquireDoubleBuffer(v31), *(_QWORD *)(v28 + 80) = v33, v34 = v33 == 0LL, v30 = 2, v34) )
      {
        v30 = 3;
      }
    }
    else
    {
      v30 = 0;
    }
    *(_DWORD *)(v28 + 60) = v30;
    if ( (int)Bulk_TransferData_ConfigureBuffer(v28) >= 0 )
    {
      v17 = WdfFunctions_01015;
      v18 = *(_QWORD *)(v28 + 24);
      v19 = WdfDriverGlobals;
      *(_DWORD *)(v28 + 48) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v17 + 3144))(
             v19,
             v18,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        v22 = Bulk_Stage_Acquire(v28);
        *(_QWORD *)(a1 + 312) = v22;
        if ( !*(_DWORD *)(a1 + 300) )
        {
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
          v36 = *(unsigned int *)(*(_QWORD *)(v28 + 32) + 64LL);
          if ( (unsigned int)v36 < *(_DWORD *)(v35 + 48) )
            v1 = *(_WORD *)(*(_QWORD *)(v35 + 56) + 2 * v36);
          *(_WORD *)(a1 + 104) = v1;
        }
        v23 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v23, v22, 26);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        v24 = *(__int64 **)(a1 + 328);
        if ( (_QWORD *)*v24 != v26 )
          __fastfail(3u);
        *(_QWORD *)v28 = v26;
        *(_QWORD *)(v28 + 8) = v24;
        *v24 = v28;
        *(_QWORD *)(a1 + 328) = v28;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
      }
      v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v21, v20, 25);
      *(_DWORD *)(v28 + 48) = 3;
      Bulk_Transfer_Complete(a1, v28, 3221291008LL);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 48);
      v16 = *(unsigned __int8 *)(v15 + 135);
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v15, v16, 24);
      Bulk_Transfer_Complete(a1, v28, 3221229568LL);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v25 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v25) = 5;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v25,
      v27,
      23,
      (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v3);
  }
  return v3 >= 0;
}
