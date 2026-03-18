/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0043E5C
 * Callers:
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003FFBC (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0043EEC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *v4; // rsi
  __int64 v7; // rbx
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rax
  struct VIDMM_ALLOC *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( !v4 )
    goto LABEL_2;
  if ( v4[1].Flink->Flink )
  {
    v7 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 40));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, v4);
    *(_QWORD *)(v7 + 48) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 40, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
LABEL_2:
    v10 = 0LL;
    return CVirtualAddressAllocator::UncommitVirtualAddressRange(
             *((CVirtualAddressAllocator **)a2 + 5),
             *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 6),
             &v10,
             1);
  }
  v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = 19049LL;
  WdLogEvent5_WdAssertion(v9);
  return 0LL;
}
