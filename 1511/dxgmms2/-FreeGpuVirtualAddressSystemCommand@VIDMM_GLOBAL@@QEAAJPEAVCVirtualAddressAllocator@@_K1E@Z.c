/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00460A8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0042898 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0043EEC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005FC88 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  struct _RTL_BALANCED_NODE *v8; // rbx
  int started; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // esi
  __int64 *v14; // r15
  __int64 *j; // r14
  __int64 v16; // r8
  _QWORD *v18; // rax
  __int64 v19; // rax
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v20, (struct _KTHREAD **)a2 + 5, a3, a4);
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 + 4);
  v21 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v21, v8);
    if ( started < 0 )
    {
      v8 = v8->Children[0];
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = v8->Children[1];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  if ( v8 )
  {
    if ( ((__int64)v8[3].Children[0] & 0x800) != 0 && !a5 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10);
      v18[3] = a2;
      v18[4] = a3;
      v18[5] = 17840LL;
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        **((struct _EPROCESS ***)a2 + 9),
        (__int64)v8[1].Children[0],
        (char *)v8[1].Children[1] - (char *)v8[1].Children[0]);
      for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
      {
        v14 = (__int64 *)&v8[4].Children[2 * i];
        for ( j = (__int64 *)*v14; j != v14; j = (__int64 *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(j - 1), 1, 0LL);
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v20,
        (struct _KTHREAD **)a2 + 5,
        v11,
        v12);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (struct _RTL_BALANCED_NODE **)a2,
        (struct VIDMM_VAD *)v8,
        v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    }
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v19 + 24) = a2;
    *(_QWORD *)(v19 + 32) = a3;
    WdLogEvent5_WdWarning(v19);
    return 3221225485LL;
  }
}
