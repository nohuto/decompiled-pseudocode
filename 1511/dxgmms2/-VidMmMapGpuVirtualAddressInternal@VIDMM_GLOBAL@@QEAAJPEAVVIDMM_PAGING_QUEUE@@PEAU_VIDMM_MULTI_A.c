/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0045DC8
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0050780 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00429D4 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAV.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0043EEC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  unsigned int v6; // r10d
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v12; // rbp
  unsigned int v13; // r13d
  __int64 *v14; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v16; // r8
  D3DGPU_SIZE_T v17; // rcx
  __int64 v18; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  struct _EPROCESS ***v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r8
  VIDMM_MAPPED_VA_RANGE *v30; // rax
  struct VIDMM_MAPPED_VA_RANGE *v31; // rbp
  __int64 v32; // rax
  bool v33; // zf
  unsigned int v34; // eax
  struct VIDMM_PAGING_QUEUE *v35; // r13
  unsigned int v36; // edi
  struct _MDL *BaseAddress; // [rsp+28h] [rbp-80h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-78h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-70h]
  __int64 Value; // [rsp+48h] [rbp-60h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-58h]
  struct VIDMM_VAD_PENDING_OPERATION *v43; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  v6 = *((_DWORD *)a2 + 36);
  LODWORD(v43) = v6;
  v8 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v5);
  v9 = 0LL;
  v12 = a4->SizeInPages << 12;
  v13 = 4096;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v12 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v14 = *a3;
    OffsetInPages = a4->OffsetInPages;
    v16 = **a3;
    v17 = *(_QWORD *)(v16 + 16) >> 12;
    if ( OffsetInPages >= v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(v17);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v18 + 32) = 18015LL;
LABEL_8:
      *(_QWORD *)(v18 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v18);
      return 3221225485LL;
    }
    v21 = v17 - OffsetInPages;
    if ( v21 < v12 >> 12 )
    {
      v18 = WdLogNewEntry5_WdWarning(v21);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v18 + 32) = 18020LL;
      goto LABEL_8;
    }
    v22 = 1LL;
    v23 = v14[1];
    if ( *(_DWORD *)(v16 + 32) > 0x1000u )
      v13 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    v24 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v24 )
      v23 = *(_QWORD *)(v24 + 8);
    else
      v23 = 0LL;
    v22 = 0LL;
    v6 = (unsigned int)v43;
    v21 = 6LL;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v22 = 6LL;
  }
  if ( !v12 )
  {
    v18 = WdLogNewEntry5_WdWarning(v21);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v18 + 32) = 18041LL;
    goto LABEL_8;
  }
  v25 = *(unsigned int *)(*((_QWORD *)this + 3) + 184LL);
  v26 = *(_QWORD **)(*(_QWORD *)(v23 + 16) + 8 * v25);
  if ( v26 && (v25 = *v26, *(_DWORD *)(*v26 + 40600LL)) )
  {
    if ( (*(_DWORD *)(v23 + 48) & 2) != 0 )
      v27 = *(struct _EPROCESS ****)(v25 + 0x800009C90LL);
    else
      v27 = (struct _EPROCESS ***)v26[54];
  }
  else
  {
    v27 = 0LL;
  }
  if ( v27 )
  {
    DriverProtection = a4->DriverProtection;
    Value = a4->Protection.Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _MDL *)a4->BaseAddress;
    v29 = a4->OffsetInPages << 12;
    v43 = 0LL;
    v30 = CVirtualAddressAllocator::MapVirtualAddressRange(
            (__int64)v27,
            (__int64)a3,
            v29,
            v22,
            v12,
            (unsigned __int64)BaseAddress,
            (unsigned __int64)MinimumAddress,
            (unsigned __int64)MaximumAddress,
            v13,
            Value,
            DriverProtection,
            v6,
            (void **)&v43);
    v31 = v30;
    if ( v30 )
    {
      v33 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
      a4->VirtualAddress = *((_QWORD *)v30 + 12);
      a4->PagingFenceValue = 0LL;
      if ( v33 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v30 + 28);
        v35 = a2;
        v34 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)v27,
                a2,
                v30,
                0,
                0LL,
                v8,
                v43);
      }
      else
      {
        v34 = VIDMM_GLOBAL::UncommitVirtualAddressRange(this, (struct CVirtualAddressAllocator *)v27, v30, 0, v43);
        v35 = a2;
      }
      v36 = v34;
      if ( *((_QWORD *)this + 5082) )
      {
        if ( v8 )
          v9 = *v8;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, *v27[9], v31, v35, v9);
      }
      return v36;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v32 + 24) = 18072LL;
      WdLogEvent5_WdError(v32);
      return 3221225473LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v25);
    WdLogEvent5_WdWarning(v28);
    return 3221225495LL;
  }
}
