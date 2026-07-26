/*
 * XREFs of ndisDereferenceVcPtr @ 0x1C00F9C38
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 *     NdisClMakeCall @ 0x1C00F6520 (NdisClMakeCall.c)
 *     NdisCmAddPartyComplete @ 0x1C00F68D0 (NdisCmAddPartyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C00F6A60 (NdisCmCloseCallComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C00F6E10 (NdisCmDropPartyComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00F6E50 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C00F7F40 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qDLLq @ 0x1C0051C4C (WPP_SF_qDLLq.c)
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
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
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
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_(0x2Eu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
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
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_(0x2Fu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
    v8 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1 + 2, v6);
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qq(0x30u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, v1, *((_QWORD *)v1 + 9));
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
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(0x31u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, (__int64)v5);
  ExFreePoolWithTag(v5, 0);
LABEL_28:
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(0x32u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, (__int64)v1);
}
