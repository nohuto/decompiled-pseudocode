/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C002D3BC
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002E980 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C00017A0 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Stage_Release @ 0x1C0002A7C (Bulk_Stage_Release.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000407C (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0004200 (TR_ReleaseDoubleBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Bulk_Transfer_Complete @ 0x1C002E7C4 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002F3D4 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 v7; // r8
  __int64 *NextStage; // r15
  __int64 ***v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 **v12; // rcx
  int v13; // eax
  __int64 **v14; // rax
  __int64 ***v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rax
  _QWORD **result; // rax
  __int64 ***v21; // rbx
  __int64 ****v22; // rax
  __int64 **v23; // rdx
  struct _MDL *v24; // rcx
  __int64 v25; // rdx
  int v26; // r8d
  _QWORD *v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v28; // [rsp+58h] [rbp-28h]
  __int64 *v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v30; // [rsp+68h] [rbp-18h]
  __int64 *v31; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v32; // [rsp+78h] [rbp-8h]

  v30 = &v29;
  v3 = (KSPIN_LOCK *)(a1 + 88);
  v29 = (__int64 *)&v29;
  v32 = &v31;
  v31 = (__int64 *)&v31;
  v28 = (__int64 ***)&v27;
  v27 = &v27;
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
      Bulk_Stage_Release(a1, NextStage, v7);
      ++*((_DWORD *)v5 + 25);
      --*(_DWORD *)(a1 + 300);
    }
    if ( *((_DWORD *)v5 + 12) == 3 )
    {
      v9 = (__int64 ***)v30;
      *v5 = &v29;
      v5[1] = (__int64 **)v9;
      if ( *v9 != &v29 )
        __fastfail(3u);
      *v9 = (__int64 **)v5;
      v30 = (__int64 **)v5;
    }
    else if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01015 + 2048))(
                WdfDriverGlobals,
                v5[3]) >= 0 )
    {
      *((_DWORD *)v5 + 12) = 0;
      v13 = *((_DWORD *)v5 + 13);
      if ( v13 == 1 || v13 == 28 )
      {
        v15 = (__int64 ***)v32;
        *v5 = &v31;
        v5[1] = (__int64 **)v15;
        if ( *v15 != &v31 )
          __fastfail(3u);
        *v15 = (__int64 **)v5;
        v32 = (__int64 **)v5;
      }
      else
      {
        v14 = (__int64 **)v28;
        *v5 = &v27;
        v5[1] = v14;
        if ( *v14 != (__int64 *)&v27 )
          __fastfail(3u);
        *v14 = (__int64 *)v5;
        v28 = v5;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *(unsigned __int8 *)(v10 + 135);
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v10, v11, 14);
      *((_DWORD *)v5 + 12) = 2;
      v12 = *(__int64 ***)(a1 + 344);
      *v5 = (__int64 **)(a1 + 336);
      v5[1] = v12;
      if ( *v12 != (__int64 *)(a1 + 336) )
        __fastfail(3u);
      *v12 = (__int64 *)v5;
      *(_QWORD *)(a1 + 344) = v5;
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v16 = v29;
    if ( v29 == (__int64 *)&v29 )
      break;
    v17 = (__int64 *)*v29;
    if ( (__int64 **)v29[1] != &v29 || (__int64 *)v17[1] != v29 )
      __fastfail(3u);
    v29 = (__int64 *)*v29;
    v17[1] = (__int64)&v29;
    v16[1] = (__int64)v16;
    *v16 = (__int64)v16;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v16 + 13) )
      *((_DWORD *)v16 + 13) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v16, 3221291008LL);
  }
  while ( 1 )
  {
    v18 = v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    v19 = (__int64 *)*v31;
    if ( (__int64 **)v31[1] != &v31 || (__int64 *)v19[1] != v31 )
      __fastfail(3u);
    v31 = (__int64 *)*v31;
    v19[1] = (__int64)&v31;
    v18[1] = (__int64)v18;
    *v18 = (__int64)v18;
    Bulk_Transfer_Complete(a1, v18, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v27;
    if ( v27 == &v27 )
      break;
    v21 = v28;
    v22 = (__int64 ****)v28[1];
    if ( *v28 != &v27 || *v22 != v28 )
      __fastfail(3u);
    v28 = (__int64 ***)v28[1];
    *v22 = (__int64 ***)&v27;
    v21[1] = (__int64 **)v21;
    *v21 = (__int64 **)v21;
    v23 = v21[10];
    *((_DWORD *)v21 + 24) = *((_DWORD *)v21 + 23);
    if ( v23 )
    {
      TR_ReleaseDoubleBuffer(a1, v23);
      v21[10] = 0LL;
    }
    v24 = (struct _MDL *)v21[8];
    if ( v24 && v24 != (struct _MDL *)v21[4][6] && v24 != (struct _MDL *)v21[5][14] )
    {
      IoFreeMdl(v24);
      v21[8] = 0LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01015 + 2264))(WdfDriverGlobals, v21[3]);
    v25 = *(_QWORD *)(a1 + 48);
    v26 = *(unsigned __int8 *)(v25 + 135);
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v25, v26, 15);
  }
  return result;
}
