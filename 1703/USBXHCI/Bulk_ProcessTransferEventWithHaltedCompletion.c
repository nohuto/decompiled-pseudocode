/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002B258 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0001998 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     memmove @ 0x1C0010B40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  KSPIN_LOCK *v4; // rbp
  size_t v5; // r14
  KIRQL v9; // al
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  KIRQL v14; // dl
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = (KSPIN_LOCK *)(a1 + 88);
  v5 = a4;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(a1 + 276) |= 4u;
  *(_BYTE *)(a1 + 96) = v9;
  *(_DWORD *)(a1 + 304) = 1;
  KeReleaseSpinLock(v4, v9);
  v10 = *(_QWORD *)(a1 + 56);
  _m_prefetchw((const void *)(v10 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x20u) & 0x20) != 0 )
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v10,
      *(_QWORD *)(v10 + 8),
      *(_QWORD *)(v10 + 24),
      0x2000000LL,
      "Received duplicate Transfer Event TRB with Halted Completion Code",
      0LL,
      0LL);
  else
    ESM_AddEvent((PVOID)(v10 + 272));
  v11 = *a2;
  *(_DWORD *)(v11 + 92) += v5;
  v12 = *(_QWORD *)(v11 + 32);
  *(_DWORD *)(v11 + 52) = a3;
  if ( (*(_DWORD *)(v12 + 32) & 1) != 0 && *(_DWORD *)(v11 + 60) == 2 )
    memmove((void *)a2[8], *(const void **)(a2[9] + 16), v5);
  Bulk_Stage_FreeScatterGatherList(a1, a2);
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc(v4);
  v13 = *a2;
  if ( *((_BYTE *)a2 + 44) )
  {
    IoFreeMdl((PMDL)a2[6]);
    a2[6] = 0LL;
    *((_BYTE *)a2 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v13 + 112), (unsigned __int8 *)a2);
  ++*(_DWORD *)(v11 + 100);
  Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v11, 0xFFFFFFFF, 0);
  v14 = *(_BYTE *)(a1 + 96);
  --*(_DWORD *)(a1 + 300);
  --*(_DWORD *)(a1 + 304);
  v15 = *(_DWORD *)(a1 + 276);
  KeReleaseSpinLock(v4, v14);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v16 + 37)
      || (v17 = *(_QWORD *)(v16 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 20)) == *(_DWORD *)(v17 + 8)) )
    {
      ESM_AddEvent((PVOID)(v16 + 272));
    }
  }
}
