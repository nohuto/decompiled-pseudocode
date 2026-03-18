/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0055894
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0055758 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004BFD8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0053BFC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C0061E50 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAV.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062E54 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // rbx
  D3DGPU_SIZE_T v11; // rsi
  int v12; // r13d
  __int64 v13; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // r8
  D3DGPU_SIZE_T v16; // rcx
  __int64 v17; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  D3DGPU_SIZE_T v20; // rcx
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _EPROCESS ***VirtualAddressAllocator; // rbp
  __int64 v26; // r8
  unsigned int v27; // r10d
  int v28; // r11d
  __int64 v29; // rax
  D3DGPU_SIZE_T v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v33; // rsi
  __int64 v34; // rax
  bool v35; // zf
  unsigned int v36; // eax
  struct VIDMM_PAGING_QUEUE *v37; // r13
  unsigned int v38; // edi
  struct _MDL *BaseAddress; // [rsp+28h] [rbp-80h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-78h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-70h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-60h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-58h]
  struct VIDMM_VAD_PENDING_OPERATION *v45; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  LODWORD(v45) = *((_DWORD *)a2 + 34);
  v7 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v5);
  v8 = 0LL;
  v11 = a4->SizeInPages << 12;
  v12 = 4096;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v11 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v13 = (__int64)*a3;
    OffsetInPages = a4->OffsetInPages;
    v15 = **a3;
    v16 = *(_QWORD *)(v15 + 16) >> 12;
    if ( OffsetInPages >= v16 )
    {
      v17 = WdLogNewEntry5_WdWarning(v16, v13, v15);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v17 + 32) = 17692LL;
LABEL_8:
      *(_QWORD *)(v17 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v17);
      return 3221225485LL;
    }
    v20 = v16 - OffsetInPages;
    if ( v20 < v11 >> 12 )
    {
      v17 = WdLogNewEntry5_WdWarning(v20, v13, v15);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v17 + 32) = 17697LL;
      goto LABEL_8;
    }
    v21 = *(VIDMM_PROCESS **)(v13 + 8);
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v12 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v22 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v22 )
      v21 = *(VIDMM_PROCESS **)(v22 + 8);
    else
      v21 = 0LL;
    v13 = 6LL;
  }
  if ( !v11 )
  {
    v17 = WdLogNewEntry5_WdWarning(v21, v13, v15);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v17 + 32) = 17718LL;
    goto LABEL_8;
  }
  VirtualAddressAllocator = (struct _EPROCESS ***)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                    v21,
                                                    *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                                    0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    DriverProtection = a4->DriverProtection;
    Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _MDL *)a4->BaseAddress;
    v30 = a4->OffsetInPages << 12;
    v45 = 0LL;
    v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD, _BYTE))CVirtualAddressAllocator::MapVirtualAddressRange)(
            VirtualAddressAllocator,
            a3,
            v30,
            v27,
            v11,
            BaseAddress,
            MinimumAddress,
            MaximumAddress,
            v12,
            Value,
            DriverProtection,
            v28,
            &v45,
            1);
    v33 = (struct VIDMM_MAPPED_VA_RANGE *)v31;
    if ( v31 )
    {
      v35 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
      a4->VirtualAddress = *(_QWORD *)(v31 + 96);
      a4->PagingFenceValue = 0LL;
      if ( v35 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 112));
        v37 = a2;
        v36 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v31,
                0,
                0LL,
                v7,
                v45);
      }
      else
      {
        v36 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                (struct VIDMM_MAPPED_VA_RANGE *)v31,
                0,
                v45);
        v37 = a2;
      }
      v38 = v36;
      if ( *((_QWORD *)this + 5075) )
      {
        if ( v7 )
          v8 = *v7;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, *VirtualAddressAllocator[9], v33, v37, v8);
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
        v33,
        (struct CVirtualAddressAllocator *)VirtualAddressAllocator);
      return v38;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = 17750LL;
      WdLogEvent5_WdError(v34);
      return 3221225473LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v24, v23, v26);
    WdLogEvent5_WdWarning(v29);
    return 3221225495LL;
  }
}
