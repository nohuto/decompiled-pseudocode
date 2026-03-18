/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C0002900
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0002B40 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0003048 (Isoch_Stage_FreeScatterGatherList.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0027080 (WPP_RECORDER_SF_DDqd.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  __int64 ****v4; // r14
  __int64 ***v5; // rsi
  __int64 i; // rsi
  __int64 **v7; // rbp
  __int64 **v8; // rdx
  int v9; // eax
  __int64 **v10; // rax
  __int64 ****v11; // rcx
  __int64 v12; // r13
  int v13; // r15d
  _QWORD *v14; // rax
  __int64 *v15; // r14
  __int64 **result; // rax
  __int64 *v17; // rax
  __int64 *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 **v19; // [rsp+58h] [rbp-30h]

  v19 = &v18;
  v18 = (__int64 *)&v18;
  v4 = (__int64 ****)(a1 + 336);
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v5 = *v4;
  if ( *v4 != (__int64 ***)v4 )
  {
    do
    {
      if ( v5 == a2 )
        break;
      v7 = *v5;
      v8 = v5[4];
      v9 = *((_DWORD *)v8 + 32);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        (_DWORD)v8,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        23,
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        (char)v5[3],
        v9);
      v10 = *v5;
      v11 = (__int64 ****)v5[1];
      if ( (*v5)[1] != (__int64 *)v5 || *v11 != v5 )
        __fastfail(3u);
      *v11 = (__int64 ***)v10;
      v10[1] = (__int64 *)v11;
      v14 = v19;
      if ( *v19 != (__int64 *)&v18 )
        __fastfail(3u);
      v5[1] = v19;
      *v5 = &v18;
      *v14 = v5;
      v19 = (__int64 **)v5;
      v5 = (__int64 ***)v7;
    }
    while ( v7 != (__int64 **)v4 );
  }
  while ( 1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    v15 = v18;
    result = &v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    v17 = (__int64 *)*v18;
    v13 = 0;
    if ( (__int64 **)v18[1] != &v18 || (__int64 *)v17[1] != v18 )
      __fastfail(3u);
    v18 = (__int64 *)*v18;
    v17[1] = (__int64)&v18;
    v15[1] = (__int64)v15;
    *v15 = (__int64)v15;
    *((_BYTE *)v15 + 117) = *((_BYTE *)v15 + 116);
    *((_BYTE *)v15 + 118) = *((_BYTE *)v15 + 114);
    for ( i = StageQueue_ForwardScanGetNextStage(v15 + 14); i; i = StageQueue_ForwardScanGetNextStage(v15 + 14) )
    {
      Isoch_Stage_FreeScatterGatherList(a1, i);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v12 = *(_QWORD *)i;
      if ( *(_BYTE *)(i + 56) )
      {
        IoFreeMdl(*(PMDL *)(i + 64));
        *(_QWORD *)(i + 64) = 0LL;
        *(_BYTE *)(i + 56) = 0;
      }
      TR_ReleaseSegments(a1, (unsigned __int64 *)(i + 8), 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)(i + 24), 0);
      StageQueue_Release(v12 + 112, i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      ++v13;
    }
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v15, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 328) -= v13;
  }
  return result;
}
