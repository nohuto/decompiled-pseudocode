/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C000C090
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C000BA30 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0002228 (Isoch_MapTransfers.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002884 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0002900 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000CF90 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C000D360 (Isoch_Stage_Find.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C0029840 (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C0029AAC (WPP_RECORDER_SF_DDX.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // edx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  KIRQL v10; // al
  int v11; // edx
  __int64 ***v12; // rbx
  int v13; // edi
  __int64 v14; // rcx
  int v15; // r9d
  __int64 ****v16; // r15
  KIRQL v17; // dl
  KSPIN_LOCK *v18; // rcx
  _QWORD *v19; // r10
  char v20; // [rsp+90h] [rbp+8h] BYREF
  int v21; // [rsp+98h] [rbp+10h] BYREF

  v21 = 0;
  v20 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v6, *(unsigned __int8 *)(a1 + 11), 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    WPP_RECORDER_SF_DDX(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *(_WORD *)(a1 + 14) & 0x1F, *(_QWORD *)a1, a4);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v11 = *(_DWORD *)(a2 + 280);
  *(_BYTE *)(a2 + 96) = v10;
  if ( (v11 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v10);
    return 0;
  }
  v16 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v17 = *(_BYTE *)(a2 + 96);
  v18 = (KSPIN_LOCK *)(a2 + 88);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v18, v17);
    if ( !v16 )
      return 0;
    v12 = *v16;
    v13 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v16);
    Isoch_Transfer_CompleteStaleStages(v14, v12, (__int64)v16);
    LOBYTE(v15) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v16, *(unsigned __int8 *)(a1 + 11), v13, v15, (__int64)&v20, (__int64)&v21);
  }
  else
  {
    *(_DWORD *)(a2 + 280) |= 0x40u;
    KeReleaseSpinLock(v18, v17);
    Isoch_Stage_CompleteTD(
      (_DWORD)v16,
      *(unsigned __int8 *)(a1 + 11),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v20,
      (__int64)&v21);
    v19 = *(_QWORD **)(a2 + 56);
    _m_prefetchw(v19 + 4);
    v8 = *((_DWORD *)v19 + 8);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)v19 + 8, v8 | 0x10, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *v19,
        v19[1],
        v19[3],
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw(v19 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v19 + 8, 8u) & 8) != 0 )
        ESM_AddEvent(v19 + 34);
    }
  }
  if ( v20 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 296), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2LL, 3LL) == 2 )
    {
LABEL_14:
      Isoch_MapTransfers(a2);
      return 0;
    }
    if ( !v21 && (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) == 4 )
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
