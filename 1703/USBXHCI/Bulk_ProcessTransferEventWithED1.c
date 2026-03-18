/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0001A20 (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C0001A40 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0001908 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0001998 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_MapTransfers @ 0x1C0002400 (Bulk_MapTransfers.c)
 *     Bulk_ValidateStagePointer @ 0x1C00025F0 (Bulk_ValidateStagePointer.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C000BF3C (WPP_RECORDER_SF_DDDqqq.c)
 *     WPP_RECORDER_SF_DDDqLDDx @ 0x1C000CCA4 (WPP_RECORDER_SF_DDDqLDDx.c)
 *     memmove @ 0x1C0010B40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0024A24 (WPP_RECORDER_SF_DDDD.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0025780 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002ADC4 (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002B6EC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002C784 (WPP_RECORDER_SF_DDDx.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  bool v3; // si
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rbx
  int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // ebp
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  volatile signed __int32 *v16; // r10
  __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v23; // ecx
  void *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-88h]
  int v29; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = a2;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !a2 )
  {
    v7 = *(_QWORD *)v5;
    v4 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
LABEL_4:
    WPP_RECORDER_SF_DDDqLDDx(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 11),
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF);
    v9 = *(_DWORD *)(v5 + 40);
    v10 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v10 > v9 )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        v11,
        v9,
        55,
        (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
        *(_DWORD *)(v4 + 64),
        *(_BYTE *)(a1 + 8),
        *(_DWORD *)(v5 + 40));
      v10 = 0;
    }
    WPP_RECORDER_SF_DDDqqq(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      v9,
      v8,
      v28,
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      *(_DWORD *)(v4 + 64),
      *(_QWORD *)(v7 + 24),
      v7,
      v5);
    if ( !Endpoint_HaltedCompletionCode(*(_QWORD *)(v4 + 56), *(unsigned __int8 *)(a1 + 11)) )
    {
      v23 = *(unsigned __int8 *)(a1 + 11);
      if ( (unsigned int)(v23 - 26) > 2 )
      {
        *(_DWORD *)(v7 + 92) += v10;
        v17 = *(_QWORD *)(v7 + 32);
        *(_DWORD *)(v7 + 52) = v23;
        if ( (*(_DWORD *)(v17 + 32) & 1) != 0 && *(_DWORD *)(v7 + 60) == 2 )
          memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v10);
        Bulk_Stage_FreeScatterGatherList(v4, (_QWORD *)v5);
        *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
        v25 = *(_QWORD *)v5;
        if ( *(_BYTE *)(v5 + 44) )
        {
          IoFreeMdl(*(PMDL *)(v5 + 48));
          *(_QWORD *)(v5 + 48) = 0LL;
          *(_BYTE *)(v5 + 44) = 0;
        }
        TR_ReleaseSegments(v4, (unsigned __int64 *)(v5 + 8), 1);
        TR_ReleaseSegments(v4, (unsigned __int64 *)(v5 + 24), 0);
        StageQueue_Release((unsigned __int8 *)(v25 + 112), (unsigned __int8 *)v5);
        ++*(_DWORD *)(v7 + 100);
        if ( *(_DWORD *)(v7 + 52) == 13 || *(_DWORD *)(v7 + 96) == *(_DWORD *)(v7 + 88) )
          Bulk_Transfer_CompleteCancelable(v4, (__int64 *)v7, 0xFFFFFFFF, 0);
        --*(_DWORD *)(v4 + 300);
        v18 = *(_DWORD *)(v4 + 304);
        if ( v18 )
        {
          v19 = v18 - 1;
          v20 = *(_DWORD *)(v4 + 276);
          *(_DWORD *)(v4 + 304) = v19;
          if ( (v20 & 2) != 0 )
            v3 = v19 == 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
        if ( !v3 )
          goto LABEL_13;
        v26 = *(_QWORD *)(v4 + 56);
        if ( *(_BYTE *)(v26 + 37) )
        {
          v27 = *(_QWORD *)(v26 + 136);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v27 + 20)) != *(_DWORD *)(v27 + 8) )
            goto LABEL_13;
        }
        v24 = (void *)(v26 + 272);
      }
      else
      {
        v13 = *(_QWORD *)(v5 + 96);
        v14 = 16LL * *(unsigned int *)(v5 + 104);
        v29 = 0;
        v15 = *(_QWORD *)(v13 + 24) + v14;
        *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
        if ( (unsigned __int8)Bulk_FindStage(v4, v15, &v30, &v29) && v30 == v5 )
          Bulk_ProcessTransferEventWithStoppedCompletion(v4, v5, *(unsigned __int8 *)(a1 + 11), v10, v29);
        *(_DWORD *)(v4 + 276) |= 8u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
        v16 = *(volatile signed __int32 **)(v4 + 56);
        _m_prefetchw((const void *)(v16 + 8));
        if ( (_InterlockedOr(v16 + 8, 0x10u) & 0x10) != 0 )
        {
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)v16,
            *((_QWORD *)v16 + 1),
            *((_QWORD *)v16 + 3),
            0x2000000,
            (__int64)"Received duplicate Stopped Transfer Events",
            0LL,
            0LL);
          goto LABEL_13;
        }
        _m_prefetchw((const void *)(v16 + 8));
        if ( (_InterlockedXor(v16 + 8, 8u) & 8) == 0 )
        {
LABEL_13:
          v2 = 1;
          goto LABEL_26;
        }
        v24 = (void *)(v16 + 68);
      }
      ESM_AddEvent(v24);
      goto LABEL_13;
    }
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      v12,
      13,
      57,
      (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      *(_DWORD *)(v4 + 64),
      *(_BYTE *)(a1 + 11));
    Bulk_ProcessTransferEventWithHaltedCompletion(v4, v5, *(unsigned __int8 *)(a1 + 11), v10);
    goto LABEL_13;
  }
  if ( Bulk_ValidateStagePointer(a2, v5) )
  {
    v7 = *(_QWORD *)v5;
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(v4 + 64) )
  {
    v21 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL), v21, *(_WORD *)(a1 + 14) & 0x1F, 53);
    Controller_ReportFatalError(*(_QWORD *)(v4 + 40), 2, 4126, *(_QWORD *)(v4 + 48), *(_QWORD *)(v4 + 56), v4);
  }
LABEL_26:
  _InterlockedExchange((volatile __int32 *)(v4 + 292), 1);
  if ( (unsigned int)TR_AttemptStateChange(v4, 2LL, 3LL) == 2 )
    Bulk_MapTransfers(v4);
  return v2;
}
