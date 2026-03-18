/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0053C8C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0053BFC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0063528 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *v4; // rsi
  __int64 v6; // rax
  __int64 v8; // rbx
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_ALLOC *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( v4 )
  {
    if ( !v4[1].Flink->Flink )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v6 + 24) = 18718LL;
      WdLogEvent5_WdAssertion(v6);
      return 0LL;
    }
    v8 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 40));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, v4);
    *(_QWORD *)(v8 + 48) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 40, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
  }
  v10 = 0LL;
  return CVirtualAddressAllocator::UncommitVirtualAddressRange(
           *((CVirtualAddressAllocator **)a2 + 5),
           *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 6),
           &v10,
           1u);
}
