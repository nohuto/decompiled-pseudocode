/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0055D08
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C000E7F0 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0063170 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *v4; // rdi
  __int64 v6; // rax
  __int64 Alignment; // rcx
  UINT64 BaseAddress; // rcx
  __int64 v9; // rax
  UINT64 SizeInBytes; // rcx
  unsigned int v11; // r10d
  VIDMM_PROCESS *v12; // r15
  unsigned int v13; // ebp
  __int64 result; // rax
  unsigned int v15; // esi
  __int64 v16; // r14
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11

  v4 = a2;
  LOBYTE(a2) = *((_BYTE *)this + 40552);
  if ( ((unsigned __int8)a2 & 1) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 18934LL;
    goto LABEL_25;
  }
  Alignment = v4->Alignment;
  if ( !(_DWORD)Alignment || (((_DWORD)Alignment - 1) & (unsigned int)Alignment) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(Alignment, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 18940LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
  BaseAddress = v4->BaseAddress;
  v9 = (1LL << *((_DWORD *)this + 10137) << 12) - 1;
  if ( BaseAddress && (BaseAddress & v9) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(BaseAddress, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 18947LL;
    goto LABEL_25;
  }
  SizeInBytes = v4->SizeInBytes;
  if ( !SizeInBytes || (SizeInBytes & v9) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(SizeInBytes, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 18953LL;
    goto LABEL_25;
  }
  v11 = 0;
  v12 = (VIDMM_PROCESS *)*((_QWORD *)v4->hDxgkProcess + 1);
  v13 = 1;
  if ( *(_BYTE *)(*((_QWORD *)v4->hDxgkProcess + 4) + 313LL) )
  {
    if ( ((unsigned __int8)a2 & 0x10) == 0 )
    {
      result = VIDMM_PROCESS::OpenAdapter(*((VIDMM_PROCESS **)v4->hDxgkProcess + 1), this);
      v11 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)this + 40552) |= 0x10u;
    }
    v13 = *((_DWORD *)this + 1604);
  }
  v15 = 0;
  if ( v13 )
  {
    v16 = 0LL;
    do
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v12,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                  v15);
      if ( VirtualAddressAllocator )
      {
        v11 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
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
      else if ( (*(_BYTE *)(*((_QWORD *)this + 4999) + v16 + 420) & 1) != 0 )
      {
        return 3221225485LL;
      }
      ++v15;
      v16 += 456LL;
    }
    while ( v15 < v13 );
  }
  return v11;
}
