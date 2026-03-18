/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0050314
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C00146E0 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0042B70 (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v12; // rcx
  int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  struct VIDMM_MAPPED_VA_RANGE *v24; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40608) & 1) == 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(this);
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  if ( (a4->BaseAddress & 0xFFF) != 0 )
  {
    v16 = WdLogNewEntry5_WdError();
    BaseAddress = a4->BaseAddress;
LABEL_10:
    *(_QWORD *)(v16 + 24) = BaseAddress;
LABEL_11:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v16 = WdLogNewEntry5_WdError();
    BaseAddress = a4->Size;
    goto LABEL_10;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v16 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v16 + 24) = 18278LL;
    goto LABEL_11;
  }
  MinimumAddress = a4->MinimumAddress;
  v24 = 0LL;
  v13 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v10,
          v9,
          MinimumAddress,
          a4->MaximumAddress,
          0x10000u,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v24,
          1u);
  if ( v13 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v18);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, *(struct _EPROCESS **)a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      v13 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v24, 0, 0LL, 0LL, 0LL);
      if ( v13 < 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = 18321LL;
        WdLogEvent5_WdAssertion(v23);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v13;
}
