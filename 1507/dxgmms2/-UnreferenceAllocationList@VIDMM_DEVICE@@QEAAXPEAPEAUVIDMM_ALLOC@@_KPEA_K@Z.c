/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0059730
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C004CE6C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0058204 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058D2C (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 2) + 304LL));
  v10 = (struct VIDMM_ALLOC **)&a2[a3];
  while ( a2 != (__int64 ***)v10 )
  {
    v11 = *a2;
    v12 = ***a2;
    v13 = (*(_DWORD *)(v12 + 80) >> 5) & 1;
    if ( *((_DWORD *)*a2 + 38) == (_DWORD)v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v13, v8, v9);
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 32) = (*(_DWORD *)(**v11 + 80) >> 5) & 1;
      WdLogEvent5_WdAssertion(v14);
    }
    else
    {
      v15 = (*((_DWORD *)v11 + 38))-- == 1;
      v16 = *((int *)v11 + 39);
      if ( v15 )
      {
        if ( (_DWORD)v16 )
        {
          v17 = **v11;
          if ( !*(_BYTE *)(v17 + 93) )
          {
            v18 = WdLogNewEntry5_WdAssertion(v17, v13, v8, v9);
            *(_QWORD *)(v18 + 24) = v16;
            WdLogEvent5_WdAssertion(v18);
            VidSchiMarkDeviceAsError(v11[1][4], 15);
          }
        }
      }
      if ( !(*((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38)) )
        VIDMM_DEVICE::NotifyAllocationEvicted(this, v11);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((struct VIDMM_GLOBAL ***)this + 2), a4, 0, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
}
