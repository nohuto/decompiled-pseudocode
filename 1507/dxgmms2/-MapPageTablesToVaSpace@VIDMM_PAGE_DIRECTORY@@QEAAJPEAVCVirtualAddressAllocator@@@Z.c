/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0010638 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0010688 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C00106BC (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C004DD74 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  VIDMM_PAGE_DIRECTORY *v2; // rbx
  unsigned int NumPde; // esi
  struct CVirtualAddressAllocator *v4; // r11
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rbp
  int v8; // r10d
  struct CVirtualAddressAllocator *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // ebx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+68h] [rbp-40h]
  struct VIDMM_ALLOC *v27; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+18h]
  __int64 i; // [rsp+C8h] [rbp+20h]

  v2 = this;
  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  if ( (*(_DWORD *)v2 & 0x1020) == 0x1020 )
    NumPde *= 2;
  v5 = 0;
  v30 = 0;
  if ( !NumPde )
    return 0LL;
  v6 = 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v2 + 4) + v6);
    if ( v7 )
      break;
LABEL_14:
    ++v5;
    v6 = i + 8;
    v30 = v5;
    if ( v5 >= NumPde )
      return 0LL;
  }
  if ( (*(_DWORD *)v2 & 0x20) == 0 )
  {
    VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace((VIDMM_PAGE_DIRECTORY *)v7, v4);
    goto LABEL_13;
  }
  if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v7 + 16), (*(_DWORD *)v2 >> 7) & 0x1F) )
  {
    LOBYTE(v26) = 0;
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            v9,
            v7,
            0LL,
            5LL,
            *(unsigned int *)(*(_QWORD *)(v7 + 8) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)v9 + 8) + 40560LL),
            *(_QWORD *)(*((_QWORD *)v9 + 8) + 40568LL),
            4096,
            1LL,
            0LL,
            v8,
            0LL,
            v26) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v24 + 24) = 2599LL;
      WdLogEvent5_WdAssertion(v24);
      return 3221225473LL;
    }
    v9 = a2;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 128LL);
  v15 = *(_DWORD *)(32LL * ((*(_DWORD *)v2 >> 7) & 0x1F) + *((_QWORD *)v9 + 12) + 28);
  VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v7);
  SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v7);
  v20 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)(v14 - 24),
          (*(_DWORD *)this >> 7) & 0x1F,
          v15,
          SegmentOffsetInPages << 12,
          v17,
          0,
          &v27,
          0,
          1u);
  if ( v20 >= 0 )
  {
    v2 = this;
    v5 = v30;
LABEL_13:
    v4 = a2;
    goto LABEL_14;
  }
  v25 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
  *(_QWORD *)(v25 + 24) = 2624LL;
  WdLogEvent5_WdAssertion(v25);
  return (unsigned int)v20;
}
