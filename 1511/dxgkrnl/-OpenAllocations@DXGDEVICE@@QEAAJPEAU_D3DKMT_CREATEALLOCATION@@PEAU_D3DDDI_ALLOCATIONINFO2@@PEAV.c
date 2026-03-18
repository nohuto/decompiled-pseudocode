/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C0072190
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C01245FC (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        D3DKMT_CREATESTANDARDALLOCATION *a8,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  struct DXGALLOCATION *v13; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  UINT v18; // ebx
  void *v19; // r13
  int v20; // r14d
  UINT NumAllocations; // edx
  UINT v22; // r15d
  __int64 v23; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v24; // r8
  __int64 v25; // r10
  void *v26; // rcx
  void *pPrivateDriverData; // rdx
  size_t PrivateDriverDataSize; // r8
  __int64 v29; // rax
  struct DXGALLOCATION *v30; // rsi
  UINT v31; // eax
  PVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  char v39; // r8
  size_t v40; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v41; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v42; // rcx
  const void *v43; // r9
  size_t v44; // r8
  char *v45; // rcx
  size_t v46; // r8
  const void *v47; // rdx
  void *v48; // rcx
  _DXGKARG_OPENALLOCATION v50; // [rsp+38h] [rbp-70h] BYREF

  v13 = a4;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 128)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 3010LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  NumAllocations = a2->NumAllocations;
  if ( NumAllocations )
  {
    memset(&v50.pOpenAllocation, 0, 48);
    v50.Flags.Value = ((a10 == 0) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 6)) & 2 ^ (a10 == 0);
    v50.NumAllocations = NumAllocations;
    v50.pOpenAllocation = a5;
    v50.SubresourceIndex = a11;
    v22 = 0;
    do
    {
      v23 = v22;
      v50.pOpenAllocation[v23].hAllocation = *((_DWORD *)v13 + 4);
      v50.pOpenAllocation[v23].hDeviceSpecificAllocation = 0LL;
      v24 = &a3[v22];
      v50.pOpenAllocation[v23].PrivateDriverDataSize = v24->PrivateDriverDataSize;
      v25 = v22;
      v26 = a6[v25];
      v50.pOpenAllocation[v23].pPrivateDriverData = v26;
      pPrivateDriverData = v24->pPrivateDriverData;
      if ( pPrivateDriverData )
      {
        PrivateDriverDataSize = v24->PrivateDriverDataSize;
        if ( a9 )
          memmove(v26, a7[v25], PrivateDriverDataSize);
        else
          memmove(v50.pOpenAllocation[v23].pPrivateDriverData, pPrivateDriverData, PrivateDriverDataSize);
      }
      else if ( v24->PrivateDriverDataSize && a9 )
      {
        v29 = WdLogNewEntry5_WdWarning(v26, 0LL, v24, v23 * 32);
        *(_QWORD *)(v29 + 24) = this;
        *(_QWORD *)(v29 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v29);
        v20 = -1073741811;
      }
      ++v22;
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
    }
    while ( v22 < a2->NumAllocations );
    v30 = a4;
    v19 = 0LL;
    v31 = a2->PrivateDriverDataSize;
    v50.PrivateDriverSize = v31;
    if ( a2->pStandardAllocation )
    {
      v32 = operator new[](v31, 0x4B677844u, PagedPool);
      v19 = v32;
      if ( !v32 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
        v37[3] = this;
        v37[4] = a2->PrivateDriverDataSize;
        v20 = -1073741801;
        v37[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v37);
        goto LABEL_49;
      }
      v50.pPrivateDriverData = v32;
      pStandardAllocation = a8;
      if ( !a9 )
        pStandardAllocation = a2->pStandardAllocation;
      memmove(v32, pStandardAllocation, a2->PrivateDriverDataSize);
    }
    if ( v20 >= 0 )
    {
      v20 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 45), &v50);
      if ( v20 >= 0 )
      {
        if ( a12 )
          *a12 = v50.Pitch;
        if ( a13 )
          *a13 = v50.SubresourceOffset;
        v39 = a10;
        if ( !v19 || a10 )
          goto LABEL_37;
        if ( a9 )
        {
          v40 = a2->PrivateDriverDataSize;
          v41 = a2->pStandardAllocation;
          if ( (unsigned __int64)v41 + v40 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)v41 + v40) <= v41 )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v41, v19, v40);
          v42 = a8;
        }
        else
        {
          v42 = a2->pStandardAllocation;
        }
        memmove(v42, v19, a2->PrivateDriverDataSize);
        while ( 1 )
        {
          v39 = a10;
LABEL_37:
          if ( v18 >= a2->NumAllocations )
            break;
          *((_QWORD *)v30 + 4) = v50.pOpenAllocation[v18].hDeviceSpecificAllocation;
          v43 = a6[v18];
          if ( v43 && !v39 )
          {
            if ( a9 )
            {
              v44 = a3[v18].PrivateDriverDataSize;
              v45 = (char *)a3[v18].pPrivateDriverData;
              if ( (unsigned __int64)&v45[v44] > MmUserProbeAddress || &v45[v44] <= v45 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v45, v43, v44);
              v46 = a3[v18].PrivateDriverDataSize;
              v47 = a6[v18];
              v48 = a7[v18];
            }
            else
            {
              v46 = a3[v18].PrivateDriverDataSize;
              v47 = a6[v18];
              v48 = a3[v18].pPrivateDriverData;
            }
            memmove(v48, v47, v46);
          }
          ++v18;
          v30 = (struct DXGALLOCATION *)*((_QWORD *)v30 + 8);
        }
      }
    }
  }
LABEL_49:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v20;
}
