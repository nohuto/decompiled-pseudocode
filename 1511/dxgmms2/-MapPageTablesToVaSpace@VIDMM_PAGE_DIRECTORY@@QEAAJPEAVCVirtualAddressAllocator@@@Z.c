/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0011550 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0014FB8 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0014FE4 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C005FB7C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
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
  unsigned int v9; // r10d
  struct CVirtualAddressAllocator *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // ebx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  struct VIDMM_ALLOC *v26; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+18h]
  __int64 i; // [rsp+C8h] [rbp+20h]

  v2 = this;
  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  if ( (*(_DWORD *)v2 & 0x1020) == 0x1020 )
    NumPde *= 2;
  v5 = 0;
  v29 = 0;
  if ( !NumPde )
    return 0LL;
  v6 = 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v2 + 4) + v6);
    if ( v7 )
      break;
LABEL_6:
    ++v5;
    v6 = i + 8;
    v29 = v5;
    if ( v5 >= NumPde )
      return 0LL;
  }
  if ( (*(_DWORD *)v2 & 0x20) == 0 )
  {
    VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace((VIDMM_PAGE_DIRECTORY *)v7, v4);
    goto LABEL_14;
  }
  if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v7 + 16), (*(_DWORD *)v2 >> 7) & 0x1F) )
  {
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            (__int64)v10,
            v7,
            0LL,
            5LL,
            *(unsigned int *)(*(_QWORD *)(v7 + 8) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)v10 + 8) + 40616LL),
            *(_QWORD *)(*((_QWORD *)v10 + 8) + 40624LL),
            0x1000u,
            1LL,
            0LL,
            v9,
            0LL) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v24 + 24) = 2590LL;
      WdLogEvent5_WdAssertion(v24);
      return 3221225473LL;
    }
    v10 = a2;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 128LL);
  v16 = *(_DWORD *)(32LL * ((*(_DWORD *)v2 >> 7) & 0x1F) + *((_QWORD *)v10 + 12) + 28);
  VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v7);
  SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v7);
  v21 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)(v15 - 24),
          (*(_DWORD *)this >> 7) & 0x1F,
          v16,
          SegmentOffsetInPages << 12,
          v18,
          0,
          &v26,
          0);
  if ( v21 >= 0 )
  {
    v2 = this;
    v5 = v29;
LABEL_14:
    v4 = a2;
    goto LABEL_6;
  }
  v25 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
  *(_QWORD *)(v25 + 24) = 2615LL;
  WdLogEvent5_WdAssertion(v25);
  return (unsigned int)v21;
}
