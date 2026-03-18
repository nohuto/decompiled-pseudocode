/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C0001570
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002B838 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C00017A0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00017DC (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0001BA0 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0028D30 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Stage_Release @ 0x1C002BE8C (Isoch_Stage_Release.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  __int64 ****v4; // r14
  __int64 ***v5; // rdi
  __int64 **v6; // rsi
  __int64 **v7; // rdx
  int v8; // eax
  __int64 **v9; // rcx
  __int64 ****v10; // rax
  __int64 ***v11; // rax
  __int64 *v12; // rdi
  __int64 **result; // rax
  __int64 *v14; // rax
  int v15; // r14d
  __int64 i; // rsi
  __int64 *v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 **v18; // [rsp+58h] [rbp-20h]

  v18 = &v17;
  v17 = (__int64 *)&v17;
  v4 = (__int64 ****)(a1 + 336);
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v5 = *v4;
  if ( *v4 != (__int64 ***)v4 )
  {
    do
    {
      if ( v5 == a2 )
        break;
      v6 = *v5;
      v7 = v5[4];
      v8 = *((_DWORD *)v7 + 32);
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        (_DWORD)v7,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        23,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        (char)v5[3],
        v8);
      v9 = *v5;
      v10 = (__int64 ****)v5[1];
      if ( (*v5)[1] != (__int64 *)v5 || *v10 != v5 )
        __fastfail(3u);
      *v10 = (__int64 ***)v9;
      v9[1] = (__int64 *)v10;
      v11 = (__int64 ***)v18;
      *v5 = &v17;
      v5[1] = (__int64 **)v11;
      if ( *v11 != &v17 )
        __fastfail(3u);
      *v11 = (__int64 **)v5;
      v18 = (__int64 **)v5;
      v5 = (__int64 ***)v6;
    }
    while ( v6 != (__int64 **)v4 );
  }
  while ( 1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    v12 = v17;
    result = &v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    v14 = (__int64 *)*v17;
    v15 = 0;
    if ( (__int64 **)v17[1] != &v17 || (__int64 *)v14[1] != v17 )
      __fastfail(3u);
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    v12[1] = (__int64)v12;
    *v12 = (__int64)v12;
    *((_BYTE *)v12 + 117) = *((_BYTE *)v12 + 116);
    *((_BYTE *)v12 + 118) = *((_BYTE *)v12 + 114);
    for ( i = StageQueue_ForwardScanGetNextStage(v12 + 14); i; i = StageQueue_ForwardScanGetNextStage(v12 + 14) )
    {
      Isoch_Stage_FreeScatterGatherList(a1, i);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      Isoch_Stage_Release(a1, i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      ++v15;
    }
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v12, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 328) -= v15;
  }
  return result;
}
