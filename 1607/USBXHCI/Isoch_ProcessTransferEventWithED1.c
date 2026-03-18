/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C000B270
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C000ABA0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0002110 (Isoch_MapTransfers.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002760 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C00027D0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C230 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C000C638 (Isoch_Stage_Find.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C0025ED8 (WPP_RECORDER_SF_DDX.c)
 *     TR_AttemptStateChange @ 0x1C0028AA4 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002CF04 (WPP_RECORDER_SF_DDLDDx.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  KIRQL v9; // al
  int v10; // edx
  __int64 ***v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  int v14; // r9d
  __int64 ****v15; // r15
  KIRQL v16; // dl
  KSPIN_LOCK *v17; // rcx
  _QWORD *v18; // r10
  char v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF

  v20 = 0;
  v19 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v4 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v4, *(unsigned __int8 *)(a1 + 11), 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    v5 = *(_WORD *)(a1 + 14) & 0x1F;
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_DDX(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      v5,
      13,
      28,
      (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
      *(_BYTE *)(a1 + 15),
      *(_WORD *)(a1 + 14) & 0x1F,
      *(_QWORD *)a1);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v10 = *(_DWORD *)(a2 + 280);
  *(_BYTE *)(a2 + 96) = v9;
  if ( (v10 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v9);
    return 0;
  }
  v15 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v16 = *(_BYTE *)(a2 + 96);
  v17 = (KSPIN_LOCK *)(a2 + 88);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v17, v16);
    if ( !v15 )
      return 0;
    v11 = *v15;
    v12 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v15);
    Isoch_Transfer_CompleteStaleStages(v13, v11, (__int64)v15);
    LOBYTE(v14) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v15, *(unsigned __int8 *)(a1 + 11), v12, v14, (__int64)&v19, (__int64)&v20);
  }
  else
  {
    *(_DWORD *)(a2 + 280) |= 0x40u;
    KeReleaseSpinLock(v17, v16);
    Isoch_Stage_CompleteTD(
      (_DWORD)v15,
      *(unsigned __int8 *)(a1 + 11),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v19,
      (__int64)&v20);
    v18 = *(_QWORD **)(a2 + 56);
    _m_prefetchw(v18 + 4);
    v7 = *((_DWORD *)v18 + 8);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)v18 + 8, v7 | 0x10, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *v18,
        v18[1],
        v18[3],
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw(v18 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v18 + 8, 8u) & 8) != 0 )
        ESM_AddEvent(v18 + 34);
    }
  }
  if ( v19 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 296), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2LL, 3LL) == 2 )
    {
LABEL_14:
      Isoch_MapTransfers(a2);
      return 0;
    }
    if ( !v20 && (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 272),
        0LL);
      goto LABEL_14;
    }
  }
  return 0;
}
