/*
 * XREFs of Control_Transfer_Map @ 0x1C00224CC
 * Callers:
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Control_Transfer_MapIntoRing @ 0x1C0022660 (Control_Transfer_MapIntoRing.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // r15
  int v2; // ebx
  __int64 v4; // r14
  _QWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int16 v8; // dx
  __int64 v9; // rsi
  __int64 v10; // rbx
  KIRQL v11; // di
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  bool v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 296);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 32);
  if ( *(_WORD *)(v4 + 2) == 50 && *(_DWORD *)(v4 + 56) )
  {
    *(_DWORD *)(v1 + 100) = 1;
    (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      *(_QWORD *)(a1 + 288),
      -10000LL * *(unsigned int *)(v4 + 56));
  }
  v5 = *(_QWORD **)(a1 + 40);
  v6 = *(unsigned int *)(v4 + 64);
  v7 = v5[12];
  if ( (unsigned int)v6 >= *(_DWORD *)(v7 + 48) )
    v8 = 0;
  else
    v8 = *(_WORD *)(*(_QWORD *)(v7 + 56) + 2 * v6);
  *(_WORD *)(a1 + 104) = v8;
  if ( *(_DWORD *)(v1 + 48) == 3 )
  {
    v9 = *(_QWORD *)(v5[11] + 80LL);
    v10 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 248))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            *v5);
    v11 = KfRaiseIrql(2u);
    v16 = (*(_BYTE *)(v4 + 32) & 1) == 0;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool))(*(_QWORD *)(v9 + 8) + 88LL))(
           v9,
           v10,
           *(_QWORD *)(v1 + 56),
           *(_QWORD *)(*(_QWORD *)(v1 + 56) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 56) + 44LL),
           *(_DWORD *)(v1 + 88),
           Control_EvtDmaCallback,
           a1,
           v16);
    KeLowerIrql(v11);
    if ( v2 < 0 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      LODWORD(v17) = v2;
      LODWORD(v15) = *(_DWORD *)(v12 + 144);
      LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v12 + 80),
        2u,
        0xDu,
        0x24u,
        (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
        v14,
        v15,
        v17);
    }
  }
  else
  {
    Control_Transfer_MapIntoRing(a1);
  }
  return (unsigned int)v2;
}
