/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C002979C
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002D1B0 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001FE54 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0020958 (TR_ReleaseDoubleBuffer.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C002C0E8 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_Release @ 0x1C002C8C4 (Bulk_Stage_Release.c)
 *     Bulk_Transfer_Complete @ 0x1C002CC38 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002DF04 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 NextStage; // r15
  __int64 ***v8; // rax
  int v9; // eax
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
  char v25; // al
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // [rsp+20h] [rbp-60h]
  _QWORD *v29; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v30; // [rsp+58h] [rbp-28h]
  __int64 *v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v32; // [rsp+68h] [rbp-18h]
  __int64 *v33; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v34; // [rsp+78h] [rbp-8h]

  v32 = &v31;
  v3 = (KSPIN_LOCK *)(a1 + 88);
  v31 = (__int64 *)&v31;
  v34 = &v33;
  v33 = (__int64 *)&v33;
  v30 = (__int64 ***)&v29;
  v29 = &v29;
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
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 112);
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
      v8 = (__int64 ***)v32;
      *v5 = &v31;
      v5[1] = (__int64 **)v8;
      if ( *v8 != &v31 )
        __fastfail(3u);
      *v8 = (__int64 **)v5;
      v32 = (__int64 **)v5;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64 **))(WdfFunctions_01015 + 2048))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             v5[3]);
      if ( v9 >= 0 )
      {
        *((_DWORD *)v5 + 12) = 0;
        v13 = *((_DWORD *)v5 + 13);
        if ( v13 == 1 || v13 == 28 )
        {
          v15 = (__int64 ***)v34;
          *v5 = &v33;
          v5[1] = (__int64 **)v15;
          if ( *v15 != &v33 )
            __fastfail(3u);
          *v15 = (__int64 **)v5;
          v34 = (__int64 **)v5;
        }
        else
        {
          v14 = (__int64 **)v30;
          *v5 = &v29;
          v5[1] = v14;
          if ( *v14 != (__int64 *)&v29 )
            __fastfail(3u);
          *v14 = (__int64 *)v5;
          v30 = v5;
        }
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 48);
        v11 = *(unsigned __int8 *)(v10 + 135);
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v10,
          v11,
          14,
          v28,
          v11,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          (char)v5[3],
          v9);
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
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
  while ( 1 )
  {
    v16 = v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    v17 = (__int64 *)*v31;
    if ( (__int64 **)v31[1] != &v31 || (__int64 *)v17[1] != v31 )
      __fastfail(3u);
    v31 = (__int64 *)*v31;
    v17[1] = (__int64)&v31;
    v16[1] = (__int64)v16;
    *v16 = (__int64)v16;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v16 + 13) )
      *((_DWORD *)v16 + 13) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v16, 3221291008LL);
  }
  while ( 1 )
  {
    v18 = v33;
    if ( v33 == (__int64 *)&v33 )
      break;
    v19 = (__int64 *)*v33;
    if ( (__int64 **)v33[1] != &v33 || (__int64 *)v19[1] != v33 )
      __fastfail(3u);
    v33 = (__int64 *)*v33;
    v19[1] = (__int64)&v33;
    v18[1] = (__int64)v18;
    *v18 = (__int64)v18;
    Bulk_Transfer_Complete(a1, v18, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v29;
    if ( v29 == &v29 )
      break;
    v21 = v30;
    v22 = (__int64 ****)v30[1];
    if ( *v30 != &v29 || *v22 != v30 )
      __fastfail(3u);
    v30 = (__int64 ***)v30[1];
    *v22 = (__int64 ***)&v29;
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
    v25 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64 **))(WdfFunctions_01015 + 2264))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v21[3]);
    v26 = *(_QWORD *)(a1 + 48);
    v27 = *(unsigned __int8 *)(v26 + 135);
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_DDDqd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v26,
      v27,
      15,
      v28,
      v27,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      (char)v21[3],
      v25);
  }
  return result;
}
