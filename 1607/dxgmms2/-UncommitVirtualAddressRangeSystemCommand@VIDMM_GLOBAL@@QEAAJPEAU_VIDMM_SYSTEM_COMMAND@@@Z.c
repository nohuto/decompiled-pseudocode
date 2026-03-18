/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C004CB78
 * Callers:
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0047FC4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0067E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     CleanupVaRangeReference @ 0x1C00884D4 (CleanupVaRangeReference.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v4; // rax
  __int64 v6; // rbx
  VIDMM_GLOBAL *v7; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v8; // rdx
  CVirtualAddressAllocator *v9; // rcx
  int v10; // esi
  __int64 v11; // rbx
  struct _KTHREAD **v12; // rbp
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  struct VIDMM_ALLOC *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( v2 )
  {
    if ( !v2[1].Flink->Flink )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 20094LL;
      WdLogEvent5_WdAssertion(v4);
      return 0LL;
    }
    v6 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 40));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, v2);
    *(_QWORD *)(v6 + 48) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 40, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
  }
  v8 = (struct VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)a2 + 6);
  v9 = (CVirtualAddressAllocator *)*((_QWORD *)a2 + 5);
  v14 = 0LL;
  v10 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v9, v8, &v14, 1);
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v11 = *((_QWORD *)a2 + 6);
    v12 = (struct _KTHREAD **)*((_QWORD *)a2 + 5);
    if ( (*(_DWORD *)(v11 + 64) & 0x2000) != 0 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, v12 + 5);
      if ( v10 >= 0 )
      {
        v10 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                (CVirtualAddressAllocator *)v12,
                *(struct VIDMM_VAD **)v11,
                (*(_DWORD *)(v11 + 64) >> 4) & 0x3F,
                0LL,
                (struct VIDMM_MAPPED_VA_RANGE *)v11);
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_VARangeHoldReference_60869572_FeatureDescriptorDetails)
          && v10 < 0 )
        {
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v11);
        }
      }
      CleanupVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v11);
      DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13);
    }
  }
  return (unsigned int)v10;
}
