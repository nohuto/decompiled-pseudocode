/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0061150
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVadVaRange(
        struct _KTHREAD **a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  VIDMM_MAPPED_VA_RANGE *v14; // rax
  __int64 v15; // rcx
  VIDMM_MAPPED_VA_RANGE *v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax

  v14 = (VIDMM_MAPPED_VA_RANGE *)operator new(0x78uLL, 0x39346956u, PagedPool);
  v16 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = a2;
    *((_QWORD *)v14 + 7) = a5;
    v17 = *((_DWORD *)v14 + 16) & 0xFFFFE800 | (16 * (a3 & 0x3F));
    *((_QWORD *)v14 + 9) = a6;
    *((_DWORD *)v14 + 16) = a4 & 0xF | v17;
    *((_QWORD *)v14 + 10) = a8;
    *((_QWORD *)v14 + 12) = a9;
    v15 = a10 + a9;
    *((_QWORD *)v14 + 11) = a7;
    *((_QWORD *)v14 + 13) = a10 + a9;
    *((_DWORD *)v14 + 28) = 1;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 5) = 0LL;
    *((_QWORD *)v14 + 6) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    _InterlockedIncrement(&dword_1C00275F0);
    v18 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v18 + 24) = 1803LL;
    WdLogEvent5_WdLowResource(v18);
    return 0LL;
  }
  if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, a3, 0LL, v16) < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    WdLogEvent5_WdWarning(v23);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v16);
    return 0LL;
  }
  return v16;
}
