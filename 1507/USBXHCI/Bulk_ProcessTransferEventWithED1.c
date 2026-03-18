/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x1C002A0F0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00186B4 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002A158 (Bulk_FindStage.c)
 *     Bulk_MapTransfers @ 0x1C002A6B0 (Bulk_MapTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B2D0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002B46C (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C002C0E8 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_Release @ 0x1C002C8C4 (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002CC70 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_ValidateStagePointer @ 0x1C002D0C0 (Bulk_ValidateStagePointer.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002DA9C (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqLDDx @ 0x1C002DD6C (WPP_RECORDER_SF_DDDqLDDx.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C002E414 (WPP_RECORDER_SF_DDDqqq.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  bool v2; // r15
  unsigned __int64 v3; // rsi
  char v4; // bp
  __int64 v5; // rdi
  int v7; // edx
  __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // r12d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  signed __int64 v16; // rbx
  __int64 v17; // r10
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  int v31; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v4 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( !(unsigned __int8)Bulk_ValidateStagePointer(a2, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( !*(_DWORD *)(v5 + 64) )
      {
        v7 = *(unsigned __int8 *)(a1 + 15);
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), v7, *(_WORD *)(a1 + 14) & 0x1F, 53);
        Controller_ReportFatalError(*(_QWORD *)(v5 + 40), 2, 4126, *(_QWORD *)(v5 + 48), *(_QWORD *)(v5 + 56), v5);
      }
      goto LABEL_33;
    }
    v8 = *(_QWORD *)v3;
  }
  else
  {
    v8 = *(_QWORD *)v3;
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
  }
  v4 = 1;
  WPP_RECORDER_SF_DDDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 15),
    *(unsigned __int8 *)(a1 + 11),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  v10 = *(unsigned int *)(v3 + 40);
  v11 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v11 > (unsigned int)v10 )
  {
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      3u,
      v10,
      0x37u,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids);
    v11 = 0;
  }
  WPP_RECORDER_SF_DDDqqq(
    *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
    v10,
    v9,
    v26,
    *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
    *(_DWORD *)(v5 + 64),
    *(_QWORD *)(v8 + 24),
    v8,
    v3);
  if ( Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    v13 = *(_QWORD *)(v5 + 56);
    LODWORD(v30) = v12;
    LODWORD(v29) = *(_DWORD *)(v5 + 64);
    LODWORD(v28) = *(_DWORD *)(v13 + 144);
    LODWORD(v27) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v13 + 80),
      2u,
      0xDu,
      0x39u,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      v27,
      v28,
      v29,
      v30);
    Bulk_ProcessTransferEventWithHaltedCompletion(v5, v3, *(unsigned __int8 *)(a1 + 11), v11);
    goto LABEL_33;
  }
  if ( (unsigned int)(v12 - 26) > 2 )
  {
    *(_DWORD *)(v8 + 92) += v11;
    v19 = *(_QWORD *)(v8 + 32);
    *(_DWORD *)(v8 + 52) = v12;
    if ( (*(_DWORD *)(v19 + 32) & 1) != 0 && *(_DWORD *)(v8 + 60) == 2 )
      memmove(*(void **)(v3 + 64), *(const void **)(*(_QWORD *)(v3 + 72) + 16LL), v11);
    Bulk_Stage_FreeScatterGatherList(v5, v3);
    *(_BYTE *)(v5 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
    Bulk_Stage_Release(v5, v3);
    ++*(_DWORD *)(v8 + 100);
    if ( *(_DWORD *)(v8 + 52) == 13 || *(_DWORD *)(v8 + 96) == *(_DWORD *)(v8 + 88) )
      Bulk_Transfer_CompleteCancelable(v5, v8, 0xFFFFFFFFLL, 0LL);
    --*(_DWORD *)(v5 + 300);
    v20 = *(_DWORD *)(v5 + 304);
    if ( v20 )
    {
      v21 = v20 - 1;
      v22 = *(_DWORD *)(v5 + 276);
      *(_DWORD *)(v5 + 304) = v21;
      if ( (v22 & 2) != 0 )
        v2 = v21 == 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), *(_BYTE *)(v5 + 96));
    if ( v2 )
    {
      v23 = *(_QWORD *)(v5 + 56);
      if ( !*(_BYTE *)(v23 + 37)
        || (v24 = *(_QWORD *)(v23 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 20)) == *(_DWORD *)(v24 + 8)) )
      {
        v18 = (void *)(v23 + 272);
        goto LABEL_32;
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(v3 + 96);
    v15 = *(unsigned int *)(v3 + 104);
    v31 = 0;
    v16 = *(_QWORD *)(v14 + 24) + 16 * v15;
    *(_BYTE *)(v5 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
    if ( Bulk_FindStage(v5, v16, &v32, &v31) && v32 == v3 )
      Bulk_ProcessTransferEventWithStoppedCompletion(v5, v3, *(unsigned __int8 *)(a1 + 11), v11, v31);
    *(_DWORD *)(v5 + 276) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), *(_BYTE *)(v5 + 96));
    v17 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v17 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v17,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
      goto LABEL_33;
    }
    _m_prefetchw((const void *)(v17 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v17 + 32), 8u) & 8) != 0 )
    {
      v18 = (void *)(v17 + 272);
LABEL_32:
      ESM_AddEvent(v18);
    }
  }
LABEL_33:
  if ( (unsigned int)TR_AttemptStateChange(v5, 2, 3) == 2 )
    Bulk_MapTransfers(v5);
  return v4;
}
