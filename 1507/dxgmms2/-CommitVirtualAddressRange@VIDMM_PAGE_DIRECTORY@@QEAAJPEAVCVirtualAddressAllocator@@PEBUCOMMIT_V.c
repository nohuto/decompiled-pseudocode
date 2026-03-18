/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?GetSegmentAddress@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C000EDC4 (-GetSegmentAddress@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0010638 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D078 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005E758 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z @ 0x1C005E828 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C006178C (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OW.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        SIZE_T a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  SIZE_T v9; // rbx
  SIZE_T v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  SIZE_T v14; // rsi
  __int64 v15; // r11
  char v16; // r10
  struct VIDMM_ALLOC **v17; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v18; // r8d
  char v19; // r11
  __int64 result; // rax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r9d
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rdx
  unsigned int v28; // r8d
  const struct COMMIT_VA_STATE *v29; // rcx
  struct _DXGK_PTE *v30; // rbx
  __int64 v31; // r9
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rax
  VIDMM_PAGE_TABLE *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int8 v41; // r8
  struct VIDMM_PAGE_DIRECTORY *PageTable; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rbx
  char v47; // dl
  char v48; // cl
  char v49; // dl
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // esi
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  bool v57; // cl
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // al
  unsigned __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  UINT v67; // edx
  struct _DXGK_PTE *v68; // rsi
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  unsigned __int64 v70; // rbx
  unsigned int v71; // r9d
  unsigned __int64 v72; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v73; // r11d
  unsigned int v74; // r8d
  char v75; // [rsp+98h] [rbp-80h]
  char v76; // [rsp+99h] [rbp-7Fh]
  unsigned int v77; // [rsp+9Ch] [rbp-7Ch]
  LONG v78; // [rsp+9Ch] [rbp-7Ch]
  UINT v79; // [rsp+A0h] [rbp-78h]
  int v80; // [rsp+A4h] [rbp-74h]
  __int64 v81; // [rsp+A8h] [rbp-70h]
  unsigned int NumPde; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v84; // [rsp+C0h] [rbp-58h]
  int v85; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v86; // [rsp+D0h] [rbp-48h]
  VIDMM_GLOBAL *v87; // [rsp+D8h] [rbp-40h]
  void *v88; // [rsp+E0h] [rbp-38h] BYREF
  VIDMM_PAGE_TABLE **v89; // [rsp+E8h] [rbp-30h]
  __int64 v90; // [rsp+F0h] [rbp-28h]
  unsigned int v91; // [rsp+F8h] [rbp-20h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v92[2]; // [rsp+100h] [rbp-18h]
  struct _DXGK_PTE *v93; // [rsp+108h] [rbp-10h]
  unsigned __int64 v94; // [rsp+110h] [rbp-8h]
  unsigned __int64 v95; // [rsp+118h] [rbp+0h]
  _QWORD v96[10]; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v99; // [rsp+1A0h] [rbp+88h]

  v99 = a4;
  v9 = a5;
  *a9 = 0LL;
  if ( ((a7 | v9) & 0xFFF) != 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a2, a4);
    *(_QWORD *)(v12 + 24) = 4242LL;
    goto LABEL_90;
  }
  v11 = v9 >> 12;
  v95 = v9 >> 12;
  v93 = (struct _DXGK_PTE *)((v9 >> 12) + a6);
  if ( (unsigned __int64)v93 <= v9 >> 12 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, a2, a2, a4);
    *(_QWORD *)(v12 + 24) = 4256LL;
LABEL_90:
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  v87 = a2[8];
  v13 = *((_QWORD *)v87 + 4999);
  v94 = 48LL * (*(_DWORD *)this & 7) + 456 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F);
  v90 = v13;
  v14 = (v11 & *(_QWORD *)(v94 + v13 + 88)) >> *(_QWORD *)(v94 + v13 + 96);
  NumPde = CVirtualAddressAllocator::GetNumPde((CVirtualAddressAllocator *)a2, this);
  if ( (v16 & 0x10) != 0 && *((_QWORD *)v87 + 5075) )
    VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
      v87,
      *(_QWORD *)a2[9],
      v9,
      v15 << 12,
      *((_DWORD *)a3 + 12),
      a7,
      *((_QWORD *)a3 + 3),
      *((_QWORD *)a3 + 4),
      *((_DWORD *)a3 + 10));
  v79 = 0;
  v77 = 0;
  LOBYTE(a5) = 0;
  *(_QWORD *)v92 = 0LL;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v21 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v17, (struct CVirtualAddressAllocator *)a2, a9);
    if ( (int)result < 0 )
      return result;
    v18 = v92[0];
    v21 = 1;
    v19 = 0;
  }
  if ( v21 )
  {
    if ( (_DWORD)v14 )
    {
      v22 = 0LL;
      v23 = (unsigned int)v14;
      do
      {
        v24 = *((_QWORD *)this + 3);
        *(_QWORD *)(v22 + v24) = 0LL;
        *(_QWORD *)(v22 + v24 + 8) = 0LL;
        v22 += 16LL;
        --v23;
      }
      while ( v23 );
    }
    v25 = NumPde;
    v19 = 1;
    LOBYTE(a5) = 1;
    *(_QWORD *)v92 = *(unsigned int *)&v18 | 2;
    v77 = NumPde;
  }
  else
  {
    v25 = NumPde;
  }
  v26 = v95;
  v83 = v95;
  v75 = 0;
  v27 = *(_QWORD *)(v94 + v90 + 112);
  v28 = 0;
  v89 = (VIDMM_PAGE_TABLE **)(v95 & ~*(_QWORD *)(v94 + v90 + 104));
  v29 = a3;
  v88 = (char *)v89 + v27;
  v30 = (struct _DXGK_PTE *)((char *)v89 + v27);
  v86 = (unsigned __int64)v89 + v27;
  if ( (*(_DWORD *)this & 0x20) != 0 && *((_BYTE *)a3 + 58) && *((_BYTE *)a3 + 57) )
    v28 = v25;
  v31 = v28 + (unsigned int)v14;
  v32 = (unsigned __int64)v89;
  v80 = v31;
  v85 = -v28;
  v91 = 1 - v28;
  do
  {
    v76 = 0;
    if ( v30 >= v93 )
    {
      v30 = v93;
      v86 = (unsigned __int64)v93;
      v75 = 1;
    }
    v33 = (unsigned __int64)v30 - v26;
    v84 = (unsigned __int64)v30 - v26;
    if ( v27 <= (unsigned __int64)v30 - v26 && (*(_BYTE *)v29 & 2) != 0 && (*((_BYTE *)v87 + 40552) & 0x40) != 0 )
    {
      v34 = *((_QWORD *)this + 3);
      v35 = 2LL * (unsigned int)v31;
      v36 = (unsigned int)v31;
      v37 = *(_QWORD *)(v34 + 16LL * (unsigned int)v31);
      if ( (v37 & 1) != 0 )
      {
        if ( (v37 & 2) != 0 )
          goto LABEL_77;
        v38 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + 8 * v31);
        if ( v38 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
            VIDMM_PAGE_TABLE::DestroyPageTable(v38, (struct CVirtualAddressAllocator *)a2, v26);
          else
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v38, (struct CVirtualAddressAllocator *)a2, v26);
          v19 = a5;
          *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v36) = 0LL;
          v39 = *((_QWORD *)this + 3);
          *(_QWORD *)(v39 + 8 * v35) = 0LL;
          *(_QWORD *)(v39 + 8 * v35 + 8) = 0LL;
          --*((_DWORD *)this + 1);
        }
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v35) |= 2uLL;
      }
      else
      {
        *(_QWORD *)(v34 + 16LL * (unsigned int)v31) = v37 | 2;
      }
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v35) |= 1uLL;
      ++*((_DWORD *)this + 1);
    }
    else
    {
      v40 = (unsigned int)v31;
      v81 = 8LL * (unsigned int)v31;
      v89 = (VIDMM_PAGE_TABLE **)(v81 + *((_QWORD *)this + 4));
      if ( !*v89 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          v41 = *((_BYTE *)v29 + 58) && *((_BYTE *)v29 + 57) || *((_DWORD *)v29 + 12) == -3;
          PageTable = CreatePageTable((struct CVirtualAddressAllocator *)a2, (*(_DWORD *)this >> 7) & 0x1F, v41);
        }
        else
        {
          PageTable = CreatePageDirectory(
                        (struct CVirtualAddressAllocator *)a2,
                        (*(_DWORD *)this >> 7) & 0x1F,
                        (*(_DWORD *)this & 7u) - 1);
        }
        v45 = *((_QWORD *)this + 4);
        *(_QWORD *)(v81 + v45) = PageTable;
        v89 = (VIDMM_PAGE_TABLE **)(v81 + *((_QWORD *)this + 4));
        if ( !*v89 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v45, v81, v43, v44);
          *(_QWORD *)(v65 + 24) = 4443LL;
          WdLogEvent5_WdAssertion(v65);
          return 3221225495LL;
        }
      }
      v46 = 2 * v40;
      v47 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46);
      v48 = v47 & 3;
      v49 = (v47 & 1) == 0;
      if ( v48 == 3 )
      {
        memset(v96, 0, 0x40uLL);
        v96[0] |= 3uLL;
        LODWORD(v96[5]) = 6;
        LODWORD(v96[6]) = -2;
        *(_WORD *)((char *)&v96[7] + 1) = *(_WORD *)((char *)a3 + 57);
        LOBYTE(v96[7]) = 1;
        if ( v32 < v83
          && (v52 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                      *v89,
                      (struct CVirtualAddressAllocator *)a2,
                      (const struct COMMIT_VA_STATE *)v96,
                      0LL,
                      (struct VIDMM_GLOBAL *)(v32 << 12),
                      v83 - v32,
                      0LL,
                      0,
                      a9),
              v52 < 0)
          || v86 < (unsigned __int64)v88
          && (v52 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                      *(VIDMM_PAGE_TABLE **)(v81 + *((_QWORD *)this + 4)),
                      (struct CVirtualAddressAllocator *)a2,
                      (const struct COMMIT_VA_STATE *)v96,
                      0LL,
                      (struct VIDMM_GLOBAL *)(v86 << 12),
                      (unsigned __int64)v88 - v86,
                      0LL,
                      0,
                      a9),
              v52 < 0) )
        {
LABEL_82:
          v66 = WdLogNewEntry5_WdWarning(v51, v50, v53);
          WdLogEvent5_WdWarning(v66);
          return (unsigned int)v52;
        }
        --*((_DWORD *)this + 1);
        v54 = *((_QWORD *)this + 3);
        v76 = 1;
        *(_QWORD *)(v54 + 8 * v46) = 0LL;
        *(_QWORD *)(v54 + 8 * v46 + 8) = 0LL;
        v49 = 0;
      }
      v55 = *((_QWORD *)this + 4);
      if ( (*(_DWORD *)this & 0x20) != 0 )
        v56 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                *(VIDMM_PAGE_TABLE **)(v81 + v55),
                (struct CVirtualAddressAllocator *)a2,
                a3,
                v99,
                (struct VIDMM_GLOBAL *)(v83 << 12),
                v84,
                a7,
                v49,
                a9);
      else
        v56 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                *(VIDMM_PAGE_DIRECTORY **)(v81 + v55),
                (struct CVirtualAddressAllocator *)a2,
                a3,
                v99,
                v83 << 12,
                v84,
                a7,
                v49,
                a9);
      v52 = v56;
      if ( v56 < 0 )
        goto LABEL_82;
      v57 = (*(_DWORD *)this & 0x20) != 0
         && !*((_BYTE *)a3 + 58)
         && ((**(_DWORD **)(v81 + *((_QWORD *)this + 4)) >> 6) & 1) != ((*(_DWORD *)(*((_QWORD *)this + 3) + 8 * v46) & 0x60000) == 0x20000LL);
      v58 = *((_QWORD *)this + 3);
      if ( (*(_BYTE *)(v58 + 8 * v46) & 1) != 0 && !v57 )
      {
        v61 = v76;
      }
      else
      {
        *(_QWORD *)(v58 + 8 * v46) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 8 * v46) ^ (32 * *((_DWORD *)a2[12] + 8 * ((*(_DWORD *)this >> 7) & 0x1F) + 7))) & 0x3E0;
        v59 = *((_QWORD *)this + 3);
        v60 = *(_QWORD *)(v59 + 8 * v46);
        if ( (v60 & 1) == 0 )
        {
          *(_QWORD *)(v59 + 8 * v46) = v60 | 1;
          ++*((_DWORD *)this + 1);
        }
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46 + 8) = (unsigned __int64)VIDMM_PAGE_TABLE_BASE::GetSegmentAddress(*(VIDMM_PAGE_TABLE_BASE **)(v81 + *((_QWORD *)this + 4))) >> 12;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) & 0xFFFFFFFFFFFE07FFuLL | (16LL * (*(_DWORD *)this & 0xF80));
        if ( (**(_DWORD **)(v81 + *((_QWORD *)this + 4)) & 0x40) != 0 )
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
        else
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v46) &= 0xFFFFFFFFFFF9FFFFuLL;
        v61 = 1;
      }
      v19 = a5;
      if ( !v61 )
      {
        v29 = a3;
        v33 = v84;
        LODWORD(v31) = v80;
        v26 = v83;
        goto LABEL_77;
      }
    }
    LODWORD(v31) = v80;
    if ( !v19 )
    {
      v19 = 1;
      LOBYTE(a5) = 1;
      v79 = v85 + v80;
    }
    v29 = a3;
    v33 = v84;
    v26 = v83;
    if ( v85 + v80 >= v77 )
      v77 = v80 + v91;
LABEL_77:
    v26 += v33;
    v31 = (unsigned int)(v31 + 1);
    v32 = v86;
    v62 = v33 << 12;
    a7 += v62;
    v99 += v62;
    v27 = *(_QWORD *)(v94 + v90 + 112);
    v30 = (struct _DXGK_PTE *)(v27 + v86);
    v80 = v31;
    v83 = v26;
    v86 = (unsigned __int64)v30;
    v88 = v30;
  }
  while ( !v75 );
  if ( v19 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                this,
                (struct CVirtualAddressAllocator *)a2,
                (unsigned int *)&a9,
                &a5,
                &v88) < 0 )
    {
      v64 = WdLogNewEntry5_WdError(v63);
      *(_QWORD *)(v64 + 24) = 4627LL;
      WdLogEvent5_WdError(v64);
      return 3221225473LL;
    }
    if ( *((_BYTE *)a3 + 58) && (*(_DWORD *)this & 0x20) != 0 )
    {
      v67 = v79;
      v68 = (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * (v79 + NumPde));
    }
    else
    {
      v67 = v79;
      v68 = 0LL;
    }
    v78 = v77 - v67;
    v93 = (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v79);
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle(a2);
    v70 = a5;
    VIDMM_GLOBAL::UpdatePageTable(
      v87,
      *(_DWORD *)this & 7,
      KmdProcessHandle,
      0LL,
      0LL,
      0LL,
      0LL,
      v79,
      v78,
      v93,
      v68,
      v71,
      (UINT)a9,
      a5,
      v73,
      v72,
      v92[0]);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, (struct CVirtualAddressAllocator *)a2, v74, v70, v88);
  }
  return 0LL;
}
