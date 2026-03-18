/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0055B58
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C000E7D0 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004BFD8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0062148 (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0063170 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int64 v8; // rax
  __int64 v10; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v12; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct VIDMM_MAPPED_VA_RANGE *v27; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40552) & 1) == 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, a3);
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  if ( (a4->BaseAddress & 0xFFF) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(this);
    BaseAddress = a4->BaseAddress;
LABEL_6:
    *(_QWORD *)(v10 + 24) = BaseAddress;
LABEL_7:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(this);
    BaseAddress = a4->Size;
    goto LABEL_6;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v10 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v10 + 24) = 17959LL;
    goto LABEL_7;
  }
  MinimumAddress = a4->MinimumAddress;
  v27 = 0LL;
  v19 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v15,
          v14,
          MinimumAddress,
          a4->MaximumAddress,
          0x10000u,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v27,
          1u);
  if ( v19 >= 0 )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, *(struct _EPROCESS **)a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      v19 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v27, 0, 0LL, 0LL, 0LL);
      if ( v19 < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = 18002LL;
        WdLogEvent5_WdAssertion(v26);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v20);
    WdLogEvent5_WdWarning(v21);
  }
  return (unsigned int)v19;
}
