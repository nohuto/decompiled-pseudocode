/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C002A374
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002BA70 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0001998 (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0001B5C (TR_ReleaseDoubleBuffer.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000343C (Bulk_Transfer_PrepareForCompletion.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002C4F0 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 i; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 *v13; // rcx
  int v14; // eax
  __int64 ***v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD **result; // rax
  __int64 **v22; // rbx
  __int64 ***v23; // rax
  __int64 *v24; // rdx
  struct _MDL *v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  _QWORD *v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 **v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-8h]

  v31 = &v30;
  v3 = (KSPIN_LOCK *)(a1 + 88);
  v30 = (__int64)&v30;
  v33 = &v32;
  v32 = (__int64)&v32;
  v29 = &v28;
  v28 = &v28;
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 **)a2 )
      break;
    v6 = *v5;
    if ( v5[1] != (__int64 *)a2 || (__int64 **)v6[1] != v5 )
      __fastfail(3u);
    *a2 = (__int64 **)v6;
    v6[1] = (__int64)a2;
    v5[1] = (__int64 *)v5;
    *v5 = (__int64 *)v5;
    *((_BYTE *)v5 + 117) = *((_BYTE *)v5 + 116);
    *((_BYTE *)v5 + 118) = *((_BYTE *)v5 + 114);
    for ( i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 112);
          ;
          i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 112) )
    {
      v9 = i;
      if ( !i )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
      Bulk_Stage_FreeScatterGatherList(a1, (_QWORD *)v9);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v3);
      v8 = *(_QWORD *)v9;
      if ( *(_BYTE *)(v9 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v9 + 48));
        *(_QWORD *)(v9 + 48) = 0LL;
        *(_BYTE *)(v9 + 44) = 0;
      }
      TR_ReleaseSegments(a1, (unsigned __int64 *)(v9 + 8), 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)(v9 + 24), 0);
      StageQueue_Release((unsigned __int8 *)(v8 + 112), (unsigned __int8 *)v9);
      ++*((_DWORD *)v5 + 25);
      --*(_DWORD *)(a1 + 300);
    }
    if ( *((_DWORD *)v5 + 12) == 3 )
    {
      v10 = v31;
      if ( (__int64 *)*v31 != &v30 )
        __fastfail(3u);
      v5[1] = v31;
      *v5 = &v30;
      *v10 = (__int64)v5;
      v31 = (__int64 *)v5;
    }
    else if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 2048))(
                WdfDriverGlobals,
                v5[3]) >= 0 )
    {
      v14 = *((_DWORD *)v5 + 13);
      *((_DWORD *)v5 + 12) = 0;
      if ( v14 == 1 || v14 == 28 )
      {
        v16 = v33;
        if ( (__int64 *)*v33 != &v32 )
          __fastfail(3u);
        v5[1] = v33;
        *v5 = &v32;
        *v16 = (__int64)v5;
        v33 = (__int64 *)v5;
      }
      else
      {
        v15 = (__int64 ***)v29;
        if ( *v29 != (__int64 *)&v28 )
          __fastfail(3u);
        v5[1] = (__int64 *)v29;
        *v5 = (__int64 *)&v28;
        *v15 = v5;
        v29 = v5;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 48);
      v12 = *(unsigned __int8 *)(v11 + 135);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v11, v12, 14);
      *((_DWORD *)v5 + 12) = 2;
      v13 = *(__int64 **)(a1 + 344);
      if ( *v13 != a1 + 336 )
        __fastfail(3u);
      *v5 = (__int64 *)(a1 + 336);
      v5[1] = v13;
      *v13 = (__int64)v5;
      *(_QWORD *)(a1 + 344) = v5;
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v17 = v30;
    if ( (__int64 *)v30 == &v30 )
      break;
    v18 = *(_QWORD *)v30;
    if ( *(__int64 **)(v30 + 8) != &v30 || *(_QWORD *)(v18 + 8) != v30 )
      __fastfail(3u);
    v30 = *(_QWORD *)v30;
    *(_QWORD *)(v18 + 8) = &v30;
    *(_QWORD *)(v17 + 8) = v17;
    *(_QWORD *)v17 = v17;
    if ( *(_DWORD *)(a1 + 64) && !*(_DWORD *)(v17 + 52) )
      *(_DWORD *)(v17 + 52) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_PrepareForCompletion(a1, v17);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(v17 + 24),
      *(unsigned int *)(v17 + 56));
  }
  while ( 1 )
  {
    v19 = v32;
    if ( (__int64 *)v32 == &v32 )
      break;
    v20 = *(_QWORD *)v32;
    if ( *(__int64 **)(v32 + 8) != &v32 || *(_QWORD *)(v20 + 8) != v32 )
      __fastfail(3u);
    v32 = *(_QWORD *)v32;
    *(_QWORD *)(v20 + 8) = &v32;
    *(_QWORD *)(v19 + 8) = v19;
    *(_QWORD *)v19 = v19;
    Bulk_Transfer_PrepareForCompletion(a1, v19);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(v19 + 24),
      *(unsigned int *)(v19 + 56));
  }
  while ( 1 )
  {
    result = &v28;
    if ( v28 == &v28 )
      break;
    v22 = v29;
    v23 = (__int64 ***)v29[1];
    if ( *v29 != (__int64 *)&v28 || *v23 != v29 )
      __fastfail(3u);
    v29 = (__int64 **)v29[1];
    *v23 = &v28;
    v22[1] = (__int64 *)v22;
    *v22 = (__int64 *)v22;
    v24 = v22[10];
    *((_DWORD *)v22 + 24) = *((_DWORD *)v22 + 23);
    if ( v24 )
    {
      TR_ReleaseDoubleBuffer(a1, v24);
      v22[10] = 0LL;
    }
    v25 = (struct _MDL *)v22[8];
    if ( v25 && v25 != (struct _MDL *)v22[4][6] && v25 != (struct _MDL *)v22[5][14] )
    {
      IoFreeMdl(v25);
      v22[8] = 0LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 2264))(WdfDriverGlobals, v22[3]);
    v26 = *(_QWORD *)(a1 + 48);
    v27 = *(unsigned __int8 *)(v26 + 135);
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v26, v27, 15);
  }
  return result;
}
