/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C006871C
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0048F7C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        UINT64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        UINT64 a7)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *v10; // rax
  __int64 v11; // rcx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v10 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *)VIDMM_MAPPED_VA_RANGE::operator new((unsigned __int64)this);
  v12 = v10;
  if ( v10 )
  {
    v10->Value = (UINT64)a2;
    v10[10].Value = a7;
    *(_DWORD *)&v10[8].0 = 0;
    v10[7].Value = 0LL;
    v10[9].Value = 0LL;
    v10[14].Value = 0LL;
    v10[15].Value = 0LL;
    v10[11].0 = a6.0;
    v13 = (int)v10[8].0;
    v12[13].Value = a4 + a5;
    v12[12].Value = a4;
    *(_DWORD *)&v12[8].0 = ((*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0) | v13 & 0xFFFFFC00;
    *(_DWORD *)&v12[16].0 = 1;
    memset(&v12[1], 0, 0x30uLL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C0035680);
    v14 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v14 + 24) = 2264LL;
    WdLogEvent5_WdLowResource(v14);
    return 0LL;
  }
  if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, a2, 0, 0LL, (struct VIDMM_MAPPED_VA_RANGE *)v12) < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v16);
    WdLogEvent5_WdWarning(v17);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v12);
    return 0LL;
  }
  return v12;
}
