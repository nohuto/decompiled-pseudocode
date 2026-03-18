/*
 * XREFs of ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062950
 * Callers:
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z @ 0x1C0063160 (-FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RestoreMappedFenceGpuVa(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  char *v2; // r14
  char *i; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **VirtualAddressAllocator; // r15
  unsigned int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rbx
  struct VIDMM_MAPPED_VA_RANGE *MappedVaRangeInternal; // rbx
  __int64 result; // rax
  _BYTE v14[32]; // [rsp+50h] [rbp-48h] BYREF
  struct VIDMM_ALLOC *v15; // [rsp+A0h] [rbp+8h] BYREF

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
        v9 = 0;
        if ( *((_DWORD *)this + 1604) )
          break;
      }
    }
LABEL_12:
    ;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(456LL * v9 + *((_QWORD *)this + 5006) + 420) & 1) != 0 )
    {
      v10 = *((_DWORD *)i + 9);
      if ( _bittest(&v10, v9) )
      {
        if ( VirtualAddressAllocator[6] == KeGetCurrentThread() )
        {
          MappedVaRangeInternal = CVirtualAddressAllocator::FindMappedVaRangeInternal(
                                    (CVirtualAddressAllocator *)VirtualAddressAllocator,
                                    v9,
                                    *((_QWORD *)i - 6));
        }
        else
        {
          v11 = *((_QWORD *)i - 6);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
            VirtualAddressAllocator + 5,
            v6,
            v7);
          MappedVaRangeInternal = CVirtualAddressAllocator::FindMappedVaRangeInternal(
                                    (CVirtualAddressAllocator *)VirtualAddressAllocator,
                                    v9,
                                    v11);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
        }
        result = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)VirtualAddressAllocator,
                   MappedVaRangeInternal,
                   v9,
                   0,
                   0LL,
                   *((struct _MDL **)i - 5),
                   0,
                   &v15,
                   0);
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( ++v9 >= *((_DWORD *)this + 1604) )
      goto LABEL_12;
  }
}
