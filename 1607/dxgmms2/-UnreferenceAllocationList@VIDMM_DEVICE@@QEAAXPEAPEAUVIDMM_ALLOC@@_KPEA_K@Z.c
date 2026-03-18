/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C005C5E8
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C005942C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005B948 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D69C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005D6EC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_DEVICE::UnreferenceAllocationList(
        VIDMM_DEVICE *this,
        __int64 ***a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  struct VIDMM_ALLOC **v8; // r14
  __int64 **v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)(*((_QWORD *)this + 2) + 328LL));
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  v8 = (struct VIDMM_ALLOC **)&a2[a3];
  while ( a2 != (__int64 ***)v8 )
  {
    v9 = *a2;
    v10 = ***a2;
    v11 = (*(_DWORD *)(v10 + 80) >> 5) & 1;
    if ( *((_DWORD *)*a2 + 42) == (_DWORD)v11 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v11);
      *(_QWORD *)(v14 + 24) = v9;
      *(_QWORD *)(v14 + 32) = (*(_DWORD *)(**v9 + 80) >> 5) & 1;
      WdLogEvent5_WdAssertion(v14);
    }
    else
    {
      v12 = (*((_DWORD *)v9 + 42))-- == 1;
      v13 = *((int *)v9 + 43);
      if ( v12 )
      {
        if ( (_DWORD)v13 )
        {
          v15 = **v9;
          if ( !*(_BYTE *)(v15 + 96) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v15, v11);
            *(_QWORD *)(v16 + 24) = v13;
            WdLogEvent5_WdAssertion(v16);
            VidSchiMarkDeviceAsError(v9[1][4], 15);
          }
        }
      }
      if ( !(*((_BYTE *)v9 + 25) & 1 | *((_DWORD *)v9 + 42)) )
        VIDMM_DEVICE::NotifyAllocationEvicted(this, v9);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), a4, 0, 1);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
