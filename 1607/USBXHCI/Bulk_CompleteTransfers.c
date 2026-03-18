/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C002D90C
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002EEF0 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C00018F0 (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0001A54 (TR_ReleaseDoubleBuffer.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002978 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Stage_Release @ 0x1C000330C (Bulk_Stage_Release.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Bulk_Transfer_Complete @ 0x1C002ED3C (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002FA5C (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 *NextStage; // r15
  _QWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 **v11; // rcx
  int v12; // eax
  __int64 ****v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rax
  _QWORD **result; // rax
  __int64 ***v20; // rbx
  __int64 ****v21; // rax
  __int64 **v22; // rdx
  struct _MDL *v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  _QWORD *v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v27; // [rsp+58h] [rbp-28h]
  __int64 *v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v29; // [rsp+68h] [rbp-18h]
  __int64 *v30; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v31; // [rsp+78h] [rbp-8h]

  v29 = &v28;
  v3 = (KSPIN_LOCK *)(a1 + 88);
  v28 = (__int64 *)&v28;
  v31 = &v30;
  v30 = (__int64 *)&v30;
  v27 = (__int64 ***)&v26;
  v26 = &v26;
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 ***)a2 )
      break;
    v6 = *v5;
    if ( v5[1] != (__int64 **)a2 || v6[1] != (__int64 *)v5 )
      __fastfail(3u);
    *a2 = (__int64 ***)v6;
    v6[1] = (__int64 *)a2;
    v5[1] = (__int64 **)v5;
    *v5 = (__int64 **)v5;
    *((_BYTE *)v5 + 117) = *((_BYTE *)v5 + 116);
    *((_BYTE *)v5 + 118) = *((_BYTE *)v5 + 114);
    while ( 1 )
    {
      NextStage = (__int64 *)StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 112);
      if ( !NextStage )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
      Bulk_Stage_FreeScatterGatherList(a1, NextStage);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v3);
      Bulk_Stage_Release(a1, NextStage);
      ++*((_DWORD *)v5 + 25);
      --*(_DWORD *)(a1 + 300);
    }
    if ( *((_DWORD *)v5 + 12) == 3 )
    {
      v8 = v29;
      if ( *v29 != (__int64 *)&v28 )
        __fastfail(3u);
      v5[1] = v29;
      *v5 = &v28;
      *v8 = v5;
      v29 = (__int64 **)v5;
    }
    else if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01015 + 2048))(
                WdfDriverGlobals,
                v5[3]) >= 0 )
    {
      *((_DWORD *)v5 + 12) = 0;
      v12 = *((_DWORD *)v5 + 13);
      if ( v12 == 1 || v12 == 28 )
      {
        v14 = v31;
        if ( *v31 != (__int64 *)&v30 )
          __fastfail(3u);
        v5[1] = v31;
        *v5 = &v30;
        *v14 = v5;
        v31 = (__int64 **)v5;
      }
      else
      {
        v13 = (__int64 ****)v27;
        if ( *v27 != &v26 )
          __fastfail(3u);
        v5[1] = (__int64 **)v27;
        *v5 = &v26;
        *v13 = v5;
        v27 = v5;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 48);
      v10 = *(unsigned __int8 *)(v9 + 135);
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v9, v10, 14);
      *((_DWORD *)v5 + 12) = 2;
      v11 = *(__int64 ***)(a1 + 344);
      if ( *v11 != (__int64 *)(a1 + 336) )
        __fastfail(3u);
      *v5 = (__int64 **)(a1 + 336);
      v5[1] = v11;
      *v11 = (__int64 *)v5;
      *(_QWORD *)(a1 + 344) = v5;
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v15 = v28;
    if ( v28 == (__int64 *)&v28 )
      break;
    v16 = (__int64 *)*v28;
    if ( (__int64 **)v28[1] != &v28 || (__int64 *)v16[1] != v28 )
      __fastfail(3u);
    v28 = (__int64 *)*v28;
    v16[1] = (__int64)&v28;
    v15[1] = (__int64)v15;
    *v15 = (__int64)v15;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v15 + 13) )
      *((_DWORD *)v15 + 13) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v15, 3221291008LL);
  }
  while ( 1 )
  {
    v17 = v30;
    if ( v30 == (__int64 *)&v30 )
      break;
    v18 = (__int64 *)*v30;
    if ( (__int64 **)v30[1] != &v30 || (__int64 *)v18[1] != v30 )
      __fastfail(3u);
    v30 = (__int64 *)*v30;
    v18[1] = (__int64)&v30;
    v17[1] = (__int64)v17;
    *v17 = (__int64)v17;
    Bulk_Transfer_Complete(a1, v17, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v26;
    if ( v26 == &v26 )
      break;
    v20 = v27;
    v21 = (__int64 ****)v27[1];
    if ( *v27 != &v26 || *v21 != v27 )
      __fastfail(3u);
    v27 = (__int64 ***)v27[1];
    *v21 = (__int64 ***)&v26;
    v20[1] = (__int64 **)v20;
    *v20 = (__int64 **)v20;
    v22 = v20[10];
    *((_DWORD *)v20 + 24) = *((_DWORD *)v20 + 23);
    if ( v22 )
    {
      TR_ReleaseDoubleBuffer(a1, v22);
      v20[10] = 0LL;
    }
    v23 = (struct _MDL *)v20[8];
    if ( v23 && v23 != (struct _MDL *)v20[4][6] && v23 != (struct _MDL *)v20[5][14] )
    {
      IoFreeMdl(v23);
      v20[8] = 0LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01015 + 2264))(WdfDriverGlobals, v20[3]);
    v24 = *(_QWORD *)(a1 + 48);
    v25 = *(unsigned __int8 *)(v24 + 135);
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v24, v25, 15);
  }
  return result;
}
