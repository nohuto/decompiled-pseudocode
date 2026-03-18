/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0024B00 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C002441C (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapTransfers @ 0x1C00250A4 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0026914 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C0026E00 (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0028104 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C0028C54 (WPP_RECORDER_SF_DDLDDx.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  int v4; // edx
  KIRQL v5; // al
  int v6; // edx
  __int64 ****v7; // r15
  KIRQL v8; // dl
  KSPIN_LOCK *v9; // rcx
  __int64 v10; // r10
  __int64 ***v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  int v14; // r9d
  char v16; // [rsp+90h] [rbp+8h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF

  v17 = 0;
  v16 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v4 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v4, *(unsigned __int8 *)(a1 + 11), 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    WPP_RECORDER_SF_DDX(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      2u,
      0xDu,
      0x1Cu,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      *(unsigned __int8 *)(a1 + 15),
      *(_WORD *)(a1 + 14) & 0x1F,
      *(_QWORD *)a1);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v6 = *(_DWORD *)(a2 + 280);
  *(_BYTE *)(a2 + 96) = v5;
  if ( (v6 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v5);
    return 0;
  }
  v7 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v8 = *(_BYTE *)(a2 + 96);
  v9 = (KSPIN_LOCK *)(a2 + 88);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v9, v8);
    if ( !v7 )
      return 0;
    v11 = *v7;
    v12 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v7);
    Isoch_Transfer_CompleteStaleStages(v13, v11, v7);
    LOBYTE(v14) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v7, *(unsigned __int8 *)(a1 + 11), v12, v14, (__int64)&v16, (__int64)&v17);
  }
  else
  {
    *(_DWORD *)(a2 + 280) |= 0x40u;
    KeReleaseSpinLock(v9, v8);
    Isoch_Stage_CompleteTD(
      (_DWORD)v7,
      *(unsigned __int8 *)(a1 + 11),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v16,
      (__int64)&v17);
    v10 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v10,
        *(_QWORD *)(v10 + 8),
        *(_QWORD *)(v10 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v10 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v10 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v10 + 272));
    }
  }
  if ( !v16 )
    return 0;
  if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2 )
  {
LABEL_19:
    Isoch_MapTransfers(a2);
    return 0;
  }
  if ( !v17 && (unsigned int)TR_AttemptStateChange(a2, 4, 3) == 4 )
  {
    (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      *(_QWORD *)(a2 + 272),
      0LL);
    goto LABEL_19;
  }
  return 0;
}
