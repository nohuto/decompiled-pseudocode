/*
 * XREFs of Isoch_CompleteTransfers @ 0x1C002B06C
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C002C5D0 (Isoch_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002978 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0002EB0 (Isoch_Stage_FreeScatterGatherList.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // r15d
  _QWORD *NextStage; // rax
  _QWORD *v8; // r14
  KIRQL v9; // dl

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
        v8 = NextStage;
        if ( !NextStage )
          break;
        Isoch_Stage_FreeScatterGatherList(a1, NextStage);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        Isoch_Stage_Release(a1, v8);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        ++v6;
        ++*((_DWORD *)v4 + 24);
      }
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      Isoch_Transfer_CompleteCancelable(a1, v4, 0xFFFFFFFF, 0xC0010000, 1, 0);
      v9 = *(_BYTE *)(a1 + 96);
      *(_DWORD *)(a1 + 328) -= v6;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v9);
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v4[3]);
    }
  }
}
