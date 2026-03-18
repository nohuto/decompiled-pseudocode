/*
 * XREFs of HvpEnlistFreeCell @ 0x1403D9258
 * Callers:
 *     HvpEnlistFreeCells @ 0x1403D8B50 (HvpEnlistFreeCells.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetBinMemAlloc @ 0x1403D59C0 (HvpGetBinMemAlloc.c)
 *     HvpAddFreeCellHint @ 0x1403D9584 (HvpAddFreeCellHint.c)
 *     HvpDelistFreeCell @ 0x1403D963C (HvpDelistFreeCell.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
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
  __int64 v9; // rax
  _DWORD *v10; // rdi
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // r12
  _DWORD *BinAddress; // r15
  BOOLEAN v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  struct _EX_RUNDOWN_REF *v19; // r13
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // r13
  int BinMemAlloc; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  _DWORD *v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r10
  __int64 *v30; // rax
  __int64 v31; // rcx
  int v32; // r8d
  unsigned int v33; // r8d
  __int64 v34; // r10
  unsigned int v35; // r15d
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // r10
  _QWORD *v39; // r11
  unsigned __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rax
  __int64 v42; // rcx
  struct _EX_RUNDOWN_REF *v43; // rax
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rax
  __int64 v46; // rcx
  int v47; // r8d
  unsigned __int64 v48; // rax
  BOOLEAN v49[4]; // [rsp+30h] [rbp-30h] BYREF
  int v50; // [rsp+34h] [rbp-2Ch] BYREF
  int v51; // [rsp+38h] [rbp-28h] BYREF
  int v52; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v53; // [rsp+40h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+48h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+50h] [rbp-10h]
  BOOLEAN v56; // [rsp+A0h] [rbp+40h] BYREF
  int v57; // [rsp+A8h] [rbp+48h]
  BOOLEAN v58; // [rsp+B0h] [rbp+50h] BYREF

  v57 = BugCheckParameter3;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)BugCheckParameter3;
  v52 = -1;
  v54 = 0LL;
  v55 = 0LL;
  v58 = 0;
  v56 = 0;
  v49[0] = 0;
  v51 = -1;
  v50 = -1;
  LODWORD(v53) = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)BugCheckParameter3,
         &v52);
  if ( v9 )
  {
    v10 = (_DWORD *)(v9 - 4);
    if ( v9 != 4 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v7);
      v13 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x312uLL);
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v12, CellMap, &v58, &v51);
      if ( v10 != BinAddress + 8 || v6 != (unsigned int)BinAddress[2] - 32LL )
        goto LABEL_5;
      v18 = BinAddress;
      v54 = v13;
      v19 = v13;
      while ( !(unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v18, v5) )
      {
        if ( v56 )
        {
          HvpMapEntryReleaseBlockAddress(v20, v19);
          v56 = 0;
        }
        v41 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                          BugCheckParameter2,
                                          (unsigned int)(v18[1] + ((_DWORD)v5 << 31) - 4096));
        v54 = v41;
        v19 = v41;
        if ( !v41 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v18[1] + ((_DWORD)v5 << 31) - 4096), 0x331uLL);
        v18 = (_DWORD *)HvpMapEntryGetBinAddress(v42, v41, &v56, &v50);
        if ( v18[8] != (unsigned int)v18[2] - 32LL )
          goto LABEL_5;
      }
      if ( !v18[1] )
        goto LABEL_5;
      v21 = v13;
      v55 = v13;
      while ( 1 )
      {
        BinMemAlloc = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v18, v5);
        v23 = (unsigned int)(BinAddress[2] + BinAddress[1]);
        if ( (unsigned int)v23 >= v18[1] + BinMemAlloc )
          break;
        if ( a5 )
        {
          if ( v49[0] )
          {
            HvpMapEntryReleaseBlockAddress(v23, v21);
            v49[0] = 0;
          }
          v43 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                            BugCheckParameter2,
                                            (unsigned int)(BinAddress[2] + BinAddress[1] + ((_DWORD)v5 << 31)));
          v55 = v43;
          v21 = v43;
          if ( !v43 )
            KeBugCheckEx(
              0x51u,
              1uLL,
              BugCheckParameter2,
              (unsigned int)(((_DWORD)v5 << 31) + BinAddress[1] + BinAddress[2]),
              0x35EuLL);
          BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v44, v43, v49, &v53);
          if ( BinAddress[8] == (unsigned int)BinAddress[2] - 32LL )
            continue;
        }
        goto LABEL_5;
      }
      if ( (v18[2] == (unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v18, v5)
         || (unsigned __int8)HvpMarkDirty(BugCheckParameter2))
        && (v53 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(
                    32LL,
                    0LL,
                    540495171LL)) != 0 )
      {
        v15 = v58;
        if ( v58 )
        {
          HvpMapEntryReleaseBlockAddress(v24, v13);
          v15 = 0;
          v58 = 0;
        }
        v13 = v54;
        v25 = (_DWORD)v5 << 31;
        v26 = v18;
        v50 = (_DWORD)v5 << 31;
        while ( 1 )
        {
          HvpDelistFreeCell(BugCheckParameter2, (unsigned int)(v25 + 32 + v26[1]));
          if ( v26 == BinAddress )
            break;
          if ( v15 )
          {
            HvpMapEntryReleaseBlockAddress(v27, v13);
            v58 = 0;
          }
          v45 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(v26[1] + v50 + v26[2]));
          v13 = v45;
          if ( !v45 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v47 + v26[1] + v26[2]), 0x39EuLL);
          v48 = HvpMapEntryGetBinAddress(v46, v45, &v58, &v51);
          v25 = v50;
          v26 = (_DWORD *)v48;
          v15 = v58;
        }
        v28 = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v18, v5);
        v29 = v53;
        v18[2] = v28;
        *(_DWORD *)(v29 + 16) = v28;
        *(_DWORD *)(v29 + 20) = v18[1];
        v18[8] = v18[2] - 32;
        v30 = (__int64 *)(632 * v5 + BugCheckParameter2 + 2008);
        v31 = *v30;
        *(_QWORD *)v29 = *v30;
        *(_QWORD *)(v29 + 8) = v30;
        if ( *(__int64 **)(v31 + 8) != v30 )
          __fastfail(3u);
        v32 = v50;
        *(_QWORD *)(v31 + 8) = v29;
        *v30 = v29;
        if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(v18[1] + v32)) )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33, 0x3BDuLL);
        v16 = v54;
        v35 = 0;
        for ( *(_DWORD *)(v34 + 24) = 1; v35 < v18[2]; v39[2] = v40 )
        {
          v36 = HvpGetCellMap(BugCheckParameter2, v33);
          v39 = (_QWORD *)v36;
          if ( !v36 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v37, 0x3C8uLL);
          v33 = v37 + 4096;
          v35 += 4096;
          *(_QWORD *)(v36 + 8) = *(_DWORD *)(v36 + 8) & 0xD | 2u | v16[1].Count & 0xFFFFFFFFFFFFFFF0uLL;
          v40 = v16[2].Count & 0xFFFFFFFFFFFFFFF0uLL;
          *v39 = v38;
        }
      }
      else
      {
LABEL_5:
        HvpAddFreeCellHint(BugCheckParameter2);
        v15 = v58;
        v16 = v54;
      }
      HvpReleaseHCell(BugCheckParameter2);
      if ( v56 )
        HvpMapEntryReleaseBlockAddress(v17, v16);
      if ( v49[0] )
        HvpMapEntryReleaseBlockAddress(v17, v55);
      if ( v15 )
        HvpMapEntryReleaseBlockAddress(v17, v13);
    }
  }
}
