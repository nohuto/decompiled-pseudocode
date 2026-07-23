/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401189D0 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14021F7F8 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039A4 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x140080D40 (RtlCompressBuffer.c)
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140114F4C (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmHpChunkFree @ 0x140117B64 (SmHpChunkFree.c)
 *     SmHpChunkAlloc @ 0x140118638 (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140118E04 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14011AAF4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmpCheckForCombine@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKKPEAK@Z @ 0x14011BEA8 (-StDmpCheckForCombine@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKK.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14021F33C (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x140222278 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(struct NP_CONTEXT::NP_CTX *a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // r14
  char v4; // bl
  unsigned int v7; // edx
  int v8; // ecx
  int Space; // esi
  __int64 v10; // rsi
  UCHAR *v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  ULONG v16; // edx
  unsigned int v17; // ecx
  UCHAR *v18; // r13
  unsigned int v19; // r13d
  __int64 v20; // rsi
  _WORD *v21; // rax
  __int64 v22; // rax
  unsigned int v24; // ecx
  int v25; // ecx
  __int64 v26; // r9
  __int64 v27; // rcx
  ULONG v28; // eax
  ULONG Length; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v31; // [rsp+48h] [rbp-38h] BYREF
  ULONG *v32; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v33; // [rsp+58h] [rbp-28h]
  __int64 v34; // [rsp+60h] [rbp-20h]
  __int64 v35; // [rsp+68h] [rbp-18h] BYREF
  int v36; // [rsp+70h] [rbp-10h]

  v3 = 0LL;
  v34 = a2;
  v4 = 0;
  v33 = a3;
  v7 = *(_DWORD *)a2 & 7;
  v8 = (unsigned __int8)*((_DWORD *)a1 + 194);
  if ( (v8 != 0 ? 0 : 7) < v7 )
    v7 = v8 != 0 ? 0 : 7;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace((_DWORD)a1, v7, *a3, (unsigned int)&v32, (__int64)&v30);
  if ( Space >= 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*((_QWORD *)a1 + 100));
    v4 = 1;
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (UCHAR *)v32 + *((unsigned int *)a1 + 206);
    v12 = *((_DWORD *)a1 + 194);
    if ( (v12 & 0x400) != 0 )
    {
      v16 = 4096;
    }
    else
    {
      if ( (v12 & 0x8000) != 0 )
      {
        v13 = 32LL;
        v14 = (_OWORD *)(*((_QWORD *)a1 + 219) + 4096LL);
        do
        {
          *v14 = *(_OWORD *)v10;
          v14[1] = *(_OWORD *)(v10 + 16);
          v14[2] = *(_OWORD *)(v10 + 32);
          v14[3] = *(_OWORD *)(v10 + 48);
          v14[4] = *(_OWORD *)(v10 + 64);
          v14[5] = *(_OWORD *)(v10 + 80);
          v14[6] = *(_OWORD *)(v10 + 96);
          v14 += 8;
          v15 = *(_OWORD *)(v10 + 112);
          v10 += 128LL;
          *(v14 - 1) = v15;
          --v13;
        }
        while ( v13 );
        v10 = *((_QWORD *)a1 + 219) + 4096LL;
      }
      v16 = 0;
    }
    v17 = *((_DWORD *)a1 + 204) - (v30 & *((_DWORD *)a1 + 202));
    Length = v16;
    v31 = v17;
    if ( v17 < *((_DWORD *)a1 + 205) )
      v18 = (UCHAR *)*((_QWORD *)a1 + 219);
    else
      v18 = v11;
    if ( !v16 )
    {
      if ( RtlCompressBuffer(
             *((_WORD *)a1 + 488),
             (PUCHAR)v10,
             0x1000u,
             v18,
             0x1000u,
             0x1000u,
             &Length,
             *((PVOID *)a1 + 112)) < 0 )
      {
        v16 = 4096;
        Length = 4096;
      }
      else
      {
        v16 = Length;
      }
    }
    if ( v18 != v11 )
    {
      v24 = (v16 + *((_DWORD *)a1 + 206) + 15) >> 4;
      *v33 = v24;
      if ( v24 > v31 )
      {
        Space = -1073741267;
        goto LABEL_31;
      }
    }
    if ( v16 > 0xFF0 )
    {
      if ( (*((_DWORD *)a1 + 194) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_31;
      }
      v16 = 4096;
      v18 = (UCHAR *)v10;
      Length = 4096;
    }
    if ( v18 != v11 )
      memmove(v11, v18, v16);
    if ( *((_QWORD *)a1 + 95) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate((__int64)a1), Space >= 0) )
    {
      v4 = 0;
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
      v19 = v30;
      if ( (unsigned __int8)*((_DWORD *)a1 + 194) )
        v20 = 0LL;
      else
        v20 = ST_STORE<SM_TRAITS>::StDmpCheckForCombine(a1, v11, Length, v30, &v31);
      if ( !v20 )
      {
        v21 = SmHpChunkAlloc((_DWORD *)a1 + 48);
        v3 = (unsigned __int64)v21;
        if ( !v21 )
        {
          Space = -1073741670;
          goto LABEL_31;
        }
        *(_QWORD *)v21 = 0LL;
        *((_DWORD *)v21 + 2) = 0;
        *(_DWORD *)v21 = v19;
        if ( Length < 0x1000 )
          *((_DWORD *)v21 + 1) ^= ((unsigned __int16)Length ^ (unsigned __int16)*((_DWORD *)v21 + 1)) & 0xFFF;
        *((_DWORD *)v21 + 2) = v31;
        v22 = *((_QWORD *)a1 + 125);
        if ( *(_DWORD *)(v22 + 24) )
        {
          v25 = *(_DWORD *)(v22 + 8);
          ++*((_QWORD *)a1 + 126);
          v26 = ~(v25 - 1) & (v25 + Length - 1);
          *(_DWORD *)(v3 + 12) = *((_DWORD *)a1 + 252);
          *(_WORD *)(v3 + 6) = *((_WORD *)a1 + 506);
          v27 = *((_QWORD *)a1 + 125);
          v36 = 0;
          v35 = Length;
          HIDWORD(v35) = *(_DWORD *)(v3 + 12);
          v36 = *(unsigned __int16 *)(v3 + 6);
          if ( (int)SmCrAuthEncrypt(v27, v11, v11, v26, &v35) < 0 )
          {
            Space = -1073741174;
            goto LABEL_31;
          }
        }
        else if ( (unsigned __int8)*((_DWORD *)a1 + 194) )
        {
          v28 = RtlComputeCrc32(0, v11, Length);
          *v32 = v28;
        }
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1);
      if ( Space >= 0 )
      {
        v3 = 0LL;
        Space = 0;
      }
    }
  }
LABEL_31:
  if ( (v4 & 1) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
  if ( v3 )
    SmHpChunkFree((_DWORD *)a1 + 48, v3);
  return (unsigned int)Space;
}
