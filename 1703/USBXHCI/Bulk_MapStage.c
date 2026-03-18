/*
 * XREFs of Bulk_MapStage @ 0x1C00031B8
 * Callers:
 *     Bulk_MappingLoop @ 0x1C00030D0 (Bulk_MappingLoop.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C000F600 (Bulk_Stage_MapIntoRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // r15
  __int64 v4; // r13
  unsigned int v5; // edi
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  KIRQL v10; // di
  __int64 v11; // rsi
  __int64 v12; // r9
  bool v13; // [rsp+38h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 312);
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 32);
  if ( *(_DWORD *)(*v1 + 60) == 3 )
  {
    v7 = *(_QWORD **)(a1 + 40);
    v8 = *(_QWORD *)(v7[11] + 80LL);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(WdfDriverGlobals, *v7);
    v10 = KfRaiseIrql(2u);
    v13 = (*(_BYTE *)(v4 + 32) & 1) == 0;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64 *, bool))(*(_QWORD *)(v8 + 8) + 88LL))(
                    v8,
                    v9,
                    v1[6],
                    *(_QWORD *)(v1[6] + 32) + *(unsigned int *)(v1[6] + 44),
                    *((_DWORD *)v1 + 10),
                    Bulk_EvtDmaCallback,
                    v1,
                    v13);
    KeLowerIrql(v10);
    if ( (int)v9 >= 0 )
    {
      return _InterlockedXor((volatile signed __int32 *)(a1 + 288), 1u) != 0 ? 2 : 0;
    }
    else
    {
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v11 = *v1;
      if ( *((_BYTE *)v1 + 44) )
      {
        IoFreeMdl((PMDL)v1[6]);
        v1[6] = 0LL;
        *((_BYTE *)v1 + 44) = 0;
      }
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
      StageQueue_Release(v11 + 112, v1);
      if ( *(_DWORD *)(v3 + 104) == *(_DWORD *)(v3 + 100) )
      {
        LOBYTE(v12) = 1;
        Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL, v12);
        v5 = 3;
      }
      else
      {
        v5 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    }
  }
  else
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 312));
    return 0;
  }
  return v5;
}
