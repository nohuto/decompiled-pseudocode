/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C002B4EC
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002A758 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     TR_AcquireDoubleBuffer @ 0x1C001FED8 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C00208A0 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0020D70 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Stage_Acquire @ 0x1C002B9B0 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C002C930 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_Initialize @ 0x1C002CB50 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x1C002CC38 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002CC70 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002DA9C (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002DF04 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C002E188 (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  int v3; // esi
  KIRQL v4; // al
  __int64 v5; // r9
  int v6; // r8d
  _QWORD *v7; // r15
  char v8; // r14
  _DWORD *v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // r8d
  __int64 *v22; // rax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // edx
  __int64 *v35; // rax
  __int64 v36; // rcx
  int v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h]
  __int64 v42; // [rsp+40h] [rbp-38h]
  __int64 v43; // [rsp+80h] [rbp+8h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 88);
  *(_QWORD *)(a1 + 312) = 0LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v6 = *(_DWORD *)(a1 + 296);
  *(_BYTE *)(a1 + 96) = v4;
  if ( *(_DWORD *)(a1 + 300) == v6 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xDu,
        0x14u,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v6);
    KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
    return 0;
  }
  v7 = (_QWORD *)(a1 + 320);
  v8 = 1;
  if ( (_QWORD *)*v7 != v7 )
  {
    v9 = *(_DWORD **)(a1 + 328);
    v10 = v9[22];
    if ( v9[24] < v10 )
    {
      if ( *(_DWORD *)(a1 + 284) != 3 )
      {
        v16 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 328));
        *(_QWORD *)(a1 + 312) = v16;
        if ( v16 )
        {
          v18 = *(_QWORD *)(a1 + 48);
          v19 = *(unsigned __int8 *)(v18 + 135);
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v18, v19, 21);
        }
        else
        {
          v3 = -1073741823;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v20) = 5;
            WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v20, v17, 22);
          }
        }
LABEL_19:
        KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
        goto LABEL_42;
      }
      if ( v9[26] != v9[25] )
      {
        v9[24] = v10;
        KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
        return v8;
      }
      LOBYTE(v5) = 1;
      Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 328), 3221229568LL, v5);
    }
  }
  KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *(_QWORD *)(a1 + 72),
           &v43);
    if ( v3 < 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v43,
            off_1C0040068);
    Bulk_TransferData_Initialize(a1, v12, v43);
    v13 = *(_DWORD *)(v12 + 88);
    v14 = *(_QWORD *)(v12 + 40);
    if ( v13 )
    {
      if ( *(_BYTE *)(v14 + 272) && v13 <= 8 )
      {
        v15 = 1;
      }
      else if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v12 + 32))
             || v21 > *(_DWORD *)(v14 + 24)
             || (v22 = TR_AcquireDoubleBuffer(v14), *(_QWORD *)(v12 + 80) = v22, v23 = v22 == 0LL, v15 = 2, v23) )
      {
        v15 = 3;
      }
    }
    else
    {
      v15 = 0;
    }
    *(_DWORD *)(v12 + 60) = v15;
    v24 = Bulk_TransferData_ConfigureBuffer(v12, v14);
    if ( v24 >= 0 )
    {
      v28 = *(_QWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 48) = 1;
      v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)()))(WdfFunctions_01015 + 3144))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             v28,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 312) = Bulk_Stage_Acquire(v12);
        if ( !*(_DWORD *)(a1 + 300) )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL);
          v33 = *(unsigned int *)(*(_QWORD *)(v12 + 32) + 64LL);
          if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 48) )
            v31 = 0;
          else
            v31 = *(unsigned __int16 *)(*(_QWORD *)(v32 + 56) + 2 * v33);
          *(_WORD *)(a1 + 104) = v31;
        }
        v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v34, v31, 26);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v1);
        v35 = *(__int64 **)(a1 + 328);
        *(_QWORD *)v12 = v7;
        *(_QWORD *)(v12 + 8) = v35;
        if ( (_QWORD *)*v35 != v7 )
          __fastfail(3u);
        *v35 = v12;
        *(_QWORD *)(a1 + 328) = v12;
        goto LABEL_19;
      }
      v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v30) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v30,
        v29,
        25,
        v38,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(v12 + 24),
        v3);
      v27 = 3221291008LL;
      *(_DWORD *)(v12 + 48) = 3;
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 48);
      v26 = *(unsigned __int8 *)(v25 + 135);
      LOBYTE(v25) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v25,
        v26,
        24,
        v38,
        v26,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v43,
        v24);
      v27 = 3221229568LL;
    }
    Bulk_Transfer_Complete(a1, v12, v27);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v36 = *(_QWORD *)(a1 + 56);
    LODWORD(v42) = v3;
    LODWORD(v41) = *(_DWORD *)(a1 + 64);
    LODWORD(v40) = *(_DWORD *)(v36 + 144);
    LODWORD(v39) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(v36 + 80),
      5u,
      v11,
      0x17u,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      v39,
      v40,
      v41,
      v42);
  }
LABEL_42:
  if ( v3 < 0 )
    return 0;
  return v8;
}
