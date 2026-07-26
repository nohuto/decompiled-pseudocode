/*
 * XREFs of ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C00DFAD0
 * Callers:
 *     ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C006CA70 (-ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisPDPIQueryCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1, union _NDIS_PD_COUNTER_VALUE *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 5);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, union _NDIS_PD_COUNTER_VALUE *))(*(_QWORD *)(v2 + 88) + 56LL))(
    *((_QWORD *)a1 + 7),
    a2);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x2Fu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
}
