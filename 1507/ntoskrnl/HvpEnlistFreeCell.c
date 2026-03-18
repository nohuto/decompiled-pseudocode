/*
 * XREFs of HvpEnlistFreeCell @ 0x14049F304
 * Callers:
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvpEnlistFreeCells @ 0x1404A0490 (HvpEnlistFreeCells.c)
 * Callees:
 *     HvpReleaseHCell @ 0x1400CA7E0 (HvpReleaseHCell.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpAddFreeCellHint @ 0x14049F24C (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpDelistFreeCell @ 0x14049FF74 (HvpDelistFreeCell.c)
 *     HvpGetBinMemAlloc @ 0x140558254 (HvpGetBinMemAlloc.c)
 */

void __fastcall HvpEnlistFreeCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4,
        char a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  ULONG_PTR v7; // r15
  unsigned int v9; // r14d
  __int64 v10; // rax
  _DWORD *v11; // rdi
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // r12
  _DWORD *BinAddress; // r15
  BOOLEAN v16; // r14
  struct _EX_RUNDOWN_REF *v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // r14d
  _DWORD *v20; // rdi
  struct _EX_RUNDOWN_REF *v21; // r13
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // r13
  int BinMemAlloc; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  _DWORD *v28; // r13
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r10
  __int64 *v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  unsigned int v35; // r8d
  __int64 v36; // r10
  unsigned int v37; // r15d
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // r10
  _QWORD *v41; // r11
  unsigned __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rax
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rax
  __int64 v46; // rcx
  struct _EX_RUNDOWN_REF *v47; // rax
  __int64 v48; // rcx
  int v49; // r8d
  unsigned __int64 v50; // rax
  BOOLEAN v51[4]; // [rsp+30h] [rbp-30h] BYREF
  int v52; // [rsp+34h] [rbp-2Ch] BYREF
  int v53; // [rsp+38h] [rbp-28h] BYREF
  int v54; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v55; // [rsp+40h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+48h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v57; // [rsp+50h] [rbp-10h]
  BOOLEAN v58; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v59; // [rsp+A8h] [rbp+48h]
  BOOLEAN v60; // [rsp+B0h] [rbp+50h] BYREF

  v59 = BugCheckParameter3;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)BugCheckParameter3;
  v9 = (a3 >> 3) - 1;
  v54 = -1;
  v56 = 0LL;
  v57 = 0LL;
  v60 = 0;
  v58 = 0;
  v51[0] = 0;
  v53 = -1;
  v52 = -1;
  LODWORD(v55) = -1;
  if ( v9 >= 0x10 )
  {
    v19 = v9 >> 4;
    if ( v19 > 0xFF )
    {
      v9 = 23;
    }
    else
    {
      _BitScanReverse(&v19, v19);
      v9 = v19 + 16;
    }
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)BugCheckParameter3,
          &v54);
  if ( v10 )
  {
    v11 = (_DWORD *)(v10 - 4);
    if ( v10 != 4 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v7);
      v14 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x312uLL);
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v13, CellMap, &v60, &v53);
      if ( v11 != BinAddress + 8 || v6 != (unsigned int)BinAddress[2] - 32LL )
        goto LABEL_6;
      v20 = BinAddress;
      v56 = v14;
      v21 = v14;
      while ( !(unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, v20, (unsigned int)v5) )
      {
        if ( v58 )
        {
          HvpMapEntryReleaseBlockAddress(v22, v21);
          v58 = 0;
        }
        v43 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                          BugCheckParameter2,
                                          (unsigned int)(v20[1] + ((_DWORD)v5 << 31) - 4096));
        v56 = v43;
        v21 = v43;
        if ( !v43 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v20[1] + ((_DWORD)v5 << 31) - 4096), 0x331uLL);
        v20 = (_DWORD *)HvpMapEntryGetBinAddress(v44, v43, &v58, &v52);
        if ( v20[8] != (unsigned int)v20[2] - 32LL )
          goto LABEL_6;
      }
      if ( !v20[1] )
        goto LABEL_6;
      v23 = v14;
      v57 = v14;
      while ( 1 )
      {
        BinMemAlloc = HvpGetBinMemAlloc(BugCheckParameter2, v20, (unsigned int)v5);
        v25 = (unsigned int)(BinAddress[2] + BinAddress[1]);
        if ( (unsigned int)v25 >= v20[1] + BinMemAlloc )
          break;
        if ( a5 )
        {
          if ( v51[0] )
          {
            HvpMapEntryReleaseBlockAddress(v25, v23);
            v51[0] = 0;
          }
          v45 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                            BugCheckParameter2,
                                            (unsigned int)(BinAddress[2] + BinAddress[1] + ((_DWORD)v5 << 31)));
          v57 = v45;
          v23 = v45;
          if ( !v45 )
            KeBugCheckEx(
              0x51u,
              1uLL,
              BugCheckParameter2,
              (unsigned int)(((_DWORD)v5 << 31) + BinAddress[1] + BinAddress[2]),
              0x35EuLL);
          BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v46, v45, v51, &v55);
          if ( BinAddress[8] == (unsigned int)BinAddress[2] - 32LL )
            continue;
        }
        goto LABEL_6;
      }
      if ( (v20[2] == (unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, v20, (unsigned int)v5)
         || (unsigned __int8)HvpMarkDirty(BugCheckParameter2))
        && (v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(
                    32LL,
                    0LL,
                    540495171LL)) != 0 )
      {
        v16 = v60;
        if ( v60 )
        {
          HvpMapEntryReleaseBlockAddress(v26, v14);
          v16 = 0;
          v60 = 0;
        }
        v14 = v56;
        v27 = (_DWORD)v5 << 31;
        v28 = v20;
        v52 = (_DWORD)v5 << 31;
        while ( 1 )
        {
          HvpDelistFreeCell(BugCheckParameter2, (unsigned int)(v27 + 32 + v28[1]));
          if ( v28 == BinAddress )
            break;
          if ( v16 )
          {
            HvpMapEntryReleaseBlockAddress(v29, v14);
            v60 = 0;
          }
          v47 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(v28[1] + v52 + v28[2]));
          v14 = v47;
          if ( !v47 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v49 + v28[1] + v28[2]), 0x39EuLL);
          v50 = HvpMapEntryGetBinAddress(v48, v47, &v60, &v53);
          v27 = v52;
          v28 = (_DWORD *)v50;
          v16 = v60;
        }
        v30 = HvpGetBinMemAlloc(BugCheckParameter2, v20, (unsigned int)v5);
        v31 = v55;
        v20[2] = v30;
        *(_DWORD *)(v31 + 16) = v30;
        *(_DWORD *)(v31 + 20) = v20[1];
        v20[8] = v20[2] - 32;
        v32 = (__int64 *)(632 * v5 + BugCheckParameter2 + 2008);
        v33 = *v32;
        *(_QWORD *)v31 = *v32;
        *(_QWORD *)(v31 + 8) = v32;
        if ( *(__int64 **)(v33 + 8) != v32 )
          __fastfail(3u);
        v34 = v52;
        *(_QWORD *)(v33 + 8) = v31;
        *v32 = v31;
        if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(v20[1] + v34)) )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x3BDuLL);
        v17 = v56;
        v37 = 0;
        for ( *(_DWORD *)(v36 + 24) = 1; v37 < v20[2]; v41[2] = v42 )
        {
          v38 = HvpGetCellMap(BugCheckParameter2, v35);
          v41 = (_QWORD *)v38;
          if ( !v38 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v39, 0x3C8uLL);
          v35 = v39 + 4096;
          v37 += 4096;
          *(_QWORD *)(v38 + 8) = *(_DWORD *)(v38 + 8) & 0xD | 2u | v17[1].Count & 0xFFFFFFFFFFFFFFF0uLL;
          v42 = v17[2].Count & 0xFFFFFFFFFFFFFFF0uLL;
          *v41 = v40;
        }
      }
      else
      {
LABEL_6:
        HvpAddFreeCellHint(BugCheckParameter2, v59, v9, v5);
        v16 = v60;
        v17 = v56;
      }
      HvpReleaseHCell(BugCheckParameter2);
      if ( v58 )
        HvpMapEntryReleaseBlockAddress(v18, v17);
      if ( v51[0] )
        HvpMapEntryReleaseBlockAddress(v18, v57);
      if ( v16 )
        HvpMapEntryReleaseBlockAddress(v18, v14);
    }
  }
}
