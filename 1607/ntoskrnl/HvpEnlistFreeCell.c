/*
 * XREFs of HvpEnlistFreeCell @ 0x1404F823C
 * Callers:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCells @ 0x1404F7490 (HvpEnlistFreeCells.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpDelistFreeCell @ 0x140400838 (HvpDelistFreeCell.c)
 *     HvpGetBinMemAlloc @ 0x1404CFC3C (HvpGetBinMemAlloc.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpGetHCell @ 0x1404F85D0 (HvpGetHCell.c)
 *     HvpAddFreeCellHint @ 0x1404F85E8 (HvpAddFreeCellHint.c)
 */

__int64 __fastcall HvpEnlistFreeCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        char a5)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  ULONG_PTR v8; // r13
  __int64 result; // rax
  __int64 v10; // r12
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // r15
  unsigned __int64 BinAddress; // r13
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // r12
  __int64 v19; // rcx
  _DWORD *v20; // r12
  int BinMemAlloc; // eax
  __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // r14d
  __int64 v29; // rcx
  int v30; // eax
  ULONG_PTR v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rax
  unsigned int v35; // r8d
  int v36; // r11d
  _QWORD *v37; // r10
  unsigned __int64 v38; // rax
  int v39; // ebx
  struct _EX_RUNDOWN_REF *v40; // rax
  __int64 v41; // rcx
  struct _EX_RUNDOWN_REF *v42; // rax
  __int64 v43; // rcx
  struct _EX_RUNDOWN_REF *v44; // rax
  __int64 v45; // rcx
  _WORD v46[2]; // [rsp+30h] [rbp-30h] BYREF
  _WORD v47[2]; // [rsp+34h] [rbp-2Ch] BYREF
  __int16 v48; // [rsp+38h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v49; // [rsp+40h] [rbp-20h]
  _DWORD v50[2]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v51; // [rsp+50h] [rbp-10h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+58h] [rbp-8h]

  v50[0] = -1;
  v50[1] = 0;
  v49 = 0LL;
  v52 = 0LL;
  v6 = 0LL;
  v51 = 0LL;
  v7 = a4;
  v8 = (unsigned int)BugCheckParameter3;
  HvpGetBinContextInitialize(v46);
  HvpGetBinContextInitialize(v47);
  HvpGetBinContextInitialize(&v48);
  result = HvpGetHCell(BugCheckParameter2, (unsigned int)v8, v50);
  v10 = result;
  if ( result )
  {
    CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v8);
    v13 = CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x303uLL);
    BinAddress = HvpMapEntryGetBinAddress(v12, CellMap, v46);
    if ( v10 != BinAddress + 32 )
      goto LABEL_4;
    v17 = *(unsigned int *)(BinAddress + 8) - 32LL;
    if ( a3 != v17 )
      goto LABEL_4;
    v49 = v13;
    v18 = v13;
    v6 = (_DWORD *)HvpMapEntryGetBinAddress(v17, v13, v47);
    while ( !(unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v6, v7) )
    {
      v39 = v6[1];
      HvpMapEntryReleaseBinAddress(v19, v18, v47);
      v40 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v39 + ((_DWORD)v7 << 31) - 4096);
      v49 = v40;
      v18 = v40;
      if ( !v40 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(((_DWORD)v7 << 31) + MEMORY[4] - 4096), 0x323uLL);
      v6 = (_DWORD *)HvpMapEntryGetBinAddress(v41, v40, v47);
      if ( v6[8] != (unsigned int)v6[2] - 32LL )
        goto LABEL_4;
    }
    if ( !v6[1] )
      goto LABEL_4;
    v52 = v13;
    v20 = (_DWORD *)HvpMapEntryGetBinAddress(v19, v13, &v48);
    v51 = v20;
    while ( 1 )
    {
      BinMemAlloc = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v6, v7);
      v23 = v20[1] + v20[2];
      if ( v23 >= BinMemAlloc + v6[1] )
        break;
      if ( a5 )
      {
        HvpMapEntryReleaseBinAddress(v22, v52, &v48);
        v42 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v23 + ((_DWORD)v7 << 31));
        v52 = v42;
        if ( !v42 )
          KeBugCheckEx(
            0x51u,
            1uLL,
            BugCheckParameter2,
            (unsigned int)(MEMORY[4] + MEMORY[8] + ((_DWORD)v7 << 31)),
            0x350uLL);
        v20 = (_DWORD *)HvpMapEntryGetBinAddress(v43, v42, &v48);
        v51 = v20;
        if ( v20[8] == (unsigned int)v20[2] - 32LL )
          continue;
      }
      goto LABEL_4;
    }
    if ( (v6[2] == (unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v6, v7)
       || HvpMarkDirty(BugCheckParameter2, v6[1] + ((_DWORD)v7 << 31), 40, 0))
      && (v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(32LL, 0LL, 540495171LL)) != 0 )
    {
      HvpMapEntryReleaseBinAddress(v24, v13, v46);
      v13 = v49;
      v27 = HvpMapEntryGetBinAddress(v26, v49, v46);
      v28 = (_DWORD)v7 << 31;
      while ( 1 )
      {
        BinAddress = v27;
        HvpDelistFreeCell(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v27 + 4) + v28 + 32));
        if ( (_DWORD *)BinAddress == v51 )
          break;
        HvpMapEntryReleaseBinAddress(v29, v13, v46);
        v44 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, MEMORY[4] + v28 + MEMORY[8]);
        v13 = v44;
        if ( !v44 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(MEMORY[4] + v28 + MEMORY[8]), 0x38CuLL);
        v27 = HvpMapEntryGetBinAddress(v45, v44, v46);
      }
      v30 = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v6, v7);
      v6[2] = v30;
      *(_DWORD *)(v25 + 16) = v30;
      *(_DWORD *)(v25 + 20) = v6[1];
      v6[8] = v6[2] - 32;
      v31 = 632 * v7 + BugCheckParameter2 + 2008;
      v32 = *(_QWORD *)v31;
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
        __fastfail(3u);
      *(_QWORD *)v25 = v32;
      *(_QWORD *)(v25 + 8) = v31;
      *(_QWORD *)(v32 + 8) = v25;
      *(_QWORD *)v31 = v25;
      if ( !HvpGetCellMap(BugCheckParameter2, v28 + v6[1]) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33, 0x3A8uLL);
      v15 = v49;
      *(_DWORD *)(v25 + 24) = 1;
      if ( v6[2] )
      {
        do
        {
          v34 = HvpGetCellMap(BugCheckParameter2, v33);
          v37 = (_QWORD *)v34;
          if ( !v34 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x3B3uLL);
          v33 = v35 + 4096;
          *(_QWORD *)(v34 + 8) = *(_DWORD *)(v34 + 8) & 0xD | 2u | v15[1].Count & 0xFFFFFFFFFFFFFFF0uLL;
          v38 = v15[2].Count & 0xFFFFFFFFFFFFFFF0uLL;
          *v37 = v25;
          v37[2] = v38;
        }
        while ( (unsigned int)(v36 + 4096) < v6[2] );
      }
    }
    else
    {
LABEL_4:
      HvpAddFreeCellHint(BugCheckParameter2);
      v15 = v49;
    }
    result = HvpReleaseHCell(BugCheckParameter2);
    if ( v6 )
      result = HvpMapEntryReleaseBinAddress(v16, v15, v47);
    if ( v51 )
      result = HvpMapEntryReleaseBinAddress(v16, v52, &v48);
    if ( BinAddress )
      return HvpMapEntryReleaseBinAddress(v16, v13, v46);
  }
  return result;
}
