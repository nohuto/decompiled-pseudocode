/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C000D690
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x1C0004170 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     Bulk_ValidateStagePointer @ 0x1C0001414 (Bulk_ValidateStagePointer.c)
 *     Bulk_MapTransfers @ 0x1C0002420 (Bulk_MapTransfers.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0002708 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1C0002A7C (Bulk_Stage_Release.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0004018 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000407C (Bulk_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C000DB2C (WPP_RECORDER_SF_DDDqqq.c)
 *     WPP_RECORDER_SF_DDDqLDDx @ 0x1C000DC78 (WPP_RECORDER_SF_DDDqLDDx.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0028AEC (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002DCFC (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E438 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002E5D4 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002F65C (WPP_RECORDER_SF_DDDx.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  __int64 v3; // rdi
  bool v4; // bp
  unsigned __int64 v5; // rsi
  int v7; // edx
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v10; // r8d
  unsigned int v11; // r15d
  int v12; // edx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  volatile signed __int32 *v17; // r10
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v27; // [rsp+20h] [rbp-78h]
  char v28; // [rsp+40h] [rbp-58h]
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = 0;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a2 )
  {
    if ( !Bulk_ValidateStagePointer(a2, v5) )
    {
      if ( !*(_DWORD *)(v3 + 64) )
      {
        v7 = *(unsigned __int8 *)(a1 + 15);
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL), v7, *(_WORD *)(a1 + 14) & 0x1F, 53);
        Controller_ReportFatalError(*(_QWORD *)(v3 + 40), 2, 4126, *(_QWORD *)(v3 + 48), *(_QWORD *)(v3 + 56), v3);
      }
      goto LABEL_33;
    }
    v8 = *(_QWORD *)v5;
  }
  else
  {
    v8 = *(_QWORD *)v5;
    v3 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
  }
  v2 = 1;
  WPP_RECORDER_SF_DDDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 11),
    *(unsigned __int8 *)(a1 + 15),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  v10 = *(_DWORD *)(v5 + 40);
  v11 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v11 > v10 )
  {
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      v12,
      v10,
      55,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
      *(_DWORD *)(v3 + 64),
      *(_BYTE *)(a1 + 8),
      *(_DWORD *)(v5 + 40));
    v11 = 0;
  }
  WPP_RECORDER_SF_DDDqqq(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
    v10,
    v9,
    v27,
    *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
    *(_DWORD *)(v3 + 64),
    *(_QWORD *)(v8 + 24),
    v8,
    v5);
  if ( Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    v28 = v13;
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      v13,
      13,
      57,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
      *(_DWORD *)(v3 + 64),
      v28);
    Bulk_ProcessTransferEventWithHaltedCompletion(v3, v5, *(unsigned __int8 *)(a1 + 11), v11);
    goto LABEL_33;
  }
  if ( (unsigned int)(v13 - 26) > 2 )
  {
    *(_DWORD *)(v8 + 92) += v11;
    v19 = *(_QWORD *)(v8 + 32);
    *(_DWORD *)(v8 + 52) = v13;
    if ( (*(_DWORD *)(v19 + 32) & 1) != 0 && *(_DWORD *)(v8 + 60) == 2 )
      memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v11);
    Bulk_Stage_FreeScatterGatherList(v3, (_QWORD *)v5);
    *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
    Bulk_Stage_Release(v3, (__int64 *)v5, v20);
    ++*(_DWORD *)(v8 + 100);
    if ( *(_DWORD *)(v8 + 52) == 13 || *(_DWORD *)(v8 + 96) == *(_DWORD *)(v8 + 88) )
      Bulk_Transfer_CompleteCancelable(v3, (__int64 *)v8, 0xFFFFFFFF, 0);
    --*(_DWORD *)(v3 + 300);
    v21 = *(_DWORD *)(v3 + 304);
    if ( v21 )
    {
      v22 = v21 - 1;
      v23 = *(_DWORD *)(v3 + 276);
      *(_DWORD *)(v3 + 304) = v22;
      if ( (v23 & 2) != 0 )
        v4 = v22 == 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
    if ( v4 )
    {
      v24 = *(_QWORD *)(v3 + 56);
      if ( !*(_BYTE *)(v24 + 37)
        || (v25 = *(_QWORD *)(v24 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 20)) == *(_DWORD *)(v25 + 8)) )
      {
        v18 = (void *)(v24 + 272);
        goto LABEL_32;
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(v5 + 96);
    v15 = 16LL * *(unsigned int *)(v5 + 104);
    v29 = 0;
    v16 = *(_QWORD *)(v14 + 24) + v15;
    *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
    if ( (unsigned __int8)Bulk_FindStage(v3, v16, &v30, &v29) && v30 == v5 )
      Bulk_ProcessTransferEventWithStoppedCompletion(v3, v5, *(unsigned __int8 *)(a1 + 11), v11, v29);
    *(_DWORD *)(v3 + 276) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
    v17 = *(volatile signed __int32 **)(v3 + 56);
    _m_prefetchw((const void *)(v17 + 8));
    if ( (_InterlockedOr(v17 + 8, 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v17,
        *((_QWORD *)v17 + 1),
        *((_QWORD *)v17 + 3),
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
      goto LABEL_33;
    }
    _m_prefetchw((const void *)(v17 + 8));
    if ( (_InterlockedXor(v17 + 8, 8u) & 8) != 0 )
    {
      v18 = (void *)(v17 + 68);
LABEL_32:
      ESM_AddEvent(v18);
    }
  }
LABEL_33:
  if ( (unsigned int)TR_AttemptStateChange(v3, 2LL, 3LL) == 2 )
    Bulk_MapTransfers(v3);
  return v2;
}
