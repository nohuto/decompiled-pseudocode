/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C004DF70
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0057E30 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C005A7B4 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAV.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0067E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0094AA4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  D3DGPU_SIZE_T SizeInPages; // rax
  unsigned __int64 *p_PagingFenceValue; // r14
  int v7; // r10d
  unsigned __int64 v8; // r15
  D3DGPU_SIZE_T v11; // rdi
  int v13; // r12d
  __int64 *v14; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v16; // r8
  D3DGPU_SIZE_T v17; // rcx
  __int64 v18; // rax
  D3DGPU_SIZE_T v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbp
  struct _EPROCESS ***v28; // rbp
  D3DGPU_SIZE_T v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // rax
  bool v37; // zf
  struct VIDMM_PAGING_QUEUE *v38; // r12
  unsigned int v39; // ebx
  int v40; // ebx
  bool v41; // r9
  __int64 v42; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-140h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-138h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-130h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-120h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-118h]
  _OWORD v48[14]; // [rsp+80h] [rbp-E8h] BYREF
  struct VIDMM_VAD_PENDING_OPERATION *v50; // [rsp+180h] [rbp+18h] BYREF

  SizeInPages = a4->SizeInPages;
  p_PagingFenceValue = &a4->PagingFenceValue;
  v7 = *((_DWORD *)a2 + 38);
  v8 = 0LL;
  LODWORD(v50) = v7;
  if ( !a5 )
    p_PagingFenceValue = 0LL;
  v11 = SizeInPages << 12;
  v13 = 4096;
  if ( a3 )
  {
    if ( !SizeInPages )
      v11 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v14 = *a3;
    OffsetInPages = a4->OffsetInPages;
    v16 = **a3;
    v17 = *(_QWORD *)(v16 + 16) >> 12;
    if ( OffsetInPages >= v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(v17);
      *(_QWORD *)(v18 + 24) = a4->OffsetInPages;
      *(_QWORD *)(v18 + 32) = 18890LL;
      WdLogEvent5_WdWarning(v18);
      return 3221225485LL;
    }
    v20 = v17 - OffsetInPages;
    if ( v20 < v11 >> 12 && (*((_BYTE *)this + 40873) & 2) == 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v20);
      *(_QWORD *)(v21 + 24) = a4->SizeInPages;
      *(_QWORD *)(v21 + 32) = 18901LL;
      WdLogEvent5_WdWarning(v21);
      return 3221225485LL;
    }
    v22 = 1LL;
    v23 = v14[1];
    if ( *(_DWORD *)(v16 + 32) > 0x1000u )
      v13 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    v24 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v24 )
      v23 = *(_QWORD *)(v24 + 8);
    else
      v23 = 0LL;
    v22 = 0LL;
    v7 = (int)v50;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v22 = 6LL;
  }
  if ( v11 )
  {
    v26 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
    v27 = *(_QWORD **)(*(_QWORD *)(v23 + 16) + 8 * v26);
    if ( v27
      && (v26 = *v27, *(_DWORD *)(*v27 + 40864LL))
      && ((*(_DWORD *)(v23 + 48) & 2) == 0
        ? (v28 = (struct _EPROCESS ***)v27[58])
        : (v28 = *(struct _EPROCESS ****)(v26 + 0x800009D98LL)),
          v28) )
    {
      DriverProtection = a4->DriverProtection;
      Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
      MaximumAddress = a4->MaximumAddress;
      MinimumAddress = a4->MinimumAddress;
      BaseAddress = a4->BaseAddress;
      v29 = a4->OffsetInPages << 12;
      v50 = 0LL;
      v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD, _BYTE, _BYTE))CVirtualAddressAllocator::MapVirtualAddressRange)(
              v28,
              a3,
              v29,
              v22,
              v11,
              BaseAddress,
              MinimumAddress,
              MaximumAddress,
              v13,
              Value,
              DriverProtection,
              v7,
              &v50,
              1,
              1);
      v35 = v30;
      if ( v30 )
      {
        v37 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
        a4->VirtualAddress = *(_QWORD *)(v30 + 96);
        a4->PagingFenceValue = 0LL;
        if ( v37 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 128));
          memset(&v48[5], 0, 0x58uLL);
          v40 = *(_DWORD *)(v35 + 64) << 28;
          v48[8] = (unsigned __int64)v35;
          *((_QWORD *)&v48[7] + 1) = v28;
          *(_QWORD *)&v48[9] = v50;
          memset(v48, 0, 0x50uLL);
          v38 = a2;
          LODWORD(v48[0]) = 113;
          *((_QWORD *)&v48[0] + 1) = *((_QWORD *)a2 + 18);
          if ( v40 >> 28 == 1 )
            *(_QWORD *)&v48[1] = *(_QWORD *)(v35 + 56);
          v48[2] = *(_OWORD *)((char *)&v48[7] + 8);
          *(_QWORD *)&v48[4] = *((_QWORD *)&v48[9] + 1);
          LOBYTE(v48[4]) = 1;
          v48[3] = *(_OWORD *)((char *)&v48[8] + 8);
          v41 = !p_PagingFenceValue || !dword_1C0035320;
          v39 = VIDMM_GLOBAL::QueueDeferredCommand(
                  this,
                  a2,
                  (struct _VIDMM_DEFERRED_COMMAND *)v48,
                  v41,
                  p_PagingFenceValue);
          if ( v39 == 259 && a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
          {
            a3[32] = (__int64 *)a2;
            a3[35] = (__int64 *)*p_PagingFenceValue;
          }
        }
        else
        {
          if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a)
            && EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_VARangeHoldReference_60869572_FeatureDescriptorDetails) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 128));
          }
          v38 = a2;
          v39 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
                  this,
                  (struct CVirtualAddressAllocator *)v28,
                  (struct VIDMM_MAPPED_VA_RANGE *)v35,
                  0,
                  v50);
        }
        if ( *((_QWORD *)this + 5115) )
        {
          if ( p_PagingFenceValue )
            v8 = *p_PagingFenceValue;
          VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, *v28[9], (struct VIDMM_MAPPED_VA_RANGE *)v35, v38, v8);
        }
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
          (VIDMM_MAPPED_VA_RANGE *)v35,
          (struct CVirtualAddressAllocator *)v28);
        return v39;
      }
      else
      {
        v36 = WdLogNewEntry5_WdError(v32, v31, v33, v34);
        *(_QWORD *)(v36 + 24) = 18956LL;
        WdLogEvent5_WdError(v36);
        return 3221225473LL;
      }
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v26);
      WdLogEvent5_WdWarning(v42);
      return 3221225495LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v20);
    *(_QWORD *)(v25 + 24) = a4->SizeInPages;
    *(_QWORD *)(v25 + 32) = 18923LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
}
