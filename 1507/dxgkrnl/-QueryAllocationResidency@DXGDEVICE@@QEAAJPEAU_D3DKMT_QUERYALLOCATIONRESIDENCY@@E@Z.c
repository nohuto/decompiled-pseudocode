/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C007D3DC
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C00A8460 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0005194 (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F698 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        DXGDEVICE *this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // esi
  __int64 hResource; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR Count; // r14
  int v16; // eax
  _DWORD *pResidencyStatus; // rdx
  UINT i; // r14d
  __int64 v19; // r15
  const D3DKMT_HANDLE *v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  _QWORD *v31; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  __int64 v33; // rdx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v34; // r8
  _BYTE v36[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+68h] [rbp+10h] BYREF

  v6 = 1;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
        v19 = i;
        v20 = &a2->phAllocationList[v19];
        if ( (unsigned __int64)v20 >= MmUserProbeAddress )
          v20 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v21 = *v20;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v37, *v20);
        if ( !v37 )
          break;
        v29 = *(_QWORD *)(v37[1].Count + 16);
        v30 = *((_QWORD *)this + 2);
        if ( *(_QWORD *)(v29 + 16) != *(_QWORD *)(v30 + 16) )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v31[3] = this;
          v31[4] = v37;
          v31[5] = -1073741811LL;
          WdLogEvent5_WdError(v31);
          goto LABEL_26;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *(VIDMM_EXPORT **)(v30 + 400),
                                              *(struct VIDMM_GLOBAL **)(v30 + 408),
                                              (struct _VIDMM_MULTI_ALLOC *)v37[3].Count);
        v34 = &a2->pResidencyStatus[v19];
        if ( (unsigned __int64)v34 >= MmUserProbeAddress )
          v34 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
        *v34 = AllocationResidency;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v33, (__int64)v34, (unsigned int)AllocationResidency);
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, 0LL, v24);
      v25[3] = this;
      v25[4] = v21;
      v25[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
LABEL_26:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v26, v27, v28);
      return 3221225485LL;
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v8[3] = this;
    v8[4] = a2->AllocationCount;
    v8[5] = -1073741811LL;
    goto LABEL_34;
  }
  if ( a2->AllocationCount )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v8[3] = this;
    v8[4] = -1073741811LL;
LABEL_34:
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v37, hResource);
  if ( !v37 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0LL, v10, v11);
    v12[3] = this;
    v12[4] = a2->hResource;
    v12[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
LABEL_6:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v37);
    return 3221225485LL;
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(v37[1].Count + 16) + 16LL) != v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = this;
    v14[4] = v37;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_6;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)&v37[10]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  Count = v37[3].Count;
  if ( Count )
  {
    while ( 1 )
    {
      v16 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
              *(struct _VIDMM_MULTI_ALLOC **)(Count + 24));
      if ( v16 == 3 )
        break;
      if ( v16 == 2 )
        v6 = 2;
      Count = *(_QWORD *)(Count + 64);
      if ( !Count )
        goto LABEL_16;
    }
    v6 = 3;
  }
LABEL_16:
  pResidencyStatus = a2->pResidencyStatus;
  if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
    pResidencyStatus = (_DWORD *)MmUserProbeAddress;
  *pResidencyStatus = v6;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v37);
  return 0LL;
}
