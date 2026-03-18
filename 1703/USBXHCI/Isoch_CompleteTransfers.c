/*
 * XREFs of Isoch_CompleteTransfers @ 0x1C00277F0
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C0028ED0 (Isoch_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0002B40 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0003048 (Isoch_Stage_FreeScatterGatherList.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // r13
  _QWORD *NextStage; // rax
  _QWORD *v9; // rbx
  KIRQL v10; // dl

  while ( 1 )
  {
    v4 = (_QWORD *)*a2;
    if ( (__int64 *)*a2 == a2 )
      break;
    v5 = *v4;
    if ( (__int64 *)v4[1] != a2 || *(_QWORD **)(v5 + 8) != v4 )
      __fastfail(3u);
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    v4[1] = v4;
    *v4 = v4;
    if ( *((_DWORD *)v4 + 13) == 259 )
    {
      v6 = 0;
      *((_BYTE *)v4 + 117) = *((_BYTE *)v4 + 116);
      *((_BYTE *)v4 + 118) = *((_BYTE *)v4 + 114);
      while ( 1 )
      {
        NextStage = (_QWORD *)StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 112);
        v9 = NextStage;
        if ( !NextStage )
          break;
        Isoch_Stage_FreeScatterGatherList(a1, NextStage);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        v7 = *v9;
        if ( *((_BYTE *)v9 + 56) )
        {
          IoFreeMdl((PMDL)v9[8]);
          v9[8] = 0LL;
          *((_BYTE *)v9 + 56) = 0;
        }
        TR_ReleaseSegments(a1, v9 + 1, 1);
        TR_ReleaseSegments(a1, v9 + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v7 + 112), (unsigned __int8 *)v9);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        ++v6;
        ++*((_DWORD *)v4 + 24);
      }
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      Isoch_Transfer_CompleteCancelable(a1, v4, 0xFFFFFFFF, 0xC0010000, 1, 0);
      v10 = *(_BYTE *)(a1 + 96);
      *(_DWORD *)(a1 + 328) -= v6;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v10);
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v4[3]);
    }
  }
}
