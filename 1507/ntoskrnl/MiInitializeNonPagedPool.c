/*
 * XREFs of MiInitializeNonPagedPool @ 0x1407CB188
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14010E740 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14015FB98 (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14015FC6C (MiBuildDynamicRegion.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 */

__int64 MiInitializeNonPagedPool()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 *v13; // r13
  unsigned int v15; // r8d
  __int64 v16; // r14
  __int64 v17; // rsi
  PSLIST_HEADER v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r15
  unsigned __int64 v24; // r12
  PSLIST_HEADER v25; // r14
  _QWORD *v26; // rdi
  unsigned __int64 *v27; // rbx
  __int64 *v28; // rcx
  __int64 *v29; // rdi
  __int64 PteShadow; // rbx
  __int64 v31; // r9
  unsigned __int64 v32; // rsi
  __int64 v33; // rsi
  _SLIST_HEADER *v34; // r15
  __int64 v35; // r14
  unsigned __int64 Region; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdi
  __int64 *v40; // r14
  unsigned __int64 v41; // [rsp+30h] [rbp-88h]
  unsigned __int64 v42; // [rsp+38h] [rbp-80h]
  unsigned __int64 v43; // [rsp+40h] [rbp-78h]
  unsigned __int64 v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  unsigned __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  unsigned __int64 v48; // [rsp+68h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp+8h] BYREF
  int v50; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+D0h] [rbp+18h]
  PSLIST_HEADER v52; // [rsp+D8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  qword_14034FB80 = v3;
  if ( (MiFlags & 1) == 0 && !MmSpecialPoolTag && MmProtectFreedNonPagedPool != 1 )
  {
    v4 = 4;
    dword_14034E648[0] = 4;
    if ( qword_1403551D0 < 0x80000 )
    {
      if ( qword_1403551D0 < 0x40000 )
        goto LABEL_11;
      v4 = 8;
    }
    else
    {
      v4 = 32;
    }
    dword_14034E648[0] = v4;
LABEL_11:
    v5 = (unsigned int *)&unk_14034E64C;
    v6 = 2LL;
    while ( 1 )
    {
      *v5++ = v4 >> 1;
      if ( !--v6 )
        break;
      v4 = dword_14034E648[0];
    }
  }
  v7 = MmPfnDatabase + (MxPfnAllocation << 12);
  v44 = v7;
  v8 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  v46 = v8;
  if ( (((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF) != 0 )
    v9 = 0x200000 - v8;
  else
    v9 = 0LL;
  v41 = v9;
  qword_14034FC60 = 0x100000000LL;
  v10 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v42 = v10;
  v11 = ((v10 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v43 = v10 << 9;
  v12 = (((v10 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v13 = MiReservePtes((__int64)&qword_14034FC70, ((unsigned __int16)KeNumberNodes * (v12 + 2 * v11)) >> 12, 1uLL);
  if ( !v13 )
    return 0LL;
  v15 = 0;
  if ( KeNumberNodes )
  {
    v16 = 8 * (v12 >> 12);
    v17 = 8 * (v11 >> 12);
    v48 = v10 << 21;
    v45 = v16;
    do
    {
      v18 = qword_14034EB70;
      v19 = 26LL * v15;
      v52 = qword_14034EB70;
      v51 = v19 * 16;
      qword_14034EB70[v19 + 20].Region = (v43 * v15 - 0x200000000LL) << 12;
      LODWORD(v49) = v15 + 1;
      v18[v19 + 21].Alignment = (v43 * (v15 + 1) - 0x200000000LL) << 12;
      v20 = (__int64)((_QWORD)v13 << 25) >> 16;
      v47 = v15;
      MiInitializeDynamicBitmap(&v18[v19 + 23].Region, v20, v43, 3);
      v13 = (__int64 *)((char *)v13 + v16);
      v21 = ((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( (v20 & 0x1FFFFF) != 0 )
        v21 += 8LL;
      v22 = (((unsigned __int64)((__int64)((_QWORD)v13 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( (((__int64)((_QWORD)v13 << 25) >> 16) & 0x1FFFFF) != 0 )
        v22 = (((unsigned __int64)((__int64)((_QWORD)v13 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000008LL;
      if ( v21 < v22 )
        MiEliminatePageTablesOfOnes(v21, (__int64)(v22 - v21) >> 3);
      v23 = 2LL;
      v24 = v51;
      v25 = v52;
      v26 = (unsigned __int64 *)((char *)&v52[24].Region + v51);
      v27 = (unsigned __int64 *)((char *)&v52[21].Region + v51);
      do
      {
        MiInitializeDynamicBitmap(v27, (__int64)((_QWORD)v13 << 25) >> 16, v42, 3);
        v13 = (__int64 *)((char *)v13 + v17);
        *(unsigned __int64 *)((char *)&v25[11].Alignment + v24) = *v27;
        *v27 = 8LL;
        v27 += 2;
        *v26++ = 8LL;
        --v23;
      }
      while ( v23 );
      v28 = (__int64 *)((char *)&qword_14034EB70[11].Region + v51);
      v7 = v44;
      v16 = v45;
      v9 = v41;
      v8 = v46;
      v28[9] = (__int64)dword_14034FE40;
      if ( !(unsigned int)MiBuildDynamicRegion(v28, (v42 * v47 - 0x1000000) << 21, v48) )
        return 0LL;
      v15 = v49;
    }
    while ( (unsigned int)v49 < (unsigned __int16)KeNumberNodes );
  }
  v29 = (__int64 *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( v9 )
  {
    PteShadow = *v29;
    v31 = 0x90482413000LL;
    if ( (unsigned __int64)(v29 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow((__int64)v29, *v29);
    v49 = PteShadow;
    v32 = PteShadow;
    if ( (unsigned __int64)&v49 + v31 <= 0x7F8 )
      v32 = MiReadPteShadow((__int64)&v49, PteShadow);
    v33 = (v8 >> 12) + ((v32 >> 12) & 0xFFFFFFFFFLL);
    v34 = &qword_14034EB70[26 * ((unsigned __int8)HIBYTE(*(_QWORD *)(48 * v33 - 0x57FFFFFFFD8LL)) >> 2)];
    v35 = MiExpandNonPagedPool(
            512,
            0x200uLL,
            (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v33 - 0x57FFFFFFFD8LL)) >> 2,
            v33 & 0x1FF,
            0,
            &v50);
    if ( v35 == -1 )
      return 0LL;
    Region = v34[20].Region;
    v37 = v8 + Region + (v35 << 12);
    v38 = (v37 - Region) >> 12;
    RtlClearBitsEx((__int64)&v34[23].Region, v38, v9 >> 12);
    _bittestandreset64((signed __int64 *)v34[22].Alignment, v38 >> 9);
    v39 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = (__int64 *)(((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v40 = PteShadow;
    if ( (unsigned __int64)(v40 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v40, PteShadow);
    MiInitializeLargeNonPagedPoolLeafFrames(v39, v33);
    v34[16].Region = v33;
    v34[17].Alignment = v33 | 0x1FF;
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
