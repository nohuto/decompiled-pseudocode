/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0063528 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0062508 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C0063D48 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_ALLOC **a5,
        unsigned int a6)
{
  unsigned __int64 v9; // r8
  VIDMM_GLOBAL *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // r11
  __int64 v14; // rsi
  unsigned int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // r11
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r11
  bool v25; // dl
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  VIDMM_PAGE_TABLE *v35; // rcx
  struct CVirtualAddressAllocator *v36; // r10
  __int64 v37; // rax
  struct VIDMM_ALLOC **v38; // rcx
  unsigned __int64 v39; // r8
  unsigned int v40; // r8d
  unsigned int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  VIDMM_PAGE_TABLE *v46; // rcx
  struct CVirtualAddressAllocator *v47; // r10
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  char v50; // al
  __int64 v51; // r11
  char *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // edi
  struct _DXGK_PTE *v57; // rsi
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  enum _DXGK_PAGETABLEUPDATEMODE v59; // r9d
  struct _DXGK_PTE *v60; // r10
  unsigned __int64 v61; // r11
  struct CVirtualAddressAllocator *v62; // rdi
  __int64 v63; // r8
  char v64; // [rsp+90h] [rbp-80h]
  char v65; // [rsp+91h] [rbp-7Fh]
  bool v66; // [rsp+92h] [rbp-7Eh]
  char v67; // [rsp+93h] [rbp-7Dh]
  unsigned int v69; // [rsp+A0h] [rbp-70h]
  unsigned int v70; // [rsp+A4h] [rbp-6Ch]
  unsigned __int64 v71; // [rsp+A8h] [rbp-68h]
  unsigned int v72; // [rsp+B0h] [rbp-60h]
  LONG v73; // [rsp+B0h] [rbp-60h]
  __int64 v74; // [rsp+B8h] [rbp-58h]
  __int64 v75; // [rsp+B8h] [rbp-58h]
  unsigned int v76; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-48h]
  __int64 v78; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-38h] BYREF
  void *v80; // [rsp+E0h] [rbp-30h] BYREF
  unsigned __int64 v81; // [rsp+E8h] [rbp-28h]
  unsigned __int64 v82; // [rsp+F0h] [rbp-20h]
  unsigned int v83[2]; // [rsp+F8h] [rbp-18h]
  struct VIDMM_ALLOC **v84; // [rsp+100h] [rbp-10h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v85[2]; // [rsp+108h] [rbp-8h]
  VIDMM_GLOBAL *v86; // [rsp+110h] [rbp+0h]
  __int64 v87; // [rsp+118h] [rbp+8h]
  unsigned __int64 v88; // [rsp+120h] [rbp+10h]
  unsigned __int64 v89; // [rsp+128h] [rbp+18h]
  _QWORD v90[8]; // [rsp+130h] [rbp+20h] BYREF

  v89 = a3;
  v84 = a5;
  if ( (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = a3 >> 12;
  v88 = v9;
  v79 = a4 + v9;
  if ( a4 + v9 <= v9 )
    return 3221225485LL;
  v10 = *(VIDMM_GLOBAL **)(a2 + 64);
  v11 = *a1;
  v86 = v10;
  v12 = *(_QWORD *)(a2 + 96) + 32LL * ((v11 >> 7) & 0x1F);
  v13 = *((_QWORD *)v10 + 4999);
  v14 = 456LL * ((v11 >> 7) & 0x1F) + 48LL * (v11 & 7);
  v78 = v13;
  v87 = v14;
  if ( (v11 & 0x10) != 0 )
  {
    if ( *((_QWORD *)v10 + 5075) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(
        v10,
        **(struct _EPROCESS ***)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL) + 8LL),
        v89,
        a4 << 12);
      v9 = v88;
      v13 = v78;
    }
    v15 = *(_DWORD *)(v12 + 16);
  }
  else
  {
    v15 = *(_DWORD *)(v14 + v13 + 72);
  }
  v16 = *(_QWORD *)(v14 + v13 + 88);
  v17 = *(_QWORD *)(v14 + v13 + 96);
  v69 = v15;
  *(_QWORD *)v83 = (v9 & v16) >> v17;
  if ( (unsigned int)((v16 & (v79 - 1)) >> v17) + 1 > v15 )
    return 0LL;
  v72 = 0;
  v65 = 0;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)a1) || !a1[1] )
    return 0LL;
  v22 = v18 & ~*(_QWORD *)(v14 + v21 + 104);
  v71 = v18;
  v70 = v19;
  v80 = (void *)(v22 + *(_QWORD *)(v14 + v21 + 112));
  v23 = (unsigned __int64)v80;
  v82 = (unsigned __int64)v80;
  v24 = v18;
  v67 = 0;
  v76 = 1 - v20;
  while ( 1 )
  {
    v64 = 0;
    if ( v23 >= v79 )
    {
      v23 = v79;
      v82 = v79;
      v67 = 1;
    }
    v81 = v23 - v24;
    *(_QWORD *)v85 = *a1;
    v25 = (*(_WORD *)v85 & 0x1020) == 0x1020
       && (*(_BYTE *)(*((_QWORD *)a1 + 3) + 16LL * ((unsigned int)v19 + v20)) & 2) != 0;
    v26 = *((_QWORD *)a1 + 3);
    v19 = (unsigned int)v19;
    v66 = v25;
    v27 = 16LL * (unsigned int)v19;
    v77 = (unsigned int)v19;
    v74 = v27;
    if ( (*(_BYTE *)(v27 + v26) & 2) != 0 || v25 )
    {
      memset(v90, 0, sizeof(v90));
      v90[0] |= 3uLL;
      v24 = v71;
      BYTE1(v90[7]) = v66;
      LODWORD(v90[5]) = 6;
      LODWORD(v90[6]) = -2;
      BYTE2(v90[7]) = (*(_WORD *)v85 & 0x1000) != 0;
      LOBYTE(v90[7]) = 1;
      if ( v22 < v71 )
      {
        v30 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                (VIDMM_PAGE_DIRECTORY *)a1,
                (VIDMM_GLOBAL **)a2,
                (const struct COMMIT_VA_STATE *)v90,
                0LL,
                v22 << 12,
                v71 - v22,
                0LL,
                0,
                v84);
        if ( v30 < 0 )
          goto LABEL_71;
        v24 = v71;
      }
      if ( v82 < (unsigned __int64)v80 )
      {
        v30 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                (VIDMM_PAGE_DIRECTORY *)a1,
                (VIDMM_GLOBAL **)a2,
                (const struct COMMIT_VA_STATE *)v90,
                0LL,
                v82 << 12,
                (unsigned __int64)v80 - v82,
                0LL,
                0,
                v84);
        if ( v30 < 0 )
        {
LABEL_71:
          v53 = WdLogNewEntry5_WdWarning(v29, v28, v31);
          WdLogEvent5_WdWarning(v53);
          return (unsigned int)v30;
        }
        v24 = v71;
      }
      v19 = v77;
      v27 = v74;
    }
    v32 = *((_QWORD *)a1 + 3);
    v33 = *(_QWORD *)(v27 + v32);
    if ( (v33 & 1) == 0 )
      goto LABEL_47;
    if ( (v33 & 2) != 0 )
    {
      *(_QWORD *)(v27 + v32) = v33 & 0xFFFFFFFFFFFFFFFDuLL;
      v34 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v19);
      if ( !v34 || !*(_DWORD *)(v34 + 4) )
        *(_QWORD *)(v27 + *((_QWORD *)a1 + 3)) &= ~1uLL;
      v64 = 1;
    }
    v35 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)a1 + 4) + 8 * v19);
    if ( !v35 || !*((_DWORD *)v35 + 1) )
      goto LABEL_47;
    if ( (*a1 & 0x20) != 0 )
    {
      if ( a6 > 1 )
        goto LABEL_41;
      VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(v35, (struct CVirtualAddressAllocator *)a2, v24 << 12, v81);
    }
    else
    {
      VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(v35, a2, v24 << 12, v81, v84, 0);
    }
    v19 = v77;
    v27 = v74;
LABEL_41:
    v36 = (struct CVirtualAddressAllocator *)a2;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v19) + 4LL) || (*(_DWORD *)(a2 + 120) & 4) != 0 )
      goto LABEL_48;
    --a1[1];
    v37 = *((_QWORD *)a1 + 3);
    *(_QWORD *)(v27 + v37) = 0LL;
    *(_QWORD *)(v27 + v37 + 8) = 0LL;
    v38 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)a1 + 4) + 8 * v19);
    v39 = v71 & ~*(_QWORD *)(v14 + v78 + 104);
    if ( (*a1 & 0x20) != 0 )
      VIDMM_PAGE_TABLE::DestroyPageTable(v38, (struct CVirtualAddressAllocator *)a2, v39);
    else
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
        (VIDMM_PAGE_DIRECTORY *)v38,
        (struct CVirtualAddressAllocator *)a2,
        v39,
        v19);
    v64 = 1;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v77) = 0LL;
LABEL_47:
    v36 = (struct CVirtualAddressAllocator *)a2;
LABEL_48:
    v40 = v69;
    v41 = v70;
    if ( (*a1 & 0x1020) != 0x1020 )
      goto LABEL_61;
    if ( (a6 & 0xFFFFFFFD) != 0 )
      goto LABEL_61;
    v42 = *((_QWORD *)a1 + 3);
    v43 = v70 + v69;
    v75 = v43;
    v44 = *(_QWORD *)(v42 + 16 * v43);
    if ( (v44 & 1) == 0 )
      goto LABEL_61;
    if ( (v44 & 2) != 0 )
    {
      *(_QWORD *)(v42 + 16LL * (v70 + v69)) = v44 & 0xFFFFFFFFFFFFFFFDuLL;
      v45 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v43);
      if ( !v45 || !*(_DWORD *)(v45 + 4) )
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL * (v70 + v69)) &= ~1uLL;
      v64 = 1;
    }
    v46 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)a1 + 4) + 8 * v43);
    if ( v46 && *((_DWORD *)v46 + 1) )
    {
      VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(v46, v36, v71 << 12, v81);
      v47 = (struct CVirtualAddressAllocator *)a2;
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v75) + 4LL) || (*(_DWORD *)(a2 + 120) & 4) != 0 )
      {
        v49 = v71;
        v50 = v64;
      }
      else
      {
        --a1[1];
        v48 = *((_QWORD *)a1 + 3);
        *(_QWORD *)(v48 + 16LL * (v70 + v69)) = 0LL;
        *(_QWORD *)(v48 + 16LL * (v70 + v69) + 8) = 0LL;
        v49 = v71;
        VIDMM_PAGE_TABLE::DestroyPageTable(
          *(struct VIDMM_ALLOC ***)(*((_QWORD *)a1 + 4) + 8 * v75),
          (struct CVirtualAddressAllocator *)a2,
          v71 & ~*(_QWORD *)(v14 + v78 + 104));
        v47 = (struct CVirtualAddressAllocator *)a2;
        *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v75) = 0LL;
        v50 = 1;
      }
      v40 = v69;
      v41 = v70;
    }
    else
    {
LABEL_61:
      v47 = (struct CVirtualAddressAllocator *)a2;
      v50 = v64;
      v49 = v71;
    }
    if ( v50 )
    {
      if ( !v65 )
      {
        v65 = 1;
        *(_QWORD *)v83 = v41;
      }
      if ( v41 >= v72 )
        v72 = v40 + v41 + v76;
    }
    LODWORD(v19) = v41 + 1;
    v51 = v78;
    v71 = v81 + v49;
    v22 = (unsigned __int64)v80;
    v70 = v19;
    v23 = *(_QWORD *)(v14 + v78 + 112) + v82;
    v52 = (char *)v80 + *(_QWORD *)(v14 + v78 + 112);
    v82 = v23;
    v80 = v52;
    if ( v67 )
      break;
    v20 = v69;
    v24 = v71;
  }
  if ( v65 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)a1, v47, &v76, &v79, &v80) < 0 )
    {
      v55 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v55 + 24) = 5211LL;
      WdLogEvent5_WdError(v55);
      return 3221225473LL;
    }
    v56 = *a1;
    *(_QWORD *)v85 = (8 * ((*a1 & 0x40) != 0)) & 8;
    v73 = v72 - v83[0];
    v57 = (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * v83[0]);
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
    VIDMM_GLOBAL::UpdatePageTable(
      v86,
      *a1 & 7,
      KmdProcessHandle,
      0LL,
      0LL,
      0LL,
      0LL,
      v83[0],
      v73,
      v57,
      v60,
      (v56 >> 7) & 0x1F,
      v76,
      v79,
      v59,
      v61,
      v85[0]);
    v62 = (struct CVirtualAddressAllocator *)a2;
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      (VIDMM_PAGE_TABLE_BASE *)a1,
      (struct CVirtualAddressAllocator *)a2,
      v63,
      (void *)v79,
      (struct _MDL *)v80);
    v51 = v78;
    v14 = v87;
  }
  else
  {
    v62 = (struct CVirtualAddressAllocator *)a2;
  }
  if ( !a1[1] )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
      (VIDMM_PAGE_DIRECTORY *)a1,
      v62,
      v89 & ~*(_QWORD *)(v14 + v51 + 104),
      1u,
      1);
  return 0LL;
}
