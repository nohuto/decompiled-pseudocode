/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0067E94
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0012380 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0048F7C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004CFC8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0067CC8 (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v16; // rcx
  int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct VIDMM_MAPPED_VA_RANGE *v25; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40872) & 1) == 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(this);
    WdLogEvent5_WdWarning(v19);
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  if ( (a4->BaseAddress & 0xFFF) != 0 )
  {
    v20 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    BaseAddress = a4->BaseAddress;
LABEL_10:
    *(_QWORD *)(v20 + 24) = BaseAddress;
LABEL_11:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v20 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    BaseAddress = a4->Size;
    goto LABEL_10;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v20 = WdLogNewEntry5_WdError(v9, v8, v11, v12);
    *(_QWORD *)(v20 + 24) = 19179LL;
    goto LABEL_11;
  }
  MinimumAddress = a4->MinimumAddress;
  v25 = 0LL;
  v17 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v14,
          v13,
          MinimumAddress,
          a4->MaximumAddress,
          0x10000u,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v25,
          1u);
  if ( v17 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v16);
    WdLogEvent5_WdWarning(v22);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, *(struct _EPROCESS **)a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      v17 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v25, 0, 0LL, 0LL, 0LL);
      if ( v17 < 0 )
      {
        v24 = WdLogNewEntry5_WdWarning(v23);
        WdLogEvent5_WdWarning(v24);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v17;
}
