/*
 * XREFs of ndisDereferenceVcPtr @ 0x1C00F3C4C
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C009F180 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     NdisClMakeCall @ 0x1C00F0520 (NdisClMakeCall.c)
 *     NdisCmAddPartyComplete @ 0x1C00F08D0 (NdisCmAddPartyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C00F0A60 (NdisCmCloseCallComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C00F0E10 (NdisCmDropPartyComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00F0E50 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C00F1F40 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qDLLq @ 0x1C004D1EC (WPP_SF_qDLLq.c)
 */

void __fastcall ndisDereferenceVcPtr(__int64 P)
{
  char *v1; // rbx
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // al
  bool v4; // zf
  KSPIN_LOCK *v5; // rdi
  KIRQL v6; // r14
  _DWORD *v7; // rdx
  char v8; // bp
  KIRQL v9; // al
  KIRQL v10; // dl

  v1 = (char *)P;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qDLLq(P, *(_QWORD *)(P + 8), P, *(_DWORD *)(P + 4));
  v2 = (KSPIN_LOCK *)(v1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 2);
  v4 = (*(_DWORD *)v1)-- == 1;
  v5 = (KSPIN_LOCK *)*((_QWORD *)v1 + 9);
  v6 = v3;
  if ( !v4 )
  {
    v10 = v3;
    goto LABEL_27;
  }
  v7 = (_DWORD *)*((_QWORD *)v1 + 1);
  if ( (*v7 & 8) != 0 )
    *v7 &= ~8u;
  if ( v1[336] )
  {
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_(0x2Eu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1 + 2);
    (*((void (__fastcall **)(_QWORD))v1 + 27))(*((_QWORD *)v1 + 25));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v1 + 2);
  }
  if ( v1 == (char *)v5[5] )
  {
    v8 = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_(0x2Fu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
    v8 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1 + 2, v6);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qq(0x30u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v1, *((_QWORD *)v1 + 9));
  ExFreePoolWithTag(v1, 0);
  v2 = v5 + 1;
  v1 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(v5 + 1);
  if ( v8 )
    v5[4] = 0LL;
  else
    v5[5] = 0LL;
  if ( v5[4] || v5[5] )
  {
    v10 = v9;
LABEL_27:
    KeReleaseSpinLock(v2, v10);
    goto LABEL_28;
  }
  KeReleaseSpinLock(v5 + 1, v9);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(0x31u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, (__int64)v5);
  ExFreePoolWithTag(v5, 0);
LABEL_28:
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(0x32u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, (__int64)v1);
}
