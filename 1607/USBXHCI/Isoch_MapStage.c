/*
 * XREFs of Isoch_MapStage @ 0x1C002B930
 * Callers:
 *     Isoch_MappingLoop @ 0x1C00021E0 (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 *v3; // r13
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rdi
  KIRQL v9; // si
  bool v11; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 40);
  v3 = *(__int64 **)(a1 + 320);
  v4 = *v3;
  v5 = *(_QWORD *)(*v3 + 32);
  *(_DWORD *)(a1 + 304) = 0;
  v6 = *(_QWORD *)(v1[11] + 80LL);
  v7 = 2;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(WdfDriverGlobals, *v1);
  v9 = KfRaiseIrql(2u);
  v11 = (*(_BYTE *)(v5 + 32) & 1) == 0;
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64 *, bool))(*(_QWORD *)(v6 + 8) + 88LL))(
                  v6,
                  v8,
                  v3[8],
                  *(_QWORD *)(v3[8] + 32) + *(unsigned int *)(v3[8] + 44),
                  *((_DWORD *)v3 + 13),
                  Isoch_EvtDmaCallback,
                  v3,
                  v11);
  KeLowerIrql(v9);
  if ( (int)v5 < 0 )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Stage_Release(a1, v3);
    if ( *(_DWORD *)(v4 + 96) == *(_DWORD *)(v4 + 100) )
      Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v4, 0xFFFFFFFF, 0xC0001000, 0, 0);
    else
      *(_DWORD *)(v4 + 92) = *(_DWORD *)(v4 + 80) - *(_DWORD *)(v4 + 88);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 1;
  }
  else if ( !_InterlockedXor((volatile signed __int32 *)(a1 + 292), 1u) )
  {
    return *(_DWORD *)(a1 + 304) != 0 ? 4 : 0;
  }
  return v7;
}
