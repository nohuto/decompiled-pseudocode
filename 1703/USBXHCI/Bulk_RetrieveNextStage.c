/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C000C460
 * Callers:
 *     Bulk_MappingLoop @ 0x1C00030D0 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_Stage_Acquire @ 0x1C00015F4 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_Initialize @ 0x1C000181C (Bulk_TransferData_Initialize.c)
 *     TR_AcquireDoubleBuffer @ 0x1C0001A58 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0001BA0 (TR_IsUrbUsingChainedMdl.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C00026C0 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000343C (Bulk_Transfer_PrepareForCompletion.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000CB5C (WPP_RECORDER_SF_DDDqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0024A24 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00258BC (WPP_RECORDER_SF_DDDd.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002C4F0 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002C784 (WPP_RECORDER_SF_DDDx.c)
 */

_BOOL8 __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r15
  int v3; // ebx
  KIRQL v4; // al
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  int v8; // r8d
  _QWORD *v10; // rbp
  _DWORD *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  PWDF_DRIVER_GLOBALS v18; // rcx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // r8
  int v24; // edx
  __int64 *v25; // rax
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rsi
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
    v3 = -1073741823;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v6,
        13,
        20,
        (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v5);
    }
LABEL_6:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return v3 >= 0;
  }
  v10 = (_QWORD *)(a1 + 320);
  if ( (_QWORD *)*v10 != v10 )
  {
    v11 = *(_DWORD **)(a1 + 328);
    v12 = v11[22];
    if ( v11[24] < v12 )
    {
      if ( *(_DWORD *)(a1 + 284) != 3 )
      {
        v13 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 328));
        *(_QWORD *)(a1 + 312) = v13;
        if ( v13 )
        {
          v7 = *(_QWORD *)(a1 + 48);
          v8 = *(unsigned __int8 *)(v7 + 135);
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v7, v8, 21);
        }
        else
        {
          v3 = -1073741823;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v15) = 5;
            WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v15, v14, 22);
          }
        }
        goto LABEL_6;
      }
      if ( v11[26] != v11[25] )
      {
        v11[24] = v12;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
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
            off_1C0045070);
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
      v16 = WdfFunctions_01015;
      v17 = *(_QWORD *)(v28 + 24);
      v18 = WdfDriverGlobals;
      *(_DWORD *)(v28 + 48) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v16 + 3144))(
             v18,
             v17,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        v23 = Bulk_Stage_Acquire(v28);
        *(_QWORD *)(a1 + 312) = v23;
        if ( !*(_DWORD *)(a1 + 300) )
        {
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
          v36 = *(unsigned int *)(*(_QWORD *)(v28 + 32) + 64LL);
          if ( *(_DWORD *)(v35 + 24) > 1u && (unsigned int)v36 < *(_DWORD *)(v35 + 48) )
            v1 = *(_WORD *)(*(_QWORD *)(v35 + 56) + 2 * v36);
          *(_WORD *)(a1 + 104) = v1;
        }
        v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v24, v23, 26);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        v25 = *(__int64 **)(a1 + 328);
        if ( (_QWORD *)*v25 != v10 )
          __fastfail(3u);
        *(_QWORD *)v28 = v10;
        *(_QWORD *)(v28 + 8) = v25;
        *v25 = v28;
        *(_QWORD *)(a1 + 328) = v28;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v3 >= 0;
      }
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v20, v19, 25);
      *(_DWORD *)(v28 + 48) = 3;
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 48);
      v22 = *(unsigned __int8 *)(v21 + 135);
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v21, v22, 24);
    }
    Bulk_Transfer_PrepareForCompletion(a1, v28);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(v28 + 24),
      *(unsigned int *)(v28 + 56));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v26 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v26,
      v27,
      23,
      (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v3);
  }
  return v3 >= 0;
}
