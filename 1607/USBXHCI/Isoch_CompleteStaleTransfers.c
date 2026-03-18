/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C00027D0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000B270 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002BE48 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002978 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0002EB0 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029360 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  __int64 ****v4; // r14
  __int64 ***v5; // rsi
  __int64 i; // r15
  __int64 **v7; // rbp
  __int64 **v8; // rdx
  int v9; // eax
  __int64 **v10; // rax
  __int64 ****v11; // rcx
  int v12; // r14d
  _QWORD *v13; // rax
  __int64 *v14; // rsi
  __int64 **result; // rax
  __int64 *v16; // rax
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
      v7 = *v5;
      v8 = v5[4];
      v9 = *((_DWORD *)v8 + 32);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        (_DWORD)v8,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        23,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
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
      v13 = v18;
      if ( *v18 != (__int64 *)&v17 )
        __fastfail(3u);
      v5[1] = v18;
      *v5 = &v17;
      *v13 = v5;
      v18 = (__int64 **)v5;
      v5 = (__int64 ***)v7;
    }
    while ( v7 != (__int64 **)v4 );
  }
  while ( 1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    v14 = v17;
    result = &v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    v16 = (__int64 *)*v17;
    v12 = 0;
    if ( (__int64 **)v17[1] != &v17 || (__int64 *)v16[1] != v17 )
      __fastfail(3u);
    v17 = (__int64 *)*v17;
    v16[1] = (__int64)&v17;
    v14[1] = (__int64)v14;
    *v14 = (__int64)v14;
    *((_BYTE *)v14 + 117) = *((_BYTE *)v14 + 116);
    *((_BYTE *)v14 + 118) = *((_BYTE *)v14 + 114);
    for ( i = StageQueue_ForwardScanGetNextStage(v14 + 14); i; i = StageQueue_ForwardScanGetNextStage(v14 + 14) )
    {
      Isoch_Stage_FreeScatterGatherList(a1, i);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      Isoch_Stage_Release(a1, i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      ++v12;
    }
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v14, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 328) -= v12;
  }
  return result;
}
