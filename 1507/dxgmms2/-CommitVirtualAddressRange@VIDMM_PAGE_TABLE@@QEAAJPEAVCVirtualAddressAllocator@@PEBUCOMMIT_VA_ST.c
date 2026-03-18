/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C005875C (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D100 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0060C90 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0061678 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063E68 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        __int64 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  _DWORD *v16; // r13
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  int v19; // r12d
  __int64 v20; // rdx
  VIDMM_PAGE_TABLE *v21; // rcx
  struct VIDMM_GLOBAL *v22; // r9
  struct VIDMM_ALLOC **v23; // r10
  __int64 v24; // rcx
  int updated; // esi
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  __int64 v31; // r10
  __int64 v32; // r8
  unsigned int v33; // r11d
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  int v39; // r9d
  int v40; // r12d
  unsigned int v41; // ebp
  unsigned int v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // esi
  struct VIDMM_GLOBAL *v48; // r13
  unsigned int v49; // esi
  unsigned int v50; // r8d
  __int64 v51; // rax
  VIDMM_GLOBAL **v52; // rbp
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  VIDMM_GLOBAL *v56; // rax
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rax
  int v60; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+60h] [rbp-48h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]
  struct VIDMM_GLOBAL *v65; // [rsp+D0h] [rbp+28h]
  unsigned __int64 v66; // [rsp+D8h] [rbp+30h]
  unsigned __int64 v67; // [rsp+E0h] [rbp+38h]
  char v68; // [rsp+F0h] [rbp+48h]

  v12 = (unsigned __int64)a5 >> 12;
  *a9 = 0LL;
  v13 = ((unsigned __int64)a5 >> 12) + a6;
  if ( v13 <= (unsigned __int64)a5 >> 12 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, v12, a4);
    *(_QWORD *)(v14 + 24) = 3868LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v65 = a2[8];
  v16 = (_DWORD *)(*((_QWORD *)v65 + 4999) + 456 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F));
  v62 = v12 & ~*(_QWORD *)&v16[12 * (*(_DWORD *)this & 7) + 26];
  v66 = v62 & ~*(_QWORD *)&v16[12 * (*(_DWORD *)this & 7) + 22];
  v61 = *(_QWORD *)&v16[12 * (*(_DWORD *)this & 7) + 28];
  if ( (*(_DWORD *)this & 0x40) != 0 )
    v61 = 16LL * *(_QWORD *)&v16[12 * (*(_DWORD *)this & 7) + 28];
  v17 = v16[14] & (v13 - 1);
  v67 = a7 >> 12;
  v18 = v12 & v16[14];
  v19 = 0;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v68 = a8;
  }
  else
  {
    updated = VIDMM_PAGE_TABLE::CommitPageTable(v21, v22, v23);
    if ( updated < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v20, v26);
      WdLogEvent5_WdWarning(v27);
      return (unsigned int)updated;
    }
    v22 = v65;
    v19 = 2;
    v68 = 1;
  }
  if ( !*((_BYTE *)a3 + 58) )
  {
    if ( *((_BYTE *)a3 + 57) )
    {
      if ( !*((_DWORD *)this + 1) )
        *(_DWORD *)this |= 0x40u;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 59) )
        {
          VIDMM_PROCESS::SuspendResumeProcess(a2[9], *(_DWORD *)(*((_QWORD *)v22 + 3) + 184LL), 1);
          *((_BYTE *)a3 + 59) = 1;
        }
        v28 = v16[16];
        v29 = 16 * (v28 - 1);
        v30 = v28 - 1;
        v31 = v30;
        if ( v30 >= 0 )
        {
          v32 = 16LL * v30;
          do
          {
            if ( (*(_BYTE *)(v32 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v33 = 0;
              v34 = 0LL;
              do
              {
                v35 = *((_QWORD *)this + 3);
                v20 = 2LL * (v33 + v29);
                ++v33;
                *(_OWORD *)(v35 + 8 * v20) = *(_OWORD *)(v32 + v35);
                *(_QWORD *)(v35 + 8 * v20 + 8) += v34++;
              }
              while ( v33 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              LODWORD(v20) = 0;
              do
              {
                v36 = 16LL * (unsigned int)(v20 + v29);
                v20 = (unsigned int)(v20 + 1);
                v37 = (_QWORD *)(*((_QWORD *)this + 3) + v36);
                *v37 = 0LL;
                v37[1] = 0LL;
              }
              while ( (unsigned int)v20 < 0x10 );
            }
            v29 -= 16;
            v32 -= 16LL;
            --v31;
          }
          while ( v31 >= 0 );
        }
        if ( *((_BYTE *)a3 + 56) )
        {
          KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle(a2);
          VIDMM_PAGE_TABLE::UpdatePageTable(
            this,
            a2,
            KmdProcessHandle,
            a3,
            *((_QWORD *)a3 + 4),
            a4,
            *((_DWORD *)a3 + 10),
            v39 & v60,
            v16[15],
            v66,
            v39);
        }
      }
      *(_DWORD *)this &= ~0x40u;
    }
  }
  v40 = ((unsigned __int8)v19 ^ (unsigned __int8)(8 * (((*(_DWORD *)this >> 6) & 1) != 0))) & 8 ^ v19;
  if ( ((*(_DWORD *)this >> 6) & 1) != 0 )
  {
    v18 >>= 4;
    v17 >>= 4;
  }
  v41 = v17 + 1;
  v42 = v41 - v18;
  if ( !v68 )
  {
    v48 = v65;
LABEL_47:
    v52 = a2;
    goto LABEL_48;
  }
  if ( v18 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v65, 0, v18);
    if ( *((_BYTE *)a3 + 56) )
    {
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  this,
                  (struct CVirtualAddressAllocator *)a2,
                  0,
                  v18,
                  v66,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v40);
      if ( updated < 0 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v43, v20, v44, v45);
        *(_QWORD *)(v46 + 24) = 4024LL;
LABEL_38:
        WdLogEvent5_WdAssertion(v46);
        return (unsigned int)updated;
      }
    }
  }
  if ( (*(_DWORD *)this & 0x40) != 0 )
    v47 = v16[16];
  else
    v47 = v16[15];
  v48 = v65;
  if ( v41 >= v47 )
    goto LABEL_47;
  v49 = v47 - v41;
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, v65, v41, v49);
  if ( !*((_BYTE *)a3 + 56) )
    goto LABEL_47;
  v50 = v41;
  v51 = v61 * v41;
  v52 = a2;
  updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              (struct CVirtualAddressAllocator *)a2,
              v50,
              v49,
              v66 + v51,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v40);
  if ( updated < 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v53, v20, v54, v55);
    *(_QWORD *)(v46 + 24) = 4044LL;
    goto LABEL_38;
  }
LABEL_48:
  if ( ((*((_DWORD *)a3 + 12) + 3) & 0xFFFFFFFD) != 0 )
    VIDMM_PAGE_TABLE::ModifyPageTable(this, (struct CVirtualAddressAllocator *)v20, a3, v18, v42, v67);
  else
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v48, v18, v42);
  if ( !*((_BYTE *)a3 + 56) )
    return 0LL;
  v56 = CVirtualAddressAllocator::GetKmdProcessHandle(v52);
  v58 = VIDMM_PAGE_TABLE::UpdatePageTable(
          this,
          v52,
          v56,
          a3,
          *((_QWORD *)a3 + 4),
          a4,
          *((_DWORD *)a3 + 10),
          v18,
          v42,
          v62,
          v40);
  if ( v58 >= 0 )
    return 0LL;
  v59 = WdLogNewEntry5_WdError(v57);
  *(_QWORD *)(v59 + 24) = 4085LL;
  WdLogEvent5_WdError(v59);
  return (unsigned int)v58;
}
