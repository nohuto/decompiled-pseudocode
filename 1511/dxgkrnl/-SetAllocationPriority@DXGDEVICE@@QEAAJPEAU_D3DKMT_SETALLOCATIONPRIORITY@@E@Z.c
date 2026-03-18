/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01333A4
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C0134B70 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C001CA68 (-VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(
        DXGDEVICE *this,
        struct _D3DKMT_SETALLOCATIONPRIORITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 hResource; // r8
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  unsigned int *pPriorities; // rdx
  unsigned int v15; // esi
  ULONG_PTR i; // rbx
  __int64 j; // rsi
  unsigned int *v18; // rdx
  unsigned int v19; // r14d
  unsigned int *v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  _QWORD *v25; // rax
  struct _EX_RUNDOWN_REF *v26; // [rsp+58h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      v7 = WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v7);
      return 3221225485LL;
    }
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v26, hResource);
    if ( !v26 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      v13[3] = this;
      v13[4] = a2->hResource;
      v13[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v13);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
      return 3221225485LL;
    }
    pPriorities = (unsigned int *)a2->pPriorities;
    if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
      pPriorities = (unsigned int *)MmUserProbeAddress;
    v15 = *pPriorities;
    for ( i = v26[3].Count; i; i = *(_QWORD *)(i + 64) )
      VIDMM_EXPORT::VidMmSetAllocationPriority(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
        *(struct _VIDMM_MULTI_ALLOC **)(i + 24),
        v15);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
  }
  else if ( a2->AllocationCount )
  {
    for ( j = 0LL; (unsigned int)j < a2->AllocationCount; j = (unsigned int)(j + 1) )
    {
      v18 = (unsigned int *)&a2->phAllocationList[j];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      v19 = *v18;
      v20 = (unsigned int *)&a2->pPriorities[j];
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (unsigned int *)MmUserProbeAddress;
      v21 = *v20;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v26, v19);
      if ( !v26 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, 0LL, v24);
        v25[3] = this;
        v25[4] = v19;
        v25[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v25);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
        return 3221225485LL;
      }
      VIDMM_EXPORT::VidMmSetAllocationPriority(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
        (struct _VIDMM_MULTI_ALLOC *)v26[3].Count,
        v21);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
    }
  }
  return 0LL;
}
