/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C007F320
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C011E978 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
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
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  UINT v21; // ebx
  void *v22; // r9
  int v23; // r15d
  UINT NumAllocations; // edx
  UINT v25; // esi
  struct DXGALLOCATION *v26; // r12
  unsigned __int64 v27; // rax
  struct DXGALLOCATION *v28; // r14
  char v29; // r8
  char v30; // r13
  const void *v31; // r10
  size_t v32; // r8
  char *v33; // rcx
  size_t v34; // r8
  const void *v35; // rdx
  void *v36; // rcx
  __int64 v37; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v38; // r8
  void *v39; // rcx
  void *pPrivateDriverData; // rax
  size_t PrivateDriverDataSize; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  size_t v52; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v53; // rcx
  void *Src; // [rsp+28h] [rbp-80h]
  _DXGKARG_OPENALLOCATION v55; // [rsp+38h] [rbp-70h] BYREF

  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 128)) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v43 + 24) = 3076LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v21 = 0;
  v22 = 0LL;
  Src = 0LL;
  v23 = 0;
  NumAllocations = a2->NumAllocations;
  if ( NumAllocations )
  {
    memset(&v55.pOpenAllocation, 0, 48);
    v55.Flags.Value = ((a10 == 0) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 6)) & 2 ^ (a10 == 0);
    v55.NumAllocations = NumAllocations;
    v55.pOpenAllocation = a5;
    v55.SubresourceIndex = a11;
    v25 = 0;
    v26 = a4;
    while ( v25 < a2->NumAllocations )
    {
      v37 = v25;
      v55.pOpenAllocation[v37].hAllocation = *((_DWORD *)v26 + 4);
      v55.pOpenAllocation[v37].hDeviceSpecificAllocation = 0LL;
      v38 = &a3[v25];
      v55.pOpenAllocation[v37].PrivateDriverDataSize = v38->PrivateDriverDataSize;
      v39 = a6[v25];
      v55.pOpenAllocation[v37].pPrivateDriverData = v39;
      pPrivateDriverData = v38->pPrivateDriverData;
      if ( pPrivateDriverData )
      {
        PrivateDriverDataSize = v38->PrivateDriverDataSize;
        if ( a9 )
          memmove(v39, a7[v25], PrivateDriverDataSize);
        else
          memmove(v55.pOpenAllocation[v37].pPrivateDriverData, pPrivateDriverData, PrivateDriverDataSize);
      }
      else if ( v38->PrivateDriverDataSize && a9 )
      {
        v44 = WdLogNewEntry5_WdWarning(v39, v25, v38, v37 * 32);
        *(_QWORD *)(v44 + 24) = this;
        *(_QWORD *)(v44 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v44);
        v23 = -1073741811;
      }
      ++v25;
      v26 = (struct DXGALLOCATION *)*((_QWORD *)v26 + 8);
    }
    v27 = a2->PrivateDriverDataSize;
    v55.PrivateDriverSize = a2->PrivateDriverDataSize;
    v28 = a4;
    if ( a2->pStandardAllocation )
    {
      v45 = operator new[](v27, 0x4B677844u, PagedPool);
      Src = v45;
      if ( !v45 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
        v50[3] = this;
        v50[4] = a2->PrivateDriverDataSize;
        v23 = -1073741801;
        v50[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v50);
LABEL_31:
        v22 = Src;
        goto LABEL_32;
      }
      v55.pPrivateDriverData = v45;
      pStandardAllocation = a8;
      if ( !a9 )
        pStandardAllocation = a2->pStandardAllocation;
      memmove(v45, pStandardAllocation, a2->PrivateDriverDataSize);
    }
    if ( v23 >= 0 )
    {
      v23 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 45), &v55);
      if ( v23 >= 0 )
      {
        if ( a12 )
          *a12 = v55.Pitch;
        if ( a13 )
          *a13 = v55.SubresourceOffset;
        v29 = a10;
        if ( !Src || a10 )
        {
          v30 = a9;
        }
        else
        {
          v30 = a9;
          if ( a9 )
          {
            v52 = a2->PrivateDriverDataSize;
            v53 = a2->pStandardAllocation;
            if ( (unsigned __int64)v53 + v52 > MmUserProbeAddress
              || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)v53 + v52) <= v53 )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(v53, Src, v52);
            memmove(a8, Src, a2->PrivateDriverDataSize);
            v29 = a10;
          }
          else
          {
            memmove(a2->pStandardAllocation, Src, a2->PrivateDriverDataSize);
            v29 = a10;
          }
        }
        while ( v21 < a2->NumAllocations )
        {
          *((_QWORD *)v28 + 4) = v55.pOpenAllocation[v21].hDeviceSpecificAllocation;
          v31 = a6[v21];
          if ( v31 && !v29 )
          {
            if ( v30 )
            {
              v32 = a3[v21].PrivateDriverDataSize;
              v33 = (char *)a3[v21].pPrivateDriverData;
              if ( (unsigned __int64)&v33[v32] > MmUserProbeAddress || &v33[v32] <= v33 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v33, v31, v32);
              v34 = a3[v21].PrivateDriverDataSize;
              v35 = a6[v21];
              v36 = a7[v21];
            }
            else
            {
              v34 = a3[v21].PrivateDriverDataSize;
              v35 = a6[v21];
              v36 = a3[v21].pPrivateDriverData;
            }
            memmove(v36, v35, v34);
          }
          ++v21;
          v28 = (struct DXGALLOCATION *)*((_QWORD *)v28 + 8);
          v29 = a10;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_32:
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v23;
}
