/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0053680
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0051E8C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0053DB4 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005656C (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_DEVICE::UnreferenceAllocationList(
        VIDMM_DEVICE *this,
        __int64 ***a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  struct VIDMM_ALLOC **v10; // r14
  __int64 **v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
    (struct _KTHREAD **)(*((_QWORD *)this + 2) + 304LL),
    a3,
    (__int64)a4);
  v10 = (struct VIDMM_ALLOC **)&a2[a3];
  while ( a2 != (__int64 ***)v10 )
  {
    v11 = *a2;
    v12 = ***a2;
    v13 = (*(_DWORD *)(v12 + 80) >> 5) & 1;
    if ( *((_DWORD *)*a2 + 38) == (_DWORD)v13 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v13, v8, v9);
      *(_QWORD *)(v16 + 24) = v11;
      *(_QWORD *)(v16 + 32) = (*(_DWORD *)(**v11 + 80) >> 5) & 1;
      WdLogEvent5_WdAssertion(v16);
    }
    else
    {
      v14 = (*((_DWORD *)v11 + 38))-- == 1;
      v15 = *((int *)v11 + 39);
      if ( v14 )
      {
        if ( (_DWORD)v15 )
        {
          v17 = **v11;
          if ( !*(_BYTE *)(v17 + 93) )
          {
            v18 = WdLogNewEntry5_WdAssertion(v17, v13, v8, v9);
            *(_QWORD *)(v18 + 24) = v15;
            WdLogEvent5_WdAssertion(v18);
            VidSchiMarkDeviceAsError(v11[1][4], 15);
          }
        }
      }
      if ( !(*((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38)) )
        VIDMM_DEVICE::NotifyAllocationEvicted(this, (struct VIDMM_ALLOC *)v11);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), a4, 0, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
}
