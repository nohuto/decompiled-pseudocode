/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C000B470 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00014F4 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0001570 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapTransfers @ 0x1C0002DF8 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C760 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C000D420 (Isoch_Stage_Find.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C00261D0 (WPP_RECORDER_SF_DDX.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002C9B4 (WPP_RECORDER_SF_DDLDDx.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  KIRQL v6; // al
  int v7; // edx
  __int64 ****v8; // r15
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  volatile signed __int32 *v11; // r10
  __int64 ***v12; // rbx
  int v13; // edi
  __int64 v14; // rcx
  int v15; // r9d
  char v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v18 = 0;
  v17 = 0;
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
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      *(_BYTE *)(a1 + 15),
      *(_WORD *)(a1 + 14) & 0x1F,
      *(_QWORD *)a1);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v7 = *(_DWORD *)(a2 + 280);
  *(_BYTE *)(a2 + 96) = v6;
  if ( (v7 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v6);
    return 0;
  }
  v8 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v9 = *(_BYTE *)(a2 + 96);
  v10 = (KSPIN_LOCK *)(a2 + 88);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v10, v9);
    if ( !v8 )
      return 0;
    v12 = *v8;
    v13 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v8);
    Isoch_Transfer_CompleteStaleStages(v14, v12, (__int64)v8);
    LOBYTE(v15) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v8, *(unsigned __int8 *)(a1 + 11), v13, v15, (__int64)&v17, (__int64)&v18);
  }
  else
  {
    *(_DWORD *)(a2 + 280) |= 0x40u;
    KeReleaseSpinLock(v10, v9);
    Isoch_Stage_CompleteTD(
      (_DWORD)v8,
      *(unsigned __int8 *)(a1 + 11),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v17,
      (__int64)&v18);
    v11 = *(volatile signed __int32 **)(a2 + 56);
    _m_prefetchw((const void *)(v11 + 8));
    if ( (_InterlockedOr(v11 + 8, 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v11,
        *((_QWORD *)v11 + 1),
        *((_QWORD *)v11 + 3),
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v11 + 8));
      if ( (_InterlockedXor(v11 + 8, 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v11 + 68));
    }
  }
  if ( !v17 )
    return 0;
  if ( (unsigned int)TR_AttemptStateChange(a2, 2LL, 3LL) == 2 )
  {
LABEL_19:
    Isoch_MapTransfers(a2);
    return 0;
  }
  if ( !v18 && (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) == 4 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 272),
      0LL);
    goto LABEL_19;
  }
  return 0;
}
