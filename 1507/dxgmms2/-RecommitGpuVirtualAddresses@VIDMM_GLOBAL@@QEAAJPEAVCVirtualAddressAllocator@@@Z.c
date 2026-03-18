/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0033820 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005B060 (-RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitReservedZeroRanges@CVirtualAddressAllocator@@QEAAJXZ @ 0x1C005D158 (-CommitReservedZeroRanges@CVirtualAddressAllocator@@QEAAJXZ.c)
 *     ?CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C006FA64 (-CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, struct CVirtualAddressAllocator *a2)
{
  int v4; // r15d
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *i; // rdi
  CVirtualAddressAllocator *v13; // rcx

  if ( *((_DWORD *)this + 2) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    VIDMM_GLOBAL::StartPreparation((__int64)this, (__int64)a2, 0LL, 0LL, 113);
  }
  v5 = 0LL;
  if ( !*((_DWORD *)this + 926) )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = VIDMM_SEGMENT::CommitVirtualAddresses(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v5), a2);
    if ( v8 < 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *((_DWORD *)this + 926) )
      goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  WdLogEvent5_WdAssertion(v11);
LABEL_9:
  if ( v8 >= 0 )
  {
LABEL_10:
    v8 = VIDMM_GLOBAL::RestoreMappedFenceGpuVa(this, a2);
    if ( v8 >= 0 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 5086); i != (_QWORD *)((char *)this + 40688); i = (_QWORD *)*i )
      {
        v13 = (CVirtualAddressAllocator *)i[51];
        if ( v13 && (!a2 || v13 == a2) && i[2] != *((_QWORD *)this + 5000) )
        {
          v8 = CVirtualAddressAllocator::CommitReservedZeroRanges(v13);
          if ( v8 < 0 )
            break;
        }
      }
    }
  }
  if ( !v4 )
    VIDMM_GLOBAL::EndPreparation(this, v6, 0LL, 0, 0LL, 0LL);
  return (unsigned int)v8;
}
