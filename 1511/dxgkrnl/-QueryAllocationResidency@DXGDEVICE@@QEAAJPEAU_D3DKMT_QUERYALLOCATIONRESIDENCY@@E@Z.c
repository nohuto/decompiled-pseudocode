/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0070604
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C00BB470 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00046CC (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        DXGDEVICE *this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  __int64 hResource; // r8
  UINT i; // r14d
  __int64 v9; // r15
  const D3DKMT_HANDLE *v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v16; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  ULONG_PTR j; // r14
  int v25; // eax
  _DWORD *pResidencyStatus; // rdx
  _QWORD *v27; // rax
  struct _EX_RUNDOWN_REF *v28; // [rsp+58h] [rbp+10h] BYREF

  v6 = 1;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; i < a2->AllocationCount; ++i )
      {
        v9 = i;
        v10 = &a2->phAllocationList[v9];
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v11 = *v10;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v28, *v10);
        if ( !v28 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, 0LL, v14);
          v27[3] = this;
          v27[4] = v11;
          v27[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v27);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28);
          return 3221225485LL;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                                              (struct _VIDMM_MULTI_ALLOC *)v28[3].Count);
        v16 = &a2->pResidencyStatus[v9];
        if ( (unsigned __int64)v16 >= MmUserProbeAddress )
          v16 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
        *v16 = AllocationResidency;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28);
      }
      return 0LL;
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v18[3] = this;
    v18[4] = a2->AllocationCount;
    v18[5] = -1073741811LL;
    goto LABEL_28;
  }
  if ( a2->AllocationCount )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v18[3] = this;
    v18[4] = -1073741811LL;
LABEL_28:
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v28, hResource);
  if ( v28 )
  {
    for ( j = v28[3].Count; j; j = *(_QWORD *)(j + 64) )
    {
      v25 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
              *(struct _VIDMM_MULTI_ALLOC **)(j + 24));
      if ( v25 == 3 )
      {
        v6 = 3;
        break;
      }
      if ( v25 == 2 )
        v6 = 2;
    }
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v6;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
    return 0LL;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
  v23[3] = this;
  v23[4] = a2->hResource;
  v23[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v23);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
  return 3221225485LL;
}
