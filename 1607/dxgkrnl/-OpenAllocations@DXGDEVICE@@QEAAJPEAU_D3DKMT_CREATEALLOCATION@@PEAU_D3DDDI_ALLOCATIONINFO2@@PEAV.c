/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C009AE20
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C0144404 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        void *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  __int64 v16; // rcx
  __int64 v17; // rcx
  UINT v18; // ebx
  int v19; // r15d
  UINT NumAllocations; // esi
  UINT Value; // ecx
  UINT v22; // esi
  struct DXGALLOCATION *v23; // r12
  SIZE_T v24; // rax
  struct DXGALLOCATION *v25; // r14
  void *v26; // rsi
  char v27; // r8
  char v28; // r13
  const void *v29; // r10
  size_t v30; // r8
  char *v31; // rcx
  size_t v32; // r8
  const void *v33; // rdx
  void *v34; // rcx
  __int64 v35; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v36; // r8
  void *v37; // rcx
  void *pPrivateDriverData; // rax
  size_t PrivateDriverDataSize; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  PVOID v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  size_t v49; // r8
  size_t v50; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  PVOID v52; // [rsp+28h] [rbp-80h]
  _DXGKARG_OPENALLOCATION v53; // [rsp+38h] [rbp-70h] BYREF

  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v41 + 24) = 3183LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v18 = 0;
  v52 = 0LL;
  v19 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
  {
    v26 = 0LL;
    goto LABEL_35;
  }
  memset(&v53.pOpenAllocation, 0, 0x30uLL);
  Value = v53.Flags.Value;
  if ( !a10 )
    Value = v53.Flags.Value | 1;
  v53.Flags.Value = ((unsigned __int8)Value ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 6)) & 2 ^ Value;
  v53.NumAllocations = NumAllocations;
  v53.pOpenAllocation = a5;
  v53.SubresourceIndex = a11;
  v22 = 0;
  v23 = a4;
  while ( v22 < a2->NumAllocations )
  {
    v35 = v22;
    v53.pOpenAllocation[v35].hAllocation = *((_DWORD *)v23 + 4);
    v53.pOpenAllocation[v35].hDeviceSpecificAllocation = 0LL;
    v36 = &a3[v22];
    v53.pOpenAllocation[v35].PrivateDriverDataSize = v36->PrivateDriverDataSize;
    v37 = a6[v22];
    v53.pOpenAllocation[v35].pPrivateDriverData = v37;
    pPrivateDriverData = v36->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      PrivateDriverDataSize = v36->PrivateDriverDataSize;
      if ( a9 )
        memmove(v37, a7[v22], PrivateDriverDataSize);
      else
        memmove(v53.pOpenAllocation[v35].pPrivateDriverData, pPrivateDriverData, PrivateDriverDataSize);
    }
    else if ( v36->PrivateDriverDataSize && a9 )
    {
      v42 = WdLogNewEntry5_WdWarning(v37, v22, v36, v35 * 32);
      *(_QWORD *)(v42 + 24) = this;
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v42);
      v19 = -1073741811;
    }
    ++v22;
    v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
  }
  v24 = a2->PrivateDriverDataSize;
  v53.PrivateDriverSize = a2->PrivateDriverDataSize;
  v25 = a4;
  if ( a2->pStandardAllocation )
  {
    v43 = operator new(v24, 0x4B677844u, PagedPool);
    v26 = v43;
    v52 = v43;
    if ( !v43 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
      v48[3] = this;
      v48[4] = a2->PrivateDriverDataSize;
      v19 = -1073741801;
      v48[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v48);
      goto LABEL_35;
    }
    v53.pPrivateDriverData = v43;
    v49 = a2->PrivateDriverDataSize;
    if ( a9 )
      memmove(v43, Src, v49);
    else
      memmove(v43, a2->pStandardAllocation, v49);
  }
  else
  {
    v26 = 0LL;
  }
  if ( v19 >= 0 )
  {
    v19 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 48), &v53);
    if ( v19 >= 0 )
    {
      if ( a12 )
        *a12 = v53.Pitch;
      if ( a13 )
        *a13 = v53.SubresourceOffset;
      v27 = a10;
      if ( !v26 || a10 )
      {
        v28 = a9;
      }
      else
      {
        v28 = a9;
        if ( a9 )
        {
          v50 = a2->PrivateDriverDataSize;
          pStandardAllocation = a2->pStandardAllocation;
          if ( (unsigned __int64)pStandardAllocation + v50 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v50) <= pStandardAllocation )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(pStandardAllocation, v26, v50);
          memmove(Src, v26, a2->PrivateDriverDataSize);
          v27 = a10;
        }
        else
        {
          memmove(a2->pStandardAllocation, v26, a2->PrivateDriverDataSize);
          v27 = a10;
        }
      }
      while ( v18 < a2->NumAllocations )
      {
        *((_QWORD *)v25 + 4) = v53.pOpenAllocation[v18].hDeviceSpecificAllocation;
        v29 = a6[v18];
        if ( v29 && !v27 )
        {
          if ( v28 )
          {
            v30 = a3[v18].PrivateDriverDataSize;
            v31 = (char *)a3[v18].pPrivateDriverData;
            if ( (unsigned __int64)&v31[v30] > MmUserProbeAddress || &v31[v30] <= v31 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v31, v29, v30);
            v32 = a3[v18].PrivateDriverDataSize;
            v33 = a6[v18];
            v34 = a7[v18];
          }
          else
          {
            v32 = a3[v18].PrivateDriverDataSize;
            v33 = a6[v18];
            v34 = a3[v18].pPrivateDriverData;
          }
          memmove(v34, v33, v32);
        }
        ++v18;
        v25 = (struct DXGALLOCATION *)*((_QWORD *)v25 + 8);
        v27 = a10;
      }
      v26 = v52;
    }
  }
LABEL_35:
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  return (unsigned int)v19;
}
