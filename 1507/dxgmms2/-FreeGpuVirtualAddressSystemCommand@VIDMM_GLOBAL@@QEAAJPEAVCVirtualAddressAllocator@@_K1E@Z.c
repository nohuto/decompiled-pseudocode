/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004DB7C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0053BFC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E694 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0061B9C (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  unsigned int i; // esi
  __int64 *v16; // r15
  __int64 *j; // r14
  __int64 v18; // rax
  _BYTE v19[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct CVirtualAddressAllocator *)((char *)a2 + 40));
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 + 4);
  v20 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v20, v8);
    if ( started >= 0 )
    {
      if ( started <= 0 )
        break;
      v8 = v8->Children[1];
    }
    else
    {
      v8 = v8->Children[0];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v8 )
  {
    if ( ((__int64)v8[3].Children[0] & 0x800) == 0 || a5 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        **((struct _EPROCESS ***)a2 + 9),
        (unsigned __int64)v8[1].Children[0],
        (char *)v8[1].Children[1] - (char *)v8[1].Children[0]);
      for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
      {
        v16 = (__int64 *)&v8[4].Children[2 * i];
        for ( j = (__int64 *)*v16; j != v16; j = (__int64 *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(j - 1), 1u, 0LL);
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
        (struct CVirtualAddressAllocator *)((char *)a2 + 40));
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(a2, (struct VIDMM_VAD *)v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v13[3] = a2;
      v13[4] = a3;
      v13[5] = 17517LL;
      WdLogEvent5_WdWarning(v13);
    }
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = a3;
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
}
