/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0040ED8
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        UINT64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        UINT64 a7)
{
  __int64 v10; // rcx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax

  v11 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *)operator new(0x78uLL, 0x39346956u, PagedPool);
  if ( v11 )
  {
    v11->Value = (UINT64)a2;
    v12 = (int)v11[8].0;
    v11[7].Value = 0LL;
    v11[9].Value = 0LL;
    *(_DWORD *)&v11[8].0 = v12 & 0xFFFFE000 | ((*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0);
    v11[10].Value = a7;
    v10 = a4 + a5;
    v11[11].0 = a6.0;
    v11[13].Value = a4 + a5;
    v11[12].Value = a4;
    *(_DWORD *)&v11[14].0 = 1;
    v11[1].Value = 0LL;
    v11[2].Value = 0LL;
    v11[3].Value = 0LL;
    v11[4].Value = 0LL;
    v11[5].Value = 0LL;
    v11[6].Value = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                this,
                a2,
                0LL,
                0LL,
                (struct VIDMM_MAPPED_VA_RANGE *)v11) >= 0 )
      return v11;
    v16 = WdLogNewEntry5_WdWarning(v13);
    WdLogEvent5_WdWarning(v16);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v11);
  }
  else
  {
    _InterlockedIncrement(&dword_1C002F600);
    v15 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v15 + 24) = 1736LL;
    WdLogEvent5_WdLowResource(v15);
  }
  return 0LL;
}
