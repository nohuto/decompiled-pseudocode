/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E438
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002E17C (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0002708 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1C0002A7C (Bulk_Stage_Release.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000407C (Bulk_Stage_FreeScatterGatherList.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  KSPIN_LOCK *v4; // r14
  size_t v5; // rbp
  KIRQL v9; // al
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  KIRQL v14; // dl
  bool v15; // bl
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
  Bulk_Stage_Release(a1, a2, v13);
  ++*(_DWORD *)(v11 + 100);
  Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v11, 0xFFFFFFFF, 0);
  v14 = *(_BYTE *)(a1 + 96);
  --*(_DWORD *)(a1 + 300);
  --*(_DWORD *)(a1 + 304);
  v15 = (*(_BYTE *)(a1 + 276) & 2) != 0;
  KeReleaseSpinLock(v4, v14);
  if ( v15 )
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
