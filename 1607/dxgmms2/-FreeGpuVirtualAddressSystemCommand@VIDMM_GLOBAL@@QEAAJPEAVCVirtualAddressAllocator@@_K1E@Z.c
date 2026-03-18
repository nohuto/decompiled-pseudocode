/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004E3BC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C005A678 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0067768 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0067E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
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
  _QWORD *v11; // rax
  unsigned int v13; // ebp
  __int64 *v14; // r15
  __int64 *i; // r14
  __int64 *v16; // r15
  __int64 *j; // r14
  __int64 v18; // r8
  __int64 v19; // rax
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct CVirtualAddressAllocator *)((char *)a2 + 40));
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 + 4);
  v21 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v21, v8);
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  if ( v8 )
  {
    if ( ((__int64)v8[3].Children[0] & 0x800) == 0 || a5 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        **((struct _EPROCESS ***)a2 + 9),
        (unsigned __int64)v8[1].Children[0],
        (char *)v8[1].Children[1] - (char *)v8[1].Children[0]);
      v13 = 0;
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
      {
        if ( *((_DWORD *)this + 1604) )
        {
          do
          {
            v14 = (__int64 *)((char *)&v8[4] + 32 * v13);
            for ( i = (__int64 *)*v14; i != v14; i = (__int64 *)*i )
              VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(i - 1), 1u, 0LL);
            ++v13;
          }
          while ( v13 < *((_DWORD *)this + 1604) );
        }
      }
      else if ( *((_DWORD *)this + 1604) )
      {
        do
        {
          v16 = (__int64 *)&v8[4].Children[2 * v13];
          for ( j = (__int64 *)*v16; j != v16; j = (__int64 *)*j )
            VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(j - 1), 1u, 0LL);
          ++v13;
        }
        while ( v13 < *((_DWORD *)this + 1604) );
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, (struct _KTHREAD **)a2 + 5);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(a2, (struct VIDMM_VAD *)v8, v18);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v10);
      v11[3] = a2;
      v11[4] = a3;
      v11[5] = 18699LL;
      WdLogEvent5_WdWarning(v11);
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
