/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C002441C
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00258F8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001FE54 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0020E80 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0027064 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v3; // rsi
  __int64 ****v5; // r14
  __int64 ***v6; // rbx
  __int64 **v7; // r15
  __int64 v8; // rcx
  __int64 **v9; // rcx
  __int64 ****v10; // rax
  __int64 ***v11; // rax
  __int64 *v12; // rbx
  __int64 **result; // rax
  __int64 *v14; // rax
  int v15; // r12d
  __int64 NextStage; // rax
  __int64 v17; // r15
  __int64 v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  __int64 *v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v22; // [rsp+58h] [rbp-8h]

  v22 = &v21;
  v3 = (KSPIN_LOCK *)(a1 + 88);
  v21 = (__int64 *)&v21;
  v5 = (__int64 ****)(a1 + 336);
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v6 = *v5;
  if ( *v5 != (__int64 ***)v5 )
  {
    do
    {
      if ( v6 == a2 )
        break;
      v7 = *v6;
      v8 = *(_QWORD *)(a1 + 56);
      LODWORD(v20) = *((_DWORD *)v6[4] + 32);
      LODWORD(v19) = *(_DWORD *)(v8 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(v8 + 80),
        4u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        0x17u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        v18,
        v19,
        v6[3],
        v20);
      v9 = *v6;
      v10 = (__int64 ****)v6[1];
      if ( (*v6)[1] != (__int64 *)v6 || *v10 != v6 )
        __fastfail(3u);
      *v10 = (__int64 ***)v9;
      v9[1] = (__int64 *)v10;
      v11 = (__int64 ***)v22;
      *v6 = &v21;
      v6[1] = (__int64 **)v11;
      if ( *v11 != &v21 )
        __fastfail(3u);
      *v11 = (__int64 **)v6;
      v22 = (__int64 **)v6;
      v6 = (__int64 ***)v7;
    }
    while ( v7 != (__int64 **)v5 );
  }
  while ( 1 )
  {
    KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
    v12 = v21;
    result = &v21;
    if ( v21 == (__int64 *)&v21 )
      break;
    v14 = (__int64 *)*v21;
    v15 = 0;
    if ( (__int64 **)v21[1] != &v21 || (__int64 *)v14[1] != v21 )
      __fastfail(3u);
    v21 = (__int64 *)*v21;
    v14[1] = (__int64)&v21;
    v12[1] = (__int64)v12;
    *v12 = (__int64)v12;
    *((_BYTE *)v12 + 117) = *((_BYTE *)v12 + 116);
    *((_BYTE *)v12 + 118) = *((_BYTE *)v12 + 114);
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v12 + 112);
      v17 = NextStage;
      if ( !NextStage )
        break;
      Isoch_Stage_FreeScatterGatherList(a1, NextStage);
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v3);
      Isoch_Stage_Release(a1, v17);
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 96));
      ++v15;
    }
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v3);
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v12, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 328) -= v15;
  }
  return result;
}
