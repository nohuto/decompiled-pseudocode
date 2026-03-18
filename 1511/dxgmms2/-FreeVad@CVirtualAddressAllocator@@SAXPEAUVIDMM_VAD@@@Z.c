/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0038728
 * Callers:
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0038720 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v1; // esi
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v3 = (__int64 **)((char *)a1 + 16 * v1 + 96);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == (__int64 *)v3 )
          break;
        v5 = *v4;
        if ( (__int64 **)v4[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
          __fastfail(3u);
        *v3 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v3;
        *v4 = 0LL;
        v4[1] = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v4 - 1));
      }
      ++v1;
    }
    while ( v1 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
