/*
 * XREFs of ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005B060
 * Callers:
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z @ 0x1C005F6B4 (-FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RestoreMappedFenceGpuVa(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  char *v2; // r14
  char *i; // rdi
  struct _KTHREAD **VirtualAddressAllocator; // r15
  unsigned int v7; // esi
  int v8; // eax
  struct VIDMM_MAPPED_VA_RANGE *MappedVaRangeInternal; // rbx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  _BYTE v12[32]; // [rsp+50h] [rbp-48h] BYREF
  struct VIDMM_ALLOC *v13; // [rsp+A0h] [rbp+8h] BYREF

  v2 = (char *)this + 3800;
  for ( i = (char *)*((_QWORD *)this + 475); ; i = *(char **)i )
  {
    if ( i == v2 )
      return 0LL;
    if ( *(i - 32) )
    {
      VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                      *((VIDMM_PROCESS **)i - 2),
                                                      *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                                      0xFFFFFFFF);
      if ( VirtualAddressAllocator == a2 || !a2 )
      {
        v7 = 0;
        if ( *((_DWORD *)this + 1604) )
          break;
      }
    }
LABEL_13:
    ;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(456LL * v7 + *((_QWORD *)this + 4999) + 420) & 1) != 0 )
    {
      v8 = *((_DWORD *)i + 9);
      if ( _bittest(&v8, v7) )
      {
        if ( VirtualAddressAllocator[6] == KeGetCurrentThread() )
        {
          MappedVaRangeInternal = CVirtualAddressAllocator::FindMappedVaRangeInternal(
                                    (CVirtualAddressAllocator *)VirtualAddressAllocator,
                                    v7,
                                    *((_QWORD *)i - 6));
        }
        else
        {
          v10 = *((_QWORD *)i - 6);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v12,
            (struct DXGPUSHLOCK *const)(VirtualAddressAllocator + 5));
          MappedVaRangeInternal = CVirtualAddressAllocator::FindMappedVaRangeInternal(
                                    (CVirtualAddressAllocator *)VirtualAddressAllocator,
                                    v7,
                                    v10);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
        }
        result = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)VirtualAddressAllocator,
                   MappedVaRangeInternal,
                   v7,
                   0,
                   0LL,
                   *((struct _MDL **)i - 5),
                   0,
                   &v13,
                   0,
                   1u);
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( ++v7 >= *((_DWORD *)this + 1604) )
      goto LABEL_13;
  }
}
