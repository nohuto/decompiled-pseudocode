/*
 * XREFs of ?CommitReservedZeroRanges@CVirtualAddressAllocator@@QEAAJXZ @ 0x1C005D158
 * Callers:
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitReservedZeroRanges(CVirtualAddressAllocator *this)
{
  char *v1; // r14
  char *v2; // rbx
  unsigned int v4; // r12d
  unsigned int v5; // esi
  char **v6; // r15
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  __int64 v14; // rax
  char *v15; // [rsp+90h] [rbp+8h]
  struct VIDMM_ALLOC *v16; // [rsp+98h] [rbp+10h] BYREF

  v1 = (char *)this + 104;
  v2 = (char *)*((_QWORD *)this + 13);
  v4 = *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL);
  while ( 1 )
  {
    if ( v2 == v1 )
      return 0LL;
    v5 = 0;
    if ( v4 )
      break;
LABEL_9:
    v2 = *(char **)v2;
  }
  v6 = (char **)(v2 + 40);
  while ( 1 )
  {
    v7 = *v6;
    v15 = &v2[16 * v5 + 40];
    if ( *v6 != v15 )
      break;
LABEL_8:
    ++v5;
    v6 += 2;
    if ( v5 >= v4 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    if ( (v7[80] & 4) != 0 )
    {
      v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              this,
              (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 8),
              0,
              0xFFFFFFFE,
              0LL,
              0LL,
              0,
              &v16,
              0,
              1u);
      if ( v12 < 0 )
        break;
    }
    v7 = *(char **)v7;
    if ( v7 == v15 )
      goto LABEL_8;
  }
  v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
  *(_QWORD *)(v14 + 24) = 7405LL;
  WdLogEvent5_WdAssertion(v14);
  return (unsigned int)v12;
}
