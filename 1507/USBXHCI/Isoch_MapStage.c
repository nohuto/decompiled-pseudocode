/*
 * XREFs of Isoch_MapStage @ 0x1C0024F34
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0025190 (Isoch_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rdi
  KIRQL v9; // si
  bool v11; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 320);
  v4 = *(_DWORD **)v3;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
  *(_DWORD *)(a1 + 304) = 0;
  v6 = *(_QWORD *)(v1[11] + 80LL);
  v7 = 2;
  v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 248))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *v1);
  v9 = KfRaiseIrql(2u);
  v11 = (*(_BYTE *)(v5 + 32) & 1) == 0;
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v6 + 8) + 88LL))(
                  v6,
                  v8,
                  *(_QWORD *)(v3 + 64),
                  *(_QWORD *)(*(_QWORD *)(v3 + 64) + 32LL) + *(unsigned int *)(*(_QWORD *)(v3 + 64) + 44LL),
                  *(_DWORD *)(v3 + 52),
                  Isoch_EvtDmaCallback,
                  v3,
                  v11);
  KeLowerIrql(v9);
  if ( (int)v5 < 0 )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Stage_Release(a1, v3);
    if ( v4[24] == v4[25] )
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v4, -1, -1073737728, 0, 0);
    else
      v4[23] = v4[20] - v4[22];
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 1;
  }
  else if ( !_InterlockedXor((volatile signed __int32 *)(a1 + 292), 1u) )
  {
    return *(_DWORD *)(a1 + 304) != 0 ? 4 : 0;
  }
  return v7;
}
