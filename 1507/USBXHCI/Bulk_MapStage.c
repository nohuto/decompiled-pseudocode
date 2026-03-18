/*
 * XREFs of Bulk_MapStage @ 0x1C002A554
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002A758 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C002C16C (Bulk_Stage_MapIntoRing.c)
 *     Bulk_Stage_Release @ 0x1C002C8C4 (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002CC70 (Bulk_Transfer_CompleteCancelable.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v3; // r14
  __int64 v4; // r13
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  KIRQL v9; // di
  __int64 v10; // r9
  bool v12; // [rsp+38h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 312);
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 32);
  if ( *(_DWORD *)(*v1 + 60) == 3 )
  {
    v6 = *(_QWORD **)(a1 + 40);
    v7 = *(_QWORD *)(v6[11] + 80LL);
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 248))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *v6);
    v9 = KfRaiseIrql(2u);
    v12 = (*(_BYTE *)(v4 + 32) & 1) == 0;
    LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64 *, bool))(*(_QWORD *)(v7 + 8) + 88LL))(
                    v7,
                    v8,
                    v1[6],
                    *(_QWORD *)(v1[6] + 32) + *(unsigned int *)(v1[6] + 44),
                    *((_DWORD *)v1 + 10),
                    Bulk_EvtDmaCallback,
                    v1,
                    v12);
    KeLowerIrql(v9);
    if ( (int)v8 < 0 )
    {
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      Bulk_Stage_Release(a1, v1);
      if ( *(_DWORD *)(v3 + 104) == *(_DWORD *)(v3 + 100) )
      {
        LOBYTE(v10) = 1;
        Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL, v10);
        v5 = 3;
      }
      else
      {
        v5 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    }
    else
    {
      return _InterlockedXor((volatile signed __int32 *)(a1 + 288), 1u) != 0 ? 2 : 0;
    }
  }
  else
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 312));
    return 0;
  }
  return v5;
}
