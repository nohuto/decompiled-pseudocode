/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0050428
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C00145C0 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0054070 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *v4; // rdi
  __int64 Alignment; // rcx
  UINT64 BaseAddress; // rcx
  __int64 v8; // rax
  UINT64 SizeInBytes; // rcx
  unsigned int v10; // r10d
  VIDMM_PROCESS *v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v14; // r14
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11
  __int64 result; // rax
  __int64 v17; // rax

  v4 = a2;
  LOBYTE(a2) = *((_BYTE *)this + 40608);
  if ( ((unsigned __int8)a2 & 1) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 19265LL;
    goto LABEL_26;
  }
  Alignment = v4->Alignment;
  if ( !(_DWORD)Alignment || (((_DWORD)Alignment - 1) & (unsigned int)Alignment) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(Alignment, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 19271LL;
LABEL_26:
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  BaseAddress = v4->BaseAddress;
  v8 = (1LL << *((_DWORD *)this + 10151) << 12) - 1;
  if ( BaseAddress && (BaseAddress & v8) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(BaseAddress, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 19278LL;
    goto LABEL_26;
  }
  SizeInBytes = v4->SizeInBytes;
  if ( !SizeInBytes || (SizeInBytes & v8) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(SizeInBytes, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 19284LL;
    goto LABEL_26;
  }
  v10 = 0;
  v11 = (VIDMM_PROCESS *)*((_QWORD *)v4->hDxgkProcess + 1);
  v12 = 1;
  if ( *(_BYTE *)(*((_QWORD *)v4->hDxgkProcess + 4) + 313LL) )
  {
    if ( ((unsigned __int8)a2 & 0x10) == 0 )
    {
      result = VIDMM_PROCESS::OpenAdapter(*((VIDMM_PROCESS **)v4->hDxgkProcess + 1), this);
      v10 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)this + 40608) |= 0x10u;
    }
    v12 = *((_DWORD *)this + 1604);
  }
  v13 = 0;
  if ( v12 )
  {
    v14 = 0LL;
    do
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v11,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                  v13);
      if ( VirtualAddressAllocator )
      {
        v10 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
                VirtualAddressAllocator,
                v4->SizeInBytes,
                v4->BaseAddress,
                0LL,
                0LL,
                v4->Alignment,
                D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
                0LL,
                (*(_BYTE *)&v4->0 & 1) == 0,
                &v4->StartVirtualAddress,
                0LL,
                0);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)this + 5006) + v14 + 420) & 1) != 0 )
      {
        return 3221225485LL;
      }
      ++v13;
      v14 += 456LL;
    }
    while ( v13 < v12 );
  }
  return v10;
}
