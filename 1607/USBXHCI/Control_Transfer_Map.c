/*
 * XREFs of Control_Transfer_Map @ 0x1C000346C
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     Control_Transfer_MapIntoRing @ 0x1C000D090 (Control_Transfer_MapIntoRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // r15
  int v2; // ebx
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  KIRQL v8; // di
  int v9; // edx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // dx
  bool v14; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 296);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 32);
  if ( *(_WORD *)(v4 + 2) == 50 && *(_DWORD *)(v4 + 56) )
  {
    *(_DWORD *)(v1 + 100) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 288),
      -10000LL * *(unsigned int *)(v4 + 56));
  }
  v10 = *(_QWORD **)(a1 + 40);
  v11 = *(unsigned int *)(v4 + 64);
  v12 = v10[12];
  if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 48) )
    v13 = 0;
  else
    v13 = *(_WORD *)(*(_QWORD *)(v12 + 56) + 2 * v11);
  *(_WORD *)(a1 + 104) = v13;
  if ( *(_DWORD *)(v1 + 48) == 3 )
  {
    v6 = *(_QWORD *)(v10[11] + 80LL);
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(WdfDriverGlobals, *v10);
    v8 = KfRaiseIrql(2u);
    v14 = (*(_BYTE *)(v4 + 32) & 1) == 0;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64, bool))(*(_QWORD *)(v6 + 8) + 88LL))(
           v6,
           v7,
           *(_QWORD *)(v1 + 56),
           *(_QWORD *)(*(_QWORD *)(v1 + 56) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 56) + 44LL),
           *(_DWORD *)(v1 + 88),
           Control_EvtDmaCallback,
           a1,
           v14);
    KeLowerIrql(v8);
    if ( v2 < 0 )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v9,
        13,
        36,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v2);
    }
  }
  else
  {
    Control_Transfer_MapIntoRing(a1);
  }
  return (unsigned int)v2;
}
